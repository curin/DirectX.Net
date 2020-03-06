#pragma once

#include <DirectXCollision.h>
#include "../Math/XMMATRIX.h"
#include "ContainmentType.h"
#include "BoundingBox.h"
#include "BoundingFrustum.h"
#include "BoundingOrientedBox.h"
#include "PlaneIntersectionType.h"

using namespace System::Numerics;
namespace DirectX
{
	namespace Math
	{
		inline DirectX::BoundingSphere* SphereNew(XMFLOAT3* center, float radius) { return new DirectX::BoundingSphere(*center, radius); }
        inline void SphereTransform(DirectX::BoundingSphere* sphere, DirectX::BoundingSphere* Out, DirectX::XMMATRIX* M) { sphere->Transform(*Out, *M); }
        inline void SphereTransform(DirectX::BoundingSphere* sphere, DirectX::BoundingSphere* Out, float Scale, DirectX::XMVECTOR* Rotation, DirectX::XMVECTOR* Translation) { sphere->Transform(*Out, Scale, *Rotation, *Translation); }
        inline DirectX::ContainmentType SphereContains(DirectX::BoundingSphere* sphere, DirectX::XMVECTOR* Point) { return sphere->Contains(*Point); }
        inline DirectX::ContainmentType SphereContains(DirectX::BoundingSphere* sphere, DirectX::XMVECTOR* V0, DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2) { return sphere->Contains(*V0, *V1, *V2); }
        inline DirectX::ContainmentType SphereContains(DirectX::BoundingSphere* sphere, DirectX::BoundingSphere* sh) { return sphere->Contains(*sh); }
        inline DirectX::ContainmentType SphereContains(DirectX::BoundingSphere* sphere, DirectX::BoundingBox* box) { return sphere->Contains(*box); }
        inline DirectX::ContainmentType SphereContains(DirectX::BoundingSphere* sphere, DirectX::BoundingOrientedBox* box) { return sphere->Contains(*box); }
        inline DirectX::ContainmentType SphereContains(DirectX::BoundingSphere* sphere, DirectX::BoundingFrustum* fr) { return sphere->Contains(*fr); }
        inline bool SphereIntersects(DirectX::BoundingSphere* sphere, DirectX::BoundingSphere* sh) { return sphere->Intersects(*sh); }
        inline bool SphereIntersects(DirectX::BoundingSphere* sphere, DirectX::BoundingBox* box) { return sphere->Intersects(*box); }
        inline bool SphereIntersects(DirectX::BoundingSphere* sphere, DirectX::BoundingOrientedBox* box) { return sphere->Intersects(*box); }
        inline bool SphereIntersects(DirectX::BoundingSphere* sphere, DirectX::BoundingFrustum* fr) { return sphere->Intersects(*fr); }
        inline bool SphereIntersects(DirectX::BoundingSphere* sphere, DirectX::XMVECTOR* V0, DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2) { return sphere->Intersects(*V0, *V1, *V2); }
        inline DirectX::PlaneIntersectionType SphereIntersects(DirectX::BoundingSphere* sphere, DirectX::XMVECTOR* Plane) { return sphere->Intersects(*Plane); }
        inline bool SphereIntersects(DirectX::BoundingSphere* sphere, DirectX::XMVECTOR* Origin, DirectX::XMVECTOR* Direction, float* Dist) { return sphere->Intersects(*Origin, *Direction, *Dist); }
        inline DirectX::ContainmentType SphereContainedBy(DirectX::BoundingSphere* sphere, DirectX::XMVECTOR* Plane0, DirectX::XMVECTOR* Plane1, DirectX::XMVECTOR* Plane2, DirectX::XMVECTOR* Plane3, DirectX::XMVECTOR* Plane4, DirectX::XMVECTOR* Plane5) { return sphere->ContainedBy(*Plane0, *Plane1, *Plane2, *Plane3, *Plane4, *Plane5); }
        inline void SphereCreateMerged(DirectX::BoundingSphere* Out, DirectX::BoundingSphere* S1, DirectX::BoundingSphere* S2) { DirectX::BoundingSphere::CreateMerged(*Out, *S1, *S2); }
        inline void SphereCreateFromBoundingBox(DirectX::BoundingSphere* Out, DirectX::BoundingBox* box) { DirectX::BoundingSphere::CreateFromBoundingBox(*Out, *box); }
        inline void SphereCreateFromBoundingBox(DirectX::BoundingSphere* Out, DirectX::BoundingOrientedBox* box) { DirectX::BoundingSphere::CreateFromBoundingBox(*Out, *box); }
        inline void SphereCreateFromPoints(DirectX::BoundingSphere* Out, unsigned int Count, DirectX::XMFLOAT3* pPoints, unsigned int Stride) { DirectX::BoundingSphere::CreateFromPoints(*Out, Count, pPoints, Stride); }
        inline void SphereCreateFromFrustum(DirectX::BoundingSphere* Out, DirectX::BoundingFrustum* fr) { DirectX::BoundingSphere::CreateFromFrustum(*Out, *fr); }

