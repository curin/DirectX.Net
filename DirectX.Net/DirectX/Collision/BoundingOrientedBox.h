#pragma once

#include <DirectXCollision.h>
#include "../Math/XMFLOAT.h"
#include "../Math/XMVECTOR.h"
#include "../Math/XMMATRIX.h"
#include "ContainmentType.h"
#include "PlaneIntersectionType.h"

#include "BoundingBox.h"
#include "BoundingOrientedBox.h"
#include "BoundingSphere.h"

using namespace System::Runtime::InteropServices;

namespace DirectX
{
	namespace Math
	{
		inline void OBoxTransform(DirectX::BoundingOrientedBox* OBox, DirectX::BoundingOrientedBox* Out, DirectX::XMMATRIX* M) { OBox->Transform(*Out, *M); }
		inline void OBoxTransform(DirectX::BoundingOrientedBox* OBox, DirectX::BoundingOrientedBox* Out, float Scale, DirectX::XMVECTOR* Rotation, DirectX::XMVECTOR* Translation) { OBox->Transform(*Out, Scale, *Rotation, *Translation); }
		inline DirectX::ContainmentType OBoxContains(DirectX::BoundingOrientedBox* OBox, DirectX::XMVECTOR* Point) { return OBox->Contains(*Point); }
		inline DirectX::ContainmentType OBoxContains(DirectX::BoundingOrientedBox* OBox, DirectX::XMVECTOR* V0, DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2) { return OBox->Contains(*V0, *V1, *V2); }
		inline DirectX::ContainmentType OBoxContains(DirectX::BoundingOrientedBox* OBox, DirectX::BoundingSphere* sh) { return OBox->Contains(*sh); }
		inline DirectX::ContainmentType OBoxContains(DirectX::BoundingOrientedBox* OBox, DirectX::BoundingBox* box) { return OBox->Contains(*box); }
		inline DirectX::ContainmentType OBoxContains(DirectX::BoundingOrientedBox* OBox, DirectX::BoundingOrientedBox* box) { return OBox->Contains(*box); }
		inline DirectX::ContainmentType OBoxContains(DirectX::BoundingOrientedBox* OBox, DirectX::BoundingFrustum* fr) { return OBox->Contains(*fr); }
		inline bool OBoxIntersects(DirectX::BoundingOrientedBox* OBox, DirectX::BoundingSphere* sh) { return OBox->Intersects(*sh); }
		inline bool OBoxIntersects(DirectX::BoundingOrientedBox* OBox, DirectX::BoundingBox* box) { return OBox->Intersects(*box); }
		inline bool OBoxIntersects(DirectX::BoundingOrientedBox* OBox, DirectX::BoundingOrientedBox* box) { return OBox->Intersects(*box); }
		inline bool OBoxIntersects(DirectX::BoundingOrientedBox* OBox, DirectX::BoundingFrustum* fr) { return OBox->Intersects(*fr); }
		inline bool OBoxIntersects(DirectX::BoundingOrientedBox* OBox, DirectX::XMVECTOR* V0, DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2) { return OBox->Intersects(*V0, *V1, *V2); }
		inline DirectX::PlaneIntersectionType OBoxIntersects(DirectX::BoundingOrientedBox* OBox, DirectX::XMVECTOR* Plane) { return OBox->Intersects(*Plane); }
		inline bool OBoxIntersects(DirectX::BoundingOrientedBox* OBox, DirectX::XMVECTOR* Origin, DirectX::XMVECTOR* Direction, float* Dist) { return OBox->Intersects(*Origin, *Direction, *Dist); }
		inline DirectX::ContainmentType OBoxContainedBy(DirectX::BoundingOrientedBox* OBox, DirectX::XMVECTOR* Plane0, DirectX::XMVECTOR* Plane1, DirectX::XMVECTOR* Plane2, DirectX::XMVECTOR* Plane3, DirectX::XMVECTOR* Plane4, DirectX::XMVECTOR* Plane5) { return OBox->ContainedBy(*Plane0, *Plane1, *Plane2, *Plane3, *Plane4, *Plane5); }
		inline void OBoxCreateFromBoundingBox(DirectX::BoundingOrientedBox* Out, DirectX::BoundingBox* box) { DirectX::BoundingOrientedBox::CreateFromBoundingBox(*Out, *box); }
		inline void OBoxCreateFromPoints(DirectX::BoundingOrientedBox* Out, unsigned int Count, DirectX::XMFLOAT3* pPoints, unsigned int Stride) { DirectX::BoundingOrientedBox::CreateFromPoints(*Out, Count, pPoints, Stride); }
		inline void OBoxGetCorners(DirectX::BoundingOrientedBox* OBox, DirectX::XMFLOAT3* Corners) { OBox->GetCorners(Corners); }

