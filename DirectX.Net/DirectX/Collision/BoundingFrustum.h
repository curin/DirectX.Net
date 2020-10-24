#pragma once

#include <DirectXCollision.h>
#include "../Math/XMFLOAT.h"
#include "../Math/XMVECTOR.h"
#include "../Math/XMMATRIX.h"
#include "ContainmentType.h"
#include "PlaneIntersectionType.h"

#include "BoundingBox.h"
#include "BoundingFrustum.h"
#include "BoundingSphere.h"

using namespace System::Runtime::InteropServices;

namespace DirectX
{
	namespace Math
	{
		inline void FrustumNew(DirectX::BoundingFrustum* location, DirectX::XMMATRIX* Projection) { *location = DirectX::BoundingFrustum(*Projection); }
		inline void FrustumTransform(DirectX::BoundingFrustum* Frustum, DirectX::BoundingFrustum* Out, DirectX::XMMATRIX* M) { Frustum->Transform(*Out, *M); }
		inline void FrustumTransform(DirectX::BoundingFrustum* Frustum, DirectX::BoundingFrustum* Out, float Scale, DirectX::XMVECTOR* Rotation, DirectX::XMVECTOR* Translation) { Frustum->Transform(*Out, Scale, *Rotation, *Translation); }
		inline DirectX::ContainmentType FrustumContains(DirectX::BoundingFrustum* Frustum, DirectX::XMVECTOR* Point) { return Frustum->Contains(*Point); }
		inline DirectX::ContainmentType FrustumContains(DirectX::BoundingFrustum* Frustum, DirectX::XMVECTOR* V0, DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2) { return Frustum->Contains(*V0, *V1, *V2); }
		inline DirectX::ContainmentType FrustumContains(DirectX::BoundingFrustum* Frustum, DirectX::BoundingSphere* sh) { return Frustum->Contains(*sh); }
		inline DirectX::ContainmentType FrustumContains(DirectX::BoundingFrustum* Frustum, DirectX::BoundingBox* box) { return Frustum->Contains(*box); }
		inline DirectX::ContainmentType FrustumContains(DirectX::BoundingFrustum* Frustum, DirectX::BoundingOrientedBox* box) { return Frustum->Contains(*box); }
		inline DirectX::ContainmentType FrustumContains(DirectX::BoundingFrustum* Frustum, DirectX::BoundingFrustum* fr) { return Frustum->Contains(*fr); }
		inline bool FrustumIntersects(DirectX::BoundingFrustum* Frustum, DirectX::BoundingSphere* sh) { return Frustum->Intersects(*sh); }
		inline bool FrustumIntersects(DirectX::BoundingFrustum* Frustum, DirectX::BoundingBox* box) { return Frustum->Intersects(*box); }
		inline bool FrustumIntersects(DirectX::BoundingFrustum* Frustum, DirectX::BoundingOrientedBox* box) { return Frustum->Intersects(*box); }
		inline bool FrustumIntersects(DirectX::BoundingFrustum* Frustum, DirectX::BoundingFrustum* fr) { return Frustum->Intersects(*fr); }
		inline bool FrustumIntersects(DirectX::BoundingFrustum* Frustum, DirectX::XMVECTOR* V0, DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2) { return Frustum->Intersects(*V0, *V1, *V2); }
		inline DirectX::PlaneIntersectionType FrustumIntersects(DirectX::BoundingFrustum* Frustum, DirectX::XMVECTOR* Plane) { return Frustum->Intersects(*Plane); }
		inline bool FrustumIntersects(DirectX::BoundingFrustum* Frustum, DirectX::XMVECTOR* Origin, DirectX::XMVECTOR* Direction, float* Dist) { return Frustum->Intersects(*Origin, *Direction, *Dist); }
		inline DirectX::ContainmentType FrustumContainedBy(DirectX::BoundingFrustum* Frustum, DirectX::XMVECTOR* Plane0, DirectX::XMVECTOR* Plane1, DirectX::XMVECTOR* Plane2, DirectX::XMVECTOR* Plane3, DirectX::XMVECTOR* Plane4, DirectX::XMVECTOR* Plane5) { return Frustum->ContainedBy(*Plane0, *Plane1, *Plane2, *Plane3, *Plane4, *Plane5); }
		inline void FrustumCreateFromMatrix(DirectX::BoundingFrustum* Out, DirectX::XMMATRIX* Projection) { DirectX::BoundingFrustum::CreateFromMatrix(*Out, *Projection); }
		inline void FrustumGetCorners(DirectX::BoundingFrustum* Frustum, DirectX::XMFLOAT3* Corners) { Frustum->GetCorners(Corners); }
		inline void FrustumGetPlanes(DirectX::BoundingFrustum* Frustum, DirectX::XMVECTOR* NearPlane, DirectX::XMVECTOR* FarPlane, DirectX::XMVECTOR* RightPlane, DirectX::XMVECTOR* LeftPlane, DirectX::XMVECTOR* TopPlane, DirectX::XMVECTOR* BottomPlane) { Frustum->GetPlanes(NearPlane, FarPlane, RightPlane, LeftPlane, TopPlane, BottomPlane); }

