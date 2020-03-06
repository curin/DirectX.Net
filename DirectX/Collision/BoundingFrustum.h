#pragma once

#include <DirectXCollision.h>

namespace DirectX
{
	namespace Math
	{
		DirectX::BoundingFrustum* FrustumNew(XMFLOAT3* _Origin, XMFLOAT4* _Orientation, float _RightSlope, float _LeftSlope, float _TopSlope, float _BottomSlope, float _Near, float _Far) { return new DirectX::BoundingFrustum(*_Origin, *_Orientation, _RightSlope, _LeftSlope, _TopSlope, _BottomSlope, _Near, _Far); }
		DirectX::BoundingFrustum* FrustumNew(DirectX::XMMATRIX* Projection) { return new DirectX::BoundingFrustum(*Projection); }
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
		public ref class BoundingFrustum
		{
		public:
			static unsigned int CORNER_COUNT = 8;

			DirectX::BoundingFrustum* _frustum;

			// Creators
			BoundingFrustum() { _frustum = new DirectX::BoundingFrustum(); }
			~BoundingFrustum() { delete _frustum; }

			BoundingFrustum(DirectX::BoundingFrustum* fr) { _frustum = fr; }

			BoundingFrustum(Vector4^ _Origin, Vector4^ _Orientation,
				float _RightSlope, float _LeftSlope, float _TopSlope, float _BottomSlope,
				float _Near, float _Far)
			{
				XMFLOAT3* origin = new XMFLOAT3(_Origin->X, _Origin->Y, _Origin->Z);
				XMFLOAT4* orient = new XMFLOAT4(_Orientation->X, _Orientation->Y, _Orientation->Z, _Orientation->W);
				_frustum = FrustumNew(origin, orient, _RightSlope, _LeftSlope, _TopSlope, _BottomSlope, _Near, _Far);
				delete origin;
				delete orient;
			}
			BoundingFrustum(DirectX::Math::XMMATRIX^ Projection) { _frustum = FrustumNew(Projection->_mat); }

			// Methods
			void Transform(BoundingFrustum^ Out, DirectX::Math::XMMATRIX^ M);
			void Transform(BoundingFrustum^ Out, float Scale, DirectX::Math::XMVECTOR^ Rotation, DirectX::Math::XMVECTOR^ Translation);

			void GetCorners([Out] array<Vector3>^% Corners)
			{
				XMFLOAT3* corners;
				Corners = gcnew array<Vector3>(CORNER_COUNT);
				_frustum->GetCorners(corners);
				for (int i = 0; i < CORNER_COUNT; i++)
					Corners[i] = Vector3(corners[i].x, corners[i].y, corners[i].z);
				delete corners;
			}
			// Gets the 8 corners of the frustum

			DirectX::Math::ContainmentType Contains(DirectX::Math::XMVECTOR^ Point) { return (DirectX::Math::ContainmentType)FrustumContains(_frustum, Point->_vect); }
			DirectX::Math::ContainmentType Contains(DirectX::Math::XMVECTOR^ V0, DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2) { return (DirectX::Math::ContainmentType)FrustumContains(_frustum, V0->_vect, V1->_vect, V2->_vect); }
			DirectX::Math::ContainmentType Contains(DirectX::Math::BoundingSphere^ sp) { return (DirectX::Math::ContainmentType)FrustumContains(_frustum, sp->_sphere); }
			DirectX::Math::ContainmentType Contains(DirectX::Math::BoundingBox^ box) { return (DirectX::Math::ContainmentType)FrustumContains(_frustum, box->_box); }
			DirectX::Math::ContainmentType Contains(DirectX::Math::BoundingOrientedBox^ box) { return (DirectX::Math::ContainmentType)FrustumContains(_frustum, box->_box); }
			DirectX::Math::ContainmentType Contains(DirectX::Math::BoundingFrustum^ fr) { return (DirectX::Math::ContainmentType)FrustumContains(_frustum, fr->_frustum); }
			// Frustum-Frustum test

			bool Intersects(DirectX::Math::BoundingSphere^ sh) { return FrustumIntersects(_frustum, sh->_sphere); }
			bool Intersects(DirectX::Math::BoundingBox^ box) { return FrustumIntersects(_frustum, box->_box); }
			bool Intersects(DirectX::Math::BoundingOrientedBox^ box) { return FrustumIntersects(_frustum, box->_box); }
			bool Intersects(DirectX::Math::BoundingFrustum^ fr) { return FrustumIntersects(_frustum, fr->_frustum); }

			bool Intersects(DirectX::Math::XMVECTOR^ V0, DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2) { return FrustumIntersects(_frustum, V0->_vect, V1->_vect, V2->_vect); }
			// Triangle-Frustum test

			DirectX::Math::PlaneIntersectionType Intersects(DirectX::Math::XMVECTOR^ Plane) { return (DirectX::Math::PlaneIntersectionType)FrustumIntersects(_frustum, Plane->_vect); }
			// Plane-Frustum test

			bool Intersects(DirectX::Math::XMVECTOR^ rayOrigin, DirectX::Math::XMVECTOR^ Direction, float% Dist) { pin_ptr<float> dist = &Dist; return FrustumIntersects(_frustum, rayOrigin->_vect, Direction->_vect, dist); }
			// Ray-Frustum test

			DirectX::Math::ContainmentType ContainedBy(DirectX::Math::XMVECTOR^ Plane0, DirectX::Math::XMVECTOR^ Plane1, DirectX::Math::XMVECTOR^ Plane2,
				DirectX::Math::XMVECTOR^ Plane3, DirectX::Math::XMVECTOR^ Plane4, DirectX::Math::XMVECTOR^ Plane5) {
				return (DirectX::Math::ContainmentType)FrustumContainedBy(_frustum, Plane0->_vect, Plane1->_vect, Plane2->_vect, Plane3->_vect, Plane4->_vect, Plane5->_vect);
			}
			// Test frustum against six planes (see BoundingFrustum::GetPlanes)

			void GetPlanes(DirectX::Math::XMVECTOR^ NearPlane, DirectX::Math::XMVECTOR^ FarPlane, DirectX::Math::XMVECTOR^ RightPlane,
				DirectX::Math::XMVECTOR^ LeftPlane, DirectX::Math::XMVECTOR^ TopPlane, DirectX::Math::XMVECTOR^ BottomPlane)
			{
				_frustum->GetPlanes(NearPlane->_vect, FarPlane->_vect, RightPlane->_vect, LeftPlane->_vect, TopPlane->_vect, BottomPlane->_vect);
			}
			// Create 6 Planes representation of Frustum

		// Static methods
			static void CreateFromMatrix(DirectX::Math::BoundingFrustum^ Out, DirectX::Math::XMMATRIX^ Projection) { FrustumCreateFromMatrix(Out->_frustum, Projection->_mat); }
		};
	}
}