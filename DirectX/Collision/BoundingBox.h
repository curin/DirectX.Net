#pragma once

#include <DirectXCollision.h>

namespace DirectX
{
	namespace Math
	{
		inline DirectX::BoundingBox* BoxNew(XMFLOAT3* center, XMFLOAT3* extents) { return new DirectX::BoundingBox(*center, *extents); }
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

		public ref class BoundingBox
		{
		public:
			static const unsigned int CORNER_COUNT = 8;

			DirectX::BoundingBox* _box;

			// Creators
			BoundingBox() { _box = new DirectX::BoundingBox(); }
			~BoundingBox() { delete _box; }

			BoundingBox(DirectX::BoundingBox* box) { _box = box; }

			BoundingBox(Vector3^ center, Vector3^ extents)
			{
				XMFLOAT3* Center = new XMFLOAT3(center->X, center->Y, center->Z);
				XMFLOAT3* Extents = new XMFLOAT3(extents->X, extents->Y, extents->Z);
				_box = BoxNew(Center, Extents);
				delete Center;
				delete Extents;
			}

			// Methods
			void Transform(BoundingBox^ Out, DirectX::Math::XMMATRIX^ M) { BoxTransform(_box, Out->_box, M->_mat); }
			void Transform(BoundingBox^ Out, float Scale, DirectX::Math::XMVECTOR^ Rotation, DirectX::Math::XMVECTOR^ Translation) { BoxTransform(_box, Out->_box, Scale, Rotation->_vect, Translation->_vect); }

			void GetCorners([Out] array<Vector3>^% Corners) 
			{
				XMFLOAT3* corners;
				Corners = gcnew array<Vector3>(CORNER_COUNT);
				_box->GetCorners(corners);
				for (int i = 0; i < CORNER_COUNT; i++)
					Corners[i] = Vector3(corners[i].x, corners[i].y, corners[i].z);
				delete corners;
			}
			// Gets the 8 corners of the box

			DirectX::Math::ContainmentType Contains(DirectX::Math::XMVECTOR^ Point) { return (DirectX::Math::ContainmentType)BoxContains(_box, Point->_vect); }
			DirectX::Math::ContainmentType Contains(DirectX::Math::XMVECTOR^ V0, DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2) { return (DirectX::Math::ContainmentType)BoxContains(_box, V0->_vect, V1->_vect, V2->_vect); }
			DirectX::Math::ContainmentType Contains(DirectX::Math::BoundingSphere^ sh) { return (DirectX::Math::ContainmentType)BoxContains(_box, sh->_sphere); }
			DirectX::Math::ContainmentType Contains(DirectX::Math::BoundingBox^ box) { return (DirectX::Math::ContainmentType)BoxContains(_box, box->_box); }
			DirectX::Math::ContainmentType Contains(DirectX::Math::BoundingOrientedBox^ box) { return (DirectX::Math::ContainmentType)BoxContains(_box, box->_box); }
			DirectX::Math::ContainmentType Contains(DirectX::Math::BoundingFrustum^ fr) { return (DirectX::Math::ContainmentType)BoxContains(_box, fr->_frustum); }

			bool Intersects(DirectX::Math::BoundingSphere^ sh) { return BoxIntersects(_box, sh->_sphere); }
			bool Intersects(DirectX::Math::BoundingBox^ box) { return BoxIntersects(_box, box->_box); }
			bool Intersects(DirectX::Math::BoundingOrientedBox^ box) { return BoxIntersects(_box, box->_box); }
			bool Intersects(DirectX::Math::BoundingFrustum^ fr) { return BoxIntersects(_box, fr->_frustum); }

			bool Intersects(DirectX::Math::XMVECTOR^ V0, DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2) { return BoxIntersects(_box, V0->_vect, V1->_vect, V2->_vect); }
			// Triangle-Box test

			DirectX::Math::PlaneIntersectionType Intersects(DirectX::Math::XMVECTOR^ Plane) { return (DirectX::Math::PlaneIntersectionType)BoxIntersects(_box, Plane->_vect); }
			// Plane-box test

			bool Intersects(DirectX::Math::XMVECTOR^ Origin, DirectX::Math::XMVECTOR^ Direction, float% Dist) { pin_ptr<float> dist = &Dist; return BoxIntersects(_box, Origin->_vect, Direction->_vect, dist); }
			// Ray-Box test

			DirectX::Math::ContainmentType ContainedBy(DirectX::Math::XMVECTOR^ Plane0, DirectX::Math::XMVECTOR^ Plane1, DirectX::Math::XMVECTOR^ Plane2,
				DirectX::Math::XMVECTOR^ Plane3, DirectX::Math::XMVECTOR^ Plane4, DirectX::Math::XMVECTOR^ Plane5) {
				return (DirectX::Math::ContainmentType)BoxContainedBy(_box, Plane0->_vect, Plane1->_vect, Plane2->_vect, Plane3->_vect, Plane4->_vect, Plane5->_vect);
			}
			// Test box against six planes (see BoundingFrustum::GetPlanes)

		// Static methods
			static void CreateMerged(BoundingBox^ Out, BoundingBox^ b1, BoundingBox^ b2) { BoxCreateMerged(Out->_box, b1->_box, b2->_box); }

			static void CreateFromSphere(BoundingBox^ Out, BoundingSphere^ sh) { BoxCreateFromSphere(Out->_box, sh->_sphere); }

			static void CreateFromPoints(BoundingBox^ Out, DirectX::Math::XMVECTOR^ pt1, DirectX::Math::XMVECTOR^ pt2) { BoxCreateFromPoints(Out->_box, pt1->_vect, pt2->_vect); }
			static void CreateFromPoints(BoundingBox^ Out, unsigned int Count, array<Vector3>^ pPoints, unsigned int Stride)
			{
				XMFLOAT3* points = new XMFLOAT3[Count];
				Vector3 temp;
				for (int i = 0; i < Count; i++)
				{
					temp = pPoints[i];
					points[i] = XMFLOAT3(temp.X, temp.Y, temp.Z);
				}

				BoxCreateFromPoints(Out->_box, Count, points, Stride);
				delete points;
			}
		};
	}
}