        public ref class BoundingSphere
		{
		public:
			DirectX::BoundingSphere* _sphere;

			// Creators
			BoundingSphere() { _sphere = new DirectX::BoundingSphere(); }
			~BoundingSphere() { delete _sphere; }

			BoundingSphere(DirectX::BoundingSphere* sphere) { _sphere = sphere; }

			BoundingSphere(Vector3 center,  float radius)
			{
				XMFLOAT3* _center = new XMFLOAT3(center.X, center.Y, center.Z);
				_sphere = SphereNew(_center, radius);
				delete _center;
			}

			// Methods
			void Transform(BoundingSphere^ Out, XMMATRIX^ M) { SphereTransform(_sphere, Out->_sphere, M->_mat); }
			void Transform(BoundingSphere^ Out, float Scale, XMVECTOR^ Rotation, XMVECTOR^ Translation) { SphereTransform(_sphere, Out->_sphere, Scale, Rotation->_vect, Translation->_vect); }
			// Transform the sphere

			DirectX::Math::ContainmentType Contains(XMVECTOR^ Point) { return (DirectX::Math::ContainmentType)SphereContains(_sphere, Point->_vect); }
            DirectX::Math::ContainmentType Contains(XMVECTOR^ V0, XMVECTOR^ V1, XMVECTOR^ V2) { return (DirectX::Math::ContainmentType)SphereContains(_sphere, V0->_vect, V1->_vect, V2->_vect); }
            DirectX::Math::ContainmentType Contains(DirectX::Math::BoundingSphere^ sh) { return (DirectX::Math::ContainmentType)SphereContains(_sphere, sh->_sphere); }
            DirectX::Math::ContainmentType Contains(DirectX::Math::BoundingBox^ box) { return (DirectX::Math::ContainmentType)SphereContains(_sphere, box->_box); }
            DirectX::Math::ContainmentType Contains(DirectX::Math::BoundingOrientedBox^ box) { return (DirectX::Math::ContainmentType)SphereContains(_sphere, box->_box); }
            DirectX::Math::ContainmentType Contains(DirectX::Math::BoundingFrustum^ fr) { return (DirectX::Math::ContainmentType)SphereContains(_sphere, fr->_frustum); }

			bool Intersects(DirectX::Math::BoundingSphere^ sh) { return SphereIntersects(_sphere, sh->_sphere); }
			bool Intersects(DirectX::Math::BoundingBox^ box) { return SphereIntersects(_sphere, box->_box); }
			bool Intersects(DirectX::Math::BoundingOrientedBox^ box) { return SphereIntersects(_sphere, box->_box); }
			bool Intersects(DirectX::Math::BoundingFrustum^ fr) { return SphereIntersects(_sphere, fr->_frustum); }

            bool Intersects(DirectX::Math::XMVECTOR^ V0, DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2) { return SphereIntersects(_sphere, V0->_vect, V1->_vect, V2->_vect); }
			// Triangle-sphere test

            DirectX::Math::PlaneIntersectionType Intersects(DirectX::Math::XMVECTOR^ Plane) { return (DirectX::Math::PlaneIntersectionType)SphereIntersects(_sphere, Plane->_vect); }
			// Plane-sphere test

            bool Intersects(DirectX::Math::XMVECTOR^ Origin, DirectX::Math::XMVECTOR^ Direction, float% Dist) { pin_ptr<float> dist = &Dist; return SphereIntersects(_sphere, Origin->_vect, Direction->_vect, dist); }
			// Ray-sphere test

            DirectX::Math::ContainmentType ContainedBy(DirectX::Math::XMVECTOR^ Plane0, DirectX::Math::XMVECTOR^ Plane1, DirectX::Math::XMVECTOR^ Plane2,
                DirectX::Math::XMVECTOR^ Plane3, DirectX::Math::XMVECTOR^ Plane4, DirectX::Math::XMVECTOR^ Plane5) {
                return (DirectX::Math::ContainmentType)SphereContainedBy(_sphere, Plane0->_vect, Plane1->_vect, Plane2->_vect, Plane3->_vect, Plane4->_vect, Plane5->_vect);
            }
			// Test sphere against six planes (see BoundingFrustum::GetPlanes)

		    // Static methods
            inline static void CreateMerged(BoundingSphere^ Out, BoundingSphere^ S1, BoundingSphere^ S2) { SphereCreateMerged(Out->_sphere, S1->_sphere, S2->_sphere); }

            inline static void CreateFromBoundingBox(BoundingSphere^ Out, BoundingBox^ box) { SphereCreateFromBoundingBox(Out->_sphere, box->_box); }
            inline static void CreateFromBoundingBox(BoundingSphere^ Out, BoundingOrientedBox^ box) { SphereCreateFromBoundingBox(Out->_sphere, box->_box); }

            inline static void CreateFromPoints(BoundingSphere^ Out, unsigned int Count, array<Vector3>^ pPoints, unsigned int Stride)
            {
                XMFLOAT3* points = new XMFLOAT3[Count];
                Vector3 temp;
                for (int i = 0; i < Count; i++)
                {
                    temp = pPoints[i];
                    points[i] = XMFLOAT3(temp.X, temp.Y, temp.Z);
                }

                SphereCreateFromPoints(Out->_sphere, Count, points, Stride);
            }

            inline static void CreateFromFrustum(BoundingSphere^ Out, BoundingFrustum^ fr) { SphereCreateFromFrustum(Out->_sphere, fr->_frustum); }
		};
	}
}