		public value struct BoundingOrientedBox
		{
			static const size_t CORNER_COUNT = 8;

			XMFLOAT3 Center;            // Center of the box.
			XMFLOAT3 Extents;           // Distance from the center to each side.
			XMFLOAT4 Orientation;       // Unit quaternion representing rotation (box -> world).

			BoundingOrientedBox(XMFLOAT3% _Center, XMFLOAT3% _Extents, XMFLOAT4% _Orientation)
				: Center(_Center), Extents(_Extents), Orientation(_Orientation) {}

			// Methods
			void Transform([Out] BoundingOrientedBox% Out, XMMATRIX^ M)
			{
				pin_ptr<BoundingOrientedBox> pB = this;
				DirectX::BoundingOrientedBox* pBox = (DirectX::BoundingOrientedBox*)pB;
				pin_ptr<BoundingOrientedBox> pO = &Out;
				DirectX::BoundingOrientedBox* pOut = (DirectX::BoundingOrientedBox*)pO;
				OBoxTransform(pBox, pOut, (DirectX::XMMATRIX*)M);
			}
			void Transform([Out] BoundingOrientedBox% Out, float Scale, XMVECTOR^ Rotation, XMVECTOR^ Translation)
			{
				pin_ptr<BoundingOrientedBox> pB = this;
				DirectX::BoundingOrientedBox* pBox = (DirectX::BoundingOrientedBox*)pB;
				pin_ptr<BoundingOrientedBox> pO = &Out;
				DirectX::BoundingOrientedBox* pOut = (DirectX::BoundingOrientedBox*)pO;
				OBoxTransform(pBox, pOut, Scale, (DirectX::XMVECTOR*)Rotation, (DirectX::XMVECTOR*)Translation);
			}

			void GetCorners(array<XMFLOAT3>^ Corners)
			{
				pin_ptr<BoundingOrientedBox> pB = this;
				DirectX::BoundingOrientedBox* pBox = (DirectX::BoundingOrientedBox*)pB;
				pin_ptr<XMFLOAT3> pC = &Corners[0];
				DirectX::XMFLOAT3* pCorn = (DirectX::XMFLOAT3*)pC;
				OBoxGetCorners(pBox, pCorn);
			}
			// Gets the 8 corners of the box

			ContainmentType Contains(XMVECTOR^ Point)
			{
				pin_ptr<BoundingOrientedBox> pB = this;
				DirectX::BoundingOrientedBox* pBox = (DirectX::BoundingOrientedBox*)pB;
				return (ContainmentType)OBoxContains(pBox, (DirectX::XMVECTOR*)Point);
			}
			ContainmentType Contains(XMVECTOR^ V0, XMVECTOR^ V1, XMVECTOR^ V2)
			{
				pin_ptr<BoundingOrientedBox> pB = this;
				DirectX::BoundingOrientedBox* pBox = (DirectX::BoundingOrientedBox*)pB;
				return (ContainmentType)OBoxContains(pBox, (DirectX::XMVECTOR*)V0, (DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2);
			}
			ContainmentType Contains(BoundingSphere% sh)
			{
				pin_ptr<BoundingOrientedBox> pB = this;
				DirectX::BoundingOrientedBox* pBox = (DirectX::BoundingOrientedBox*)pB;
				pin_ptr<BoundingSphere> pS = &sh;
				DirectX::BoundingSphere* pSh = (DirectX::BoundingSphere*)pS;
				return (ContainmentType)OBoxContains(pBox, pSh);
			}

			ContainmentType Contains(BoundingBox% box)
			{
				pin_ptr<BoundingOrientedBox> pB = this;
				DirectX::BoundingOrientedBox* pBox = (DirectX::BoundingOrientedBox*)pB;
				pin_ptr<BoundingBox> pB2 = &box;
				DirectX::BoundingBox* pBox2 = (DirectX::BoundingBox*)pB2;
				return (ContainmentType)OBoxContains(pBox, pBox2);
			}
			ContainmentType Contains(BoundingOrientedBox% box)
			{
				pin_ptr<BoundingOrientedBox> pB = this;
				DirectX::BoundingOrientedBox* pBox = (DirectX::BoundingOrientedBox*)pB;
				pin_ptr<BoundingOrientedBox> pB2 = &box;
				DirectX::BoundingOrientedBox* pBox2 = (DirectX::BoundingOrientedBox*)pB2;
				return (ContainmentType)OBoxContains(pBox, pBox2);
			}
			ContainmentType Contains(BoundingFrustum% fr)
			{
				pin_ptr<BoundingOrientedBox> pB = this;
				DirectX::BoundingOrientedBox* pBox = (DirectX::BoundingOrientedBox*)pB;
				pin_ptr<BoundingFrustum> pF = &fr;
				DirectX::BoundingFrustum* pFr = (DirectX::BoundingFrustum*)pF;
				return (ContainmentType)OBoxContains(pBox, pFr);
			}

			bool Intersects(BoundingSphere% sh)
			{
				pin_ptr<BoundingOrientedBox> pB = this;
				DirectX::BoundingOrientedBox* pBox = (DirectX::BoundingOrientedBox*)pB;
				pin_ptr<BoundingSphere> pS = &sh;
				DirectX::BoundingSphere* pSh = (DirectX::BoundingSphere*)pS;
				return OBoxIntersects(pBox, pSh);
			}

			bool Intersects(BoundingBox% box)
			{
				pin_ptr<BoundingOrientedBox> pB = this;
				DirectX::BoundingOrientedBox* pBox = (DirectX::BoundingOrientedBox*)pB;
				pin_ptr<BoundingBox> pB2 = &box;
				DirectX::BoundingBox* pBox2 = (DirectX::BoundingBox*)pB2;
				return OBoxIntersects(pBox, pBox2);
			}

			bool Intersects(BoundingOrientedBox% box)
			{
				pin_ptr<BoundingOrientedBox> pB = this;
				DirectX::BoundingOrientedBox* pBox = (DirectX::BoundingOrientedBox*)pB;
				pin_ptr<BoundingOrientedBox> pB2 = &box;
				DirectX::BoundingOrientedBox* pBox2 = (DirectX::BoundingOrientedBox*)pB2;
				return OBoxIntersects(pBox, pBox2);
			}

			bool Intersects(BoundingFrustum% fr)
			{
				pin_ptr<BoundingOrientedBox> pB = this;
				DirectX::BoundingOrientedBox* pBox = (DirectX::BoundingOrientedBox*)pB;
				pin_ptr<BoundingFrustum> pF = &fr;
				DirectX::BoundingFrustum* pFr = (DirectX::BoundingFrustum*)pF;
				return OBoxIntersects(pBox, pFr);
			}

			bool Intersects(XMVECTOR^ V0, XMVECTOR^ V1, XMVECTOR^ V2)
			{
				pin_ptr<BoundingOrientedBox> pB = this;
				DirectX::BoundingOrientedBox* pBox = (DirectX::BoundingOrientedBox*)pB;
				return OBoxIntersects(pBox, (DirectX::XMVECTOR*)V0, (DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2);
			}
			// Triangle-OrientedBox test

			PlaneIntersectionType Intersects(XMVECTOR^ Plane)
			{
				pin_ptr<BoundingOrientedBox> pB = this;
				DirectX::BoundingOrientedBox* pBox = (DirectX::BoundingOrientedBox*)pB;
				return (PlaneIntersectionType)OBoxIntersects(pBox, (DirectX::XMVECTOR*)Plane);
			}
			// Plane-OrientedBox test

			bool Intersects(XMVECTOR^ Origin, XMVECTOR^ Direction, [Out] float% Dist)
			{
				pin_ptr<BoundingOrientedBox> pB = this;
				DirectX::BoundingOrientedBox* pBox = (DirectX::BoundingOrientedBox*)pB;
				pin_ptr<float> pDist = &Dist;
				return OBoxIntersects(pBox, (DirectX::XMVECTOR*)Origin, (DirectX::XMVECTOR*)Direction, pDist);
			}
			// Ray-OrientedBox test

			ContainmentType ContainedBy(XMVECTOR^ Plane0, XMVECTOR^ Plane1, XMVECTOR^ Plane2,
				XMVECTOR^ Plane3, XMVECTOR^ Plane4, XMVECTOR^ Plane5)
			{
				pin_ptr<BoundingOrientedBox> pB = this;
				DirectX::BoundingOrientedBox* pBox = (DirectX::BoundingOrientedBox*)pB;
				return (ContainmentType)OBoxContainedBy(pBox, (DirectX::XMVECTOR*)Plane0, (DirectX::XMVECTOR*)Plane1, (DirectX::XMVECTOR*)Plane2,
					(DirectX::XMVECTOR*)Plane3, (DirectX::XMVECTOR*)Plane4, (DirectX::XMVECTOR*)Plane5);
			}
			// Test OrientedBox against six planes (see BoundingFrustum::GetPlanes)

			// Static methods
			static void CreateFromBoundingBox([Out] BoundingOrientedBox% Out, BoundingBox% box)
			{
				pin_ptr<BoundingOrientedBox> pO = &Out;
				DirectX::BoundingOrientedBox* pOut = (DirectX::BoundingOrientedBox*)pO;
				pin_ptr<BoundingBox> pB2 = &box;
				DirectX::BoundingBox* pBox2 = (DirectX::BoundingBox*)pB2;
				OBoxCreateFromBoundingBox(pOut, pBox2);
			}

			static void CreateFromPoints([Out] BoundingOrientedBox% Out, unsigned int Count,
				array<XMFLOAT3>^ pPoints, unsigned int Stride)
			{
				pin_ptr<BoundingOrientedBox> pO = &Out;
				DirectX::BoundingOrientedBox* pOut = (DirectX::BoundingOrientedBox*)pO;
				pin_ptr<XMFLOAT3> pA = &pPoints[0];
				DirectX::XMFLOAT3* pArray = (DirectX::XMFLOAT3*)pA;
				OBoxCreateFromPoints(pOut, Count, pArray, Stride);
			}

			static BoundingOrientedBox Default()
			{
				return BoundingOrientedBox(XMFLOAT3(0, 0, 0), XMFLOAT3(1, 1, 1), XMFLOAT4(0, 0, 0, 1));
			}
		};
	}
}