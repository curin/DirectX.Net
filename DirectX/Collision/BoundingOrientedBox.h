#pragma once

#include <DirectXCollision.h>

namespace DirectX
{
	namespace Math
	{
		inline DirectX::BoundingOrientedBox* OBoxNew(XMFLOAT3* center, XMFLOAT3* extents, XMFLOAT4* orientation) { return new DirectX::BoundingOrientedBox(*center, *extents, *orientation); }
		inline void OBoxTransform(DirectX::BoundingOrientedBox* OBox, DirectX::BoundingOrientedBox* Out, DirectX::XMMATRIX* M) { OBox->Transform(*Out, *M); }
		inline void OBoxTransform(DirectX::BoundingOrientedBox* OBox, DirectX::BoundingOrientedBox* Out, float Scale, DirectX::XMVECTOR* Rotation, DirectX::XMVECTOR* Translation) { OBox->Transform(*Out, Scale, *Rotation, *Translation); }
		inline DirectX::ContainmentType OBoxContains(DirectX::BoundingOrientedBox* OBox, DirectX::XMVECTOR* Point) { return OBox->Contains(*Point); }
		inline DirectX::ContainmentType OBoxContains(DirectX::BoundingOrientedBox* OBox, DirectX::XMVECTOR* V0, DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2) { return OBox->Contains(*V0, *V1, *V2); }
		inline DirectX::ContainmentType OBoxContains(DirectX::BoundingOrientedBox* OBox, DirectX::BoundingSphere* sh) { return OBox->Contains(*sh); }
		inline DirectX::ContainmentType OBoxContains(DirectX::BoundingOrientedBox* OBox, DirectX::BoundingOrientedBox* box) { return OBox->Contains(*box); }
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
		public ref class BoundingOrientedBox
		{
			
		public:
			static const size_t CORNER_COUNT = 8;

			DirectX::BoundingOrientedBox* _box;

			// Creators
			BoundingOrientedBox() { _box = new DirectX::BoundingOrientedBox(); }
			~BoundingOrientedBox() { delete _box; }

			BoundingOrientedBox(DirectX::BoundingOrientedBox* box) { _box = box; }

			BoundingOrientedBox(Vector3^ center, Vector3^ extents, Vector4^ orientation)
			{
				XMFLOAT3* Center = new XMFLOAT3(center->X, center->Y, center->Z);
				XMFLOAT3* Extents = new XMFLOAT3(extents->X, extents->Y, extents->Z);
				XMFLOAT4* Orient = new XMFLOAT4(orientation->X, orientation->Y, orientation->Z, orientation->W);
				_box = OBoxNew(Center, Extents, Orient);
				delete Center;
				delete Extents;
			}

			// Methods
			void Transform(BoundingOrientedBox^ Out, DirectX::Math::XMMATRIX^ M) { OBoxTransform(_box, Out->_box, M->_mat); }
			void Transform(BoundingOrientedBox^ Out, float Scale, DirectX::Math::XMVECTOR^ Rotation, DirectX::Math::XMVECTOR^ Translation) { OBoxTransform(_box, Out->_box, Scale, Rotation->_vect, Translation->_vect); }

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

			DirectX::Math::ContainmentType Contains(DirectX::Math::XMVECTOR^ Point) { return (DirectX::Math::ContainmentType)OBoxContains(_box, Point->_vect); }
			DirectX::Math::ContainmentType Contains(DirectX::Math::XMVECTOR^ V0, DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2) { return (DirectX::Math::ContainmentType)OBoxContains(_box, V0->_vect, V1->_vect, V2->_vect); }
			DirectX::Math::ContainmentType Contains(DirectX::Math::BoundingSphere^ sh) { return (DirectX::Math::ContainmentType)OBoxContains(_box, sh->_sphere); }
			DirectX::Math::ContainmentType Contains(DirectX::Math::BoundingOrientedBox^ box) { return (DirectX::Math::ContainmentType)OBoxContains(_box, box->_box); }
			DirectX::Math::ContainmentType Contains(DirectX::Math::BoundingOrientedBox^ box) { return (DirectX::Math::ContainmentType)OBoxContains(_box, box->_box); }
			DirectX::Math::ContainmentType Contains(DirectX::Math::BoundingFrustum^ fr) { return (DirectX::Math::ContainmentType)OBoxContains(_box, fr->_frustum); }

			bool Intersects(DirectX::Math::BoundingSphere^ sh) { return OBoxIntersects(_box, sh->_sphere); }
			bool Intersects(DirectX::Math::BoundingOrientedBox^ box) { return OBoxIntersects(_box, box->_box); }
			bool Intersects(DirectX::Math::BoundingOrientedBox^ box) { return OBoxIntersects(_box, box->_box); }
			bool Intersects(DirectX::Math::BoundingFrustum^ fr) { return OBoxIntersects(_box, fr->_frustum); }

			bool Intersects(DirectX::Math::XMVECTOR^ V0, DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2) { return OBoxIntersects(_box, V0->_vect, V1->_vect, V2->_vect); }
			// Triangle-Box test

			DirectX::Math::PlaneIntersectionType Intersects(DirectX::Math::XMVECTOR^ Plane) { return (DirectX::Math::PlaneIntersectionType)OBoxIntersects(_box, Plane->_vect); }
			// Plane-box test

			bool Intersects(DirectX::Math::XMVECTOR^ Origin, DirectX::Math::XMVECTOR^ Direction, float% Dist) { pin_ptr<float> dist = &Dist; return OBoxIntersects(_box, Origin->_vect, Direction->_vect, dist); }
			// Ray-Box test

			DirectX::Math::ContainmentType ContainedBy(DirectX::Math::XMVECTOR^ Plane0, DirectX::Math::XMVECTOR^ Plane1, DirectX::Math::XMVECTOR^ Plane2,
				DirectX::Math::XMVECTOR^ Plane3, DirectX::Math::XMVECTOR^ Plane4, DirectX::Math::XMVECTOR^ Plane5) {
				return (DirectX::Math::ContainmentType)OBoxContainedBy(_box, Plane0->_vect, Plane1->_vect, Plane2->_vect, Plane3->_vect, Plane4->_vect, Plane5->_vect);
			}
			// Test box against six planes (see BoundingFrustum::GetPlanes)

		// Static methods
			static void CreateFromSphere(BoundingOrientedBox^ Out, BoundingBox^ box) { OBoxCreateFromBoundingBox(Out->_box, box->_box); }

			static void CreateFromPoints(BoundingOrientedBox^ Out, unsigned int Count, array<Vector3>^ pPoints, unsigned int Stride)
			{
				XMFLOAT3* points = new XMFLOAT3[Count];
				Vector3 temp;
				for (int i = 0; i < Count; i++)
				{
					temp = pPoints[i];
					points[i] = XMFLOAT3(temp.X, temp.Y, temp.Z);
				}

				OBoxCreateFromPoints(Out->_box, Count, points, Stride);
				delete points;
			}
		};
	}
}