		[StructLayout(LayoutKind::Sequential)]
		public value struct BoundingFrustum
		{
			static const size_t CORNER_COUNT = 8;

			XMFLOAT3 Origin;            // Origin of the frustum (and projection).
			XMFLOAT4 Orientation;       // Quaternion representing rotation.

			float RightSlope;           // Positive X (X/Z)
			float LeftSlope;            // Negative X
			float TopSlope;             // Positive Y (Y/Z)
			float BottomSlope;          // Negative Y
			float Near, Far;            // Z of the near plane and far plane.

			BoundingFrustum(XMFLOAT3% _Origin, XMFLOAT4% _Orientation,
				float _RightSlope, float _LeftSlope, float _TopSlope, float _BottomSlope,
				float _Near, float _Far)
				: Origin(_Origin), Orientation(_Orientation),
				RightSlope(_RightSlope), LeftSlope(_LeftSlope), TopSlope(_TopSlope), BottomSlope(_BottomSlope),
				Near(_Near), Far(_Far) {}
			BoundingFrustum(XMMATRIX^ Projection)
			{
				pin_ptr<BoundingFrustum> p = this;
				DirectX::BoundingFrustum* pF = (DirectX::BoundingFrustum*)p;
				FrustumNew(pF, (DirectX::XMMATRIX*)Projection);
			}

			// Methods
			void Transform([Out] BoundingFrustum% Out, XMMATRIX M)
			{
				pin_ptr<BoundingFrustum> p = this;
				DirectX::BoundingFrustum* pF = (DirectX::BoundingFrustum*)p;
				pin_ptr<BoundingFrustum> pO = &Out;
				DirectX::BoundingFrustum* pOut = (DirectX::BoundingFrustum*)pO;
				FrustumTransform(pF, pOut, (DirectX::XMMATRIX*)M);
			}

			void Transform([Out] BoundingFrustum% Out, float Scale, XMVECTOR^ Rotation, XMVECTOR^ Translation)
			{
				pin_ptr<BoundingFrustum> p = this;
				DirectX::BoundingFrustum* pF = (DirectX::BoundingFrustum*)p;
				pin_ptr<BoundingFrustum> pO = &Out;
				DirectX::BoundingFrustum* pOut = (DirectX::BoundingFrustum*)pO;
				FrustumTransform(pF, pOut, Scale, (DirectX::XMVECTOR*)Rotation, (DirectX::XMVECTOR*)Translation);
			}

			void GetCorners(array<XMFLOAT3>^ Corners)
			{
				pin_ptr<BoundingFrustum> p = this;
				DirectX::BoundingFrustum* pF = (DirectX::BoundingFrustum*)p;
				pin_ptr<XMFLOAT3> pC = &Corners[0];
				DirectX::XMFLOAT3* pCorn = (DirectX::XMFLOAT3*)pCorn;
				FrustumGetCorners(pF, pCorn);
			}
			// Gets the 8 corners of the frustum

			ContainmentType Contains(XMVECTOR^ Point)
			{
				pin_ptr<BoundingFrustum> p = this;
				DirectX::BoundingFrustum* pF = (DirectX::BoundingFrustum*)p;
				return (ContainmentType)FrustumContains(pF, (DirectX::XMVECTOR*)Point);
			}
			
			ContainmentType Contains(XMVECTOR^ V0, XMVECTOR^ V1, XMVECTOR^ V2)
			{
				pin_ptr<BoundingFrustum> p = this;
				DirectX::BoundingFrustum* pF = (DirectX::BoundingFrustum*)p;
				return (ContainmentType)FrustumContains(pF, (DirectX::XMVECTOR*)V0, (DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2);
			}

			ContainmentType Contains(BoundingSphere% sp)
			{
				pin_ptr<BoundingFrustum> p = this;
				DirectX::BoundingFrustum* pF = (DirectX::BoundingFrustum*)p;
				pin_ptr<BoundingSphere> pS = &sp;
				DirectX::BoundingSphere* pSp = (DirectX::BoundingSphere*)pS;
				return (ContainmentType)FrustumContains(pF, pSp);
			}

			ContainmentType Contains(BoundingBox% box)
			{
				pin_ptr<BoundingFrustum> p = this;
				DirectX::BoundingFrustum* pF = (DirectX::BoundingFrustum*)p;
				pin_ptr<BoundingBox> pB = &box;
				DirectX::BoundingBox* pBox = (DirectX::BoundingBox*)pB;
				return (ContainmentType)FrustumContains(pF, pBox);
			}

			ContainmentType Contains(BoundingOrientedBox% box)
			{
				pin_ptr<BoundingFrustum> p = this;
				DirectX::BoundingFrustum* pF = (DirectX::BoundingFrustum*)p;
				pin_ptr<BoundingOrientedBox> pB = &box;
				DirectX::BoundingOrientedBox* pBox = (DirectX::BoundingOrientedBox*)pB;
				return (ContainmentType)FrustumContains(pF, pBox);
			}

			ContainmentType Contains(BoundingFrustum% fr)
			{
				pin_ptr<BoundingFrustum> p = this;
				DirectX::BoundingFrustum* pF = (DirectX::BoundingFrustum*)p;
				pin_ptr<BoundingFrustum> p2 = &fr;
				DirectX::BoundingFrustum* pF2 = (DirectX::BoundingFrustum*)p2;
				return (ContainmentType)FrustumContains(pF, pF2);
			}
			// Frustum-Frustum test

			bool Intersects(BoundingSphere% sh)
			{
				pin_ptr<BoundingFrustum> p = this;
				DirectX::BoundingFrustum* pF = (DirectX::BoundingFrustum*)p;
				pin_ptr<BoundingSphere> pS = &sh;
				DirectX::BoundingSphere* pSp = (DirectX::BoundingSphere*)pS;
				return FrustumIntersects(pF, pSp);
			}

			bool Intersects(BoundingBox% box)
			{
				pin_ptr<BoundingFrustum> p = this;
				DirectX::BoundingFrustum* pF = (DirectX::BoundingFrustum*)p;
				pin_ptr<BoundingBox> pB = &box;
				DirectX::BoundingBox* pBox = (DirectX::BoundingBox*)pB;
				return FrustumIntersects(pF, pBox);
			}

			bool Intersects(BoundingOrientedBox% box)
			{
				pin_ptr<BoundingFrustum> p = this;
				DirectX::BoundingFrustum* pF = (DirectX::BoundingFrustum*)p;
				pin_ptr<BoundingOrientedBox> pB = &box;
				DirectX::BoundingOrientedBox* pBox = (DirectX::BoundingOrientedBox*)pB;
				return FrustumIntersects(pF, pBox);
			}

			bool Intersects(BoundingFrustum% fr)
			{
				pin_ptr<BoundingFrustum> p = this;
				DirectX::BoundingFrustum* pF = (DirectX::BoundingFrustum*)p;
				pin_ptr<BoundingFrustum> p2 = &fr;
				DirectX::BoundingFrustum* pF2 = (DirectX::BoundingFrustum*)p2;
				return FrustumIntersects(pF, pF2);
			}

			bool Intersects(XMVECTOR^ V0, XMVECTOR^ V1, XMVECTOR^ V2)
			{
				pin_ptr<BoundingFrustum> p = this;
				DirectX::BoundingFrustum* pF = (DirectX::BoundingFrustum*)p;
				return FrustumIntersects(pF, (DirectX::XMVECTOR*)V0, (DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2);
			}
			// Triangle-Frustum test

			PlaneIntersectionType Intersects(XMVECTOR^ Plane)
			{
				pin_ptr<BoundingFrustum> p = this;
				DirectX::BoundingFrustum* pF = (DirectX::BoundingFrustum*)p;
				return (PlaneIntersectionType)FrustumIntersects(pF, (DirectX::XMVECTOR*)Plane);
			}
			// Plane-Frustum test

			bool Intersects(XMVECTOR^ rayOrigin, XMVECTOR^ Direction, [Out] float% Dist)
			{
				pin_ptr<BoundingFrustum> p = this;
				DirectX::BoundingFrustum* pF = (DirectX::BoundingFrustum*)p;
				pin_ptr<float> pDist = &Dist;
				return FrustumIntersects(pF, (DirectX::XMVECTOR*)rayOrigin, (DirectX::XMVECTOR*)Direction, pDist);
			}
			// Ray-Frustum test

			ContainmentType ContainedBy(XMVECTOR^ Plane0, XMVECTOR^ Plane1, XMVECTOR^ Plane2,
				XMVECTOR^ Plane3, XMVECTOR^ Plane4, XMVECTOR^ Plane5)
			{
				pin_ptr<BoundingFrustum> p = this;
				DirectX::BoundingFrustum* pF = (DirectX::BoundingFrustum*)p;
				return (ContainmentType)FrustumContainedBy(pF, (DirectX::XMVECTOR*)Plane0, (DirectX::XMVECTOR*)Plane1, (DirectX::XMVECTOR*)Plane2,
					(DirectX::XMVECTOR*)Plane3, (DirectX::XMVECTOR*)Plane4, (DirectX::XMVECTOR*)Plane5);
			}
			// Test frustum against six planes (see BoundingFrustum::GetPlanes)

			void GetPlanes(XMVECTOR^ NearPlane, XMVECTOR^ FarPlane, XMVECTOR^ RightPlane,
				XMVECTOR^ LeftPlane, XMVECTOR^ TopPlane, XMVECTOR^ BottomPlane)
			{
				pin_ptr<BoundingFrustum> p = this;
				DirectX::BoundingFrustum* pF = (DirectX::BoundingFrustum*)p;
				FrustumGetPlanes(pF, (DirectX::XMVECTOR*)NearPlane, (DirectX::XMVECTOR*)FarPlane, (DirectX::XMVECTOR*)RightPlane, (DirectX::XMVECTOR*)LeftPlane,
					(DirectX::XMVECTOR*)TopPlane, (DirectX::XMVECTOR*)BottomPlane);
			}
			// Create 6 Planes representation of Frustum

			// Static methods
			static void CreateFromMatrix([Out] BoundingFrustum% Out, XMMATRIX^ Projection)
			{
				pin_ptr<BoundingFrustum> pO = &Out;
				DirectX::BoundingFrustum* pOut = (DirectX::BoundingFrustum*)pO;
				FrustumCreateFromMatrix(pOut, (DirectX::XMMATRIX*)Projection);
			}

			static BoundingFrustum Default()
			{
				return BoundingFrustum(XMFLOAT3(0, 0, 0), XMFLOAT4(0, 0, 0, 1), 1, -1, 1, -1, 0, 1);
			}
		};
	}
}