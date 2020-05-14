#pragma once

#include <DirectXCollision.h>
#include "../Math/XMFLOAT.h"
#include "../Math/XMVECTOR.h"
#include "../Math/XMMATRIX.h"
#include "ContainmentType.h"
#include "PlaneIntersectionType.h"

#include "BoundingFrustum.h"
#include "BoundingOrientedBox.h"
#include "BoundingSphere.h"

using namespace System::Runtime::InteropServices;

namespace DirectX
{
	namespace Math
	{
		inline void BoxTransform(DirectX::BoundingBox* Box, DirectX::BoundingBox* Out, DirectX::XMMATRIX* M) { Box->Transform(*Out, *M); }
		inline void BoxTransform(DirectX::BoundingBox* Box, DirectX::BoundingBox* Out, float Scale, DirectX::XMVECTOR* Rotation, DirectX::XMVECTOR* Translation) { Box->Transform(*Out, Scale, *Rotation, *Translation); }
		inline DirectX::ContainmentType BoxContains(DirectX::BoundingBox* Box, DirectX::XMVECTOR* Point) { return Box->Contains(*Point); }
		inline DirectX::ContainmentType BoxContains(DirectX::BoundingBox* Box, DirectX::XMVECTOR* V0, DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2) { return Box->Contains(*V0, *V1, *V2); }
		inline DirectX::ContainmentType BoxContains(DirectX::BoundingBox* Box, DirectX::BoundingSphere* sh) { return Box->Contains(*sh); }
		inline DirectX::ContainmentType BoxContains(DirectX::BoundingBox* Box, DirectX::BoundingBox* box) { return Box->Contains(*box); }
		inline DirectX::ContainmentType BoxContains(DirectX::BoundingBox* Box, DirectX::BoundingOrientedBox* box) { return Box->Contains(*box); }
		inline DirectX::ContainmentType BoxContains(DirectX::BoundingBox* Box, DirectX::BoundingFrustum* fr) { return Box->Contains(*fr); }
		inline bool BoxIntersects(DirectX::BoundingBox* Box, DirectX::BoundingSphere* sh) { return Box->Intersects(*sh); }
		inline bool BoxIntersects(DirectX::BoundingBox* Box, DirectX::BoundingBox* box) { return Box->Intersects(*box); }
		inline bool BoxIntersects(DirectX::BoundingBox* Box, DirectX::BoundingOrientedBox* box) { return Box->Intersects(*box); }
		inline bool BoxIntersects(DirectX::BoundingBox* Box, DirectX::BoundingFrustum* fr) { return Box->Intersects(*fr); }
		inline bool BoxIntersects(DirectX::BoundingBox* Box, DirectX::XMVECTOR* V0, DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2) { return Box->Intersects(*V0, *V1, *V2); }
		inline DirectX::PlaneIntersectionType BoxIntersects(DirectX::BoundingBox* Box, DirectX::XMVECTOR* Plane) { return Box->Intersects(*Plane); }
		inline bool BoxIntersects(DirectX::BoundingBox* Box, DirectX::XMVECTOR* Origin, DirectX::XMVECTOR* Direction, float* Dist) { return Box->Intersects(*Origin, *Direction, *Dist); }
		inline DirectX::ContainmentType BoxContainedBy(DirectX::BoundingBox* Box, DirectX::XMVECTOR* Plane0, DirectX::XMVECTOR* Plane1, DirectX::XMVECTOR* Plane2, DirectX::XMVECTOR* Plane3, DirectX::XMVECTOR* Plane4, DirectX::XMVECTOR* Plane5) { return Box->ContainedBy(*Plane0, *Plane1, *Plane2, *Plane3, *Plane4, *Plane5); }
		inline void BoxCreateMerged(DirectX::BoundingBox* Out, DirectX::BoundingBox* S1, DirectX::BoundingBox* S2) { DirectX::BoundingBox::CreateMerged(*Out, *S1, *S2); }
		inline void BoxCreateFromSphere(DirectX::BoundingBox* Out, DirectX::BoundingSphere* sphere) { DirectX::BoundingBox::CreateFromSphere(*Out, *sphere); }
		inline void BoxCreateFromPoints(DirectX::BoundingBox* Out, DirectX::XMVECTOR* P1, DirectX::XMVECTOR* P2) { DirectX::BoundingBox::CreateFromPoints(*Out, *P1, *P2); }
		inline void BoxCreateFromPoints(DirectX::BoundingBox* Out, unsigned int Count, DirectX::XMFLOAT3* pPoints, unsigned int Stride) { DirectX::BoundingBox::CreateFromPoints(*Out, Count, pPoints, Stride); }
		inline void BoxGetCorners(DirectX::BoundingBox* Box, DirectX::XMFLOAT3* Corners) { Box->GetCorners(Corners); }

		[StructLayout(LayoutKind::Sequential)]
		public value struct BoundingBox
		{
			static const unsigned int CORNER_COUNT = 8;
			XMFLOAT3 Center;            // Center of the box.
			XMFLOAT3 Extents;           // Distance from the center to each side.

			BoundingBox(XMFLOAT3 center, XMFLOAT3 extents) 
			{ 
				Center = center;
				Extents = extents;
			}

			void Transform([Out]BoundingBox% Out, XMMATRIX^ M)
			{
				pin_ptr<BoundingBox> pB = this;
				DirectX::BoundingBox* pBox = (DirectX::BoundingBox*)pB;
				pin_ptr<BoundingBox> pO = &Out;
				DirectX::BoundingBox* pOut = (DirectX::BoundingBox*)pO;
				BoxTransform(pBox, pOut, (DirectX::XMMATRIX*)M);
			}

			void Transform([Out]BoundingBox% Out, float Scale, XMVECTOR^ Rotation, XMVECTOR^ Translation)
			{
				pin_ptr<BoundingBox> pB = this;
				DirectX::BoundingBox* pBox = (DirectX::BoundingBox*)pB;
				pin_ptr<BoundingBox> pO = &Out;
				DirectX::BoundingBox* pOut = (DirectX::BoundingBox*)pO;
				BoxTransform(pBox, pOut, Scale, (DirectX::XMVECTOR*)Rotation, (DirectX::XMVECTOR*)Translation);
			}
			
			void GetCorners(array<XMFLOAT3>^ Corners) 
			{
				pin_ptr<BoundingBox> pB = this;
				DirectX::BoundingBox* pBox = (DirectX::BoundingBox*)pB;
				pin_ptr<XMFLOAT3> pC = &Corners[0];
				DirectX::XMFLOAT3* corn = (DirectX::XMFLOAT3*)pC;
				BoxGetCorners(pBox, corn);
			}
			// Gets the 8 corners of the box

			ContainmentType Contains(XMVECTOR^ Point)
			{
				pin_ptr<BoundingBox> pB = this;
				DirectX::BoundingBox* pBox = (DirectX::BoundingBox*)pB;
				return (ContainmentType)BoxContains(pBox, (DirectX::XMVECTOR*)Point);
			}

			ContainmentType Contains(XMVECTOR^ V0, XMVECTOR^ V1, XMVECTOR^ V2)
			{
				pin_ptr<BoundingBox> pB = this;
				DirectX::BoundingBox* pBox = (DirectX::BoundingBox*)pB;
				return (ContainmentType)BoxContains(pBox, (DirectX::XMVECTOR*)V0, (DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2);
			}

			ContainmentType Contains(BoundingSphere% sh)
			{
				pin_ptr<BoundingBox> pB = this;
				DirectX::BoundingBox* pBox = (DirectX::BoundingBox*)pB;
				pin_ptr<BoundingSphere> pS = &sh;
				DirectX::BoundingSphere* pSh = (DirectX::BoundingSphere*)pS;
				return (ContainmentType)BoxContains(pBox, pSh);
			}

			ContainmentType Contains(BoundingBox% box)
			{
				pin_ptr<BoundingBox> pB = this;
				DirectX::BoundingBox* pBox = (DirectX::BoundingBox*)pB;
				pin_ptr<BoundingBox> pb = &box;
				DirectX::BoundingBox* pbox = (DirectX::BoundingBox*)pb;
				return (ContainmentType)BoxContains(pBox, pbox);
			}

			ContainmentType Contains(BoundingOrientedBox% box)
			{
				pin_ptr<BoundingBox> pB = this;
				DirectX::BoundingBox* pBox = (DirectX::BoundingBox*)pB;
				pin_ptr<BoundingOrientedBox> pOb = &box;
				DirectX::BoundingOrientedBox* pbox = (DirectX::BoundingOrientedBox*)pOb;
				return (ContainmentType)BoxContains(pBox, pbox);
			}

			ContainmentType Contains(BoundingFrustum% fr)
			{
				pin_ptr<BoundingBox> pB = this;
				DirectX::BoundingBox* pBox = (DirectX::BoundingBox*)pB;
				pin_ptr<BoundingFrustum> pF = &fr;
				DirectX::BoundingFrustum* pFr = (DirectX::BoundingFrustum*)pF;
				return (ContainmentType)BoxContains(pBox, pFr);
			}

			bool Intersects(BoundingSphere% sh)
			{
				pin_ptr<BoundingBox> pB = this;
				DirectX::BoundingBox* pBox = (DirectX::BoundingBox*)pB;
				pin_ptr<BoundingSphere> pS = &sh;
				DirectX::BoundingSphere* pSh = (DirectX::BoundingSphere*)pS;
				return BoxIntersects(pBox, pSh);
			}

			bool Intersects(BoundingBox% box)
			{
				pin_ptr<BoundingBox> pB = this;
				DirectX::BoundingBox* pBox = (DirectX::BoundingBox*)pB;
				pin_ptr<BoundingBox> pb = &box;
				DirectX::BoundingBox* pbox = (DirectX::BoundingBox*)pb;
				return BoxIntersects(pBox, pbox);
			}

			bool Intersects(BoundingOrientedBox% box)
			{
				pin_ptr<BoundingBox> pB = this;
				DirectX::BoundingBox* pBox = (DirectX::BoundingBox*)pB;
				pin_ptr<BoundingOrientedBox> pOb = &box;
				DirectX::BoundingOrientedBox* pbox = (DirectX::BoundingOrientedBox*)pOb;
				return BoxIntersects(pBox, pbox);
			}

			bool Intersects(BoundingFrustum% fr)
			{
				pin_ptr<BoundingBox> pB = this;
				DirectX::BoundingBox* pBox = (DirectX::BoundingBox*)pB;
				pin_ptr<BoundingFrustum> pF = &fr;
				DirectX::BoundingFrustum* pFr = (DirectX::BoundingFrustum*)pF;
				return BoxIntersects(pBox, pFr);
			}

			bool Intersects(XMVECTOR^ V0, XMVECTOR^ V1, XMVECTOR^ V2)
			{
				pin_ptr<BoundingBox> pB = this;
				DirectX::BoundingBox* pBox = (DirectX::BoundingBox*)pB;
				return BoxIntersects(pBox, (DirectX::XMVECTOR*)V0, (DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2);
			}
			// Triangle-Box test

			PlaneIntersectionType Intersects(XMVECTOR^ Plane)
			{
				pin_ptr<BoundingBox> pB = this;
				DirectX::BoundingBox* pBox = (DirectX::BoundingBox*)pB;
				return (PlaneIntersectionType)BoxIntersects(pBox, (DirectX::XMVECTOR*)Plane);
			}
			// Plane-box test

			bool Intersects(XMVECTOR^ Origin, XMVECTOR^ Direction, [Out] float% Dist)
			{
				pin_ptr<BoundingBox> pB = this;
				DirectX::BoundingBox* pBox = (DirectX::BoundingBox*)pB;
				pin_ptr<float> pF = &Dist;
				return BoxIntersects(pBox, (DirectX::XMVECTOR*)Origin, (DirectX::XMVECTOR*)Direction, pF);
			}
			// Ray-Box test

			ContainmentType ContainedBy(XMVECTOR^ Plane0, XMVECTOR^ Plane1, XMVECTOR^ Plane2,
				XMVECTOR^ Plane3, XMVECTOR^ Plane4, XMVECTOR^ Plane5)
			{
				pin_ptr<BoundingBox> pB = this;
				DirectX::BoundingBox* pBox = (DirectX::BoundingBox*)pB;
				return (ContainmentType)BoxContainedBy(pBox, (DirectX::XMVECTOR*) Plane0, (DirectX::XMVECTOR*) Plane1, (DirectX::XMVECTOR*) Plane2,
					(DirectX::XMVECTOR*) Plane3, (DirectX::XMVECTOR*) Plane4, (DirectX::XMVECTOR*) Plane5);
			}
			// Test box against six planes (see BoundingFrustum::GetPlanes)

		// Static methods
			static void CreateMerged([Out] BoundingBox% Out, BoundingBox% b1, BoundingBox% b2)
			{
				pin_ptr<BoundingBox> pO = &Out;
				DirectX::BoundingBox* pOut = (DirectX::BoundingBox*)pO;
				pin_ptr<BoundingBox> pB1 = &b1;
				DirectX::BoundingBox* pBox1 = (DirectX::BoundingBox*)pB1;
				pin_ptr<BoundingBox> pB2 = &b1;
				DirectX::BoundingBox* pBox2 = (DirectX::BoundingBox*)pB2;
				BoxCreateMerged(pOut, pBox1, pBox2);
			}

			static void CreateFromSphere([Out] BoundingBox% Out, BoundingSphere% sh)
			{
				pin_ptr<BoundingBox> pO = &Out;
				DirectX::BoundingBox* pOut = (DirectX::BoundingBox*)pO;
				pin_ptr<BoundingSphere> pS = &sh;
				DirectX::BoundingSphere* pSh = (DirectX::BoundingSphere*)pS;
				BoxCreateFromSphere(pOut, pSh);
			}

			static void CreateFromPoints([Out] BoundingBox% Out, XMVECTOR^ pt1, XMVECTOR^ pt2)
			{
				pin_ptr<BoundingBox> pO = &Out;
				DirectX::BoundingBox* pOut = (DirectX::BoundingBox*)pO;
				BoxCreateFromPoints(pOut, (DirectX::XMVECTOR*)pt1, (DirectX::XMVECTOR*)pt2);
			}

			static void CreateFromPoints([Out] BoundingBox% Out, unsigned int Count, array<XMFLOAT3>^ pPoints, unsigned int Stride)
			{
				pin_ptr<BoundingBox> pO = &Out;
				DirectX::BoundingBox* pOut = (DirectX::BoundingBox*)pO;
				pin_ptr<XMFLOAT3> pP = &pPoints[0];
				DirectX::XMFLOAT3* pArray = (DirectX::XMFLOAT3*)pP;
				BoxCreateFromPoints(pOut, Count, pArray, Stride);
			}

			static BoundingBox Default()
			{
				return BoundingBox(XMFLOAT3(0, 0, 0), XMFLOAT3(1, 1, 1));
			}
		};
	}
}
