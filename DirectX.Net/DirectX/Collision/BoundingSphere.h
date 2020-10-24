#pragma once

#include <DirectXCollision.h>
#include "../Math/XMFLOAT.h"
#include "../Math/XMVECTOR.h"
#include "../Math/XMMATRIX.h"
#include "ContainmentType.h"
#include "PlaneIntersectionType.h"

#include "BoundingBox.h"
#include "BoundingOrientedBox.h"
#include "BoundingFrustum.h"

using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace Math
    {
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

        public value struct BoundingSphere
        {
            XMFLOAT3 Center;            // Center of the sphere.
            float Radius;               // Radius of the sphere.

            BoundingSphere(XMFLOAT3% center, float radius)
                : Center(center), Radius(radius) {}

            // Methods
            void Transform([Out] BoundingSphere% Out, XMMATRIX^ M)
            {
                pin_ptr<BoundingSphere> pT = this;
                DirectX::BoundingSphere* pThis = (DirectX::BoundingSphere*)pT;
                pin_ptr<BoundingSphere> pO = &Out;
                DirectX::BoundingSphere* pOut = (DirectX::BoundingSphere*)pO;
                SphereTransform(pThis, pOut, (DirectX::XMMATRIX*)M);
            }

            void Transform([Out] BoundingSphere% Out, float Scale, XMVECTOR^ Rotation, XMVECTOR^ Translation)
            {
                pin_ptr<BoundingSphere> pT = this;
                DirectX::BoundingSphere* pThis = (DirectX::BoundingSphere*)pT;
                pin_ptr<BoundingSphere> pO = &Out;
                DirectX::BoundingSphere* pOut = (DirectX::BoundingSphere*)pO;
                SphereTransform(pThis, pOut, Scale, (DirectX::XMVECTOR*)Rotation, (DirectX::XMVECTOR*)Translation);
            }
            // Transform the sphere

            ContainmentType Contains(XMVECTOR^ Point)
            {
                pin_ptr<BoundingSphere> pT = this;
                DirectX::BoundingSphere* pThis = (DirectX::BoundingSphere*)pT;
                return (ContainmentType)SphereContains(pThis, (DirectX::XMVECTOR*)Point);
            }

            ContainmentType Contains(XMVECTOR^ V0, XMVECTOR^ V1, XMVECTOR^ V2)
            {
                pin_ptr<BoundingSphere> pT = this;
                DirectX::BoundingSphere* pThis = (DirectX::BoundingSphere*)pT;
                return (ContainmentType)SphereContains(pThis, (DirectX::XMVECTOR*)V0, (DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2);
            }

            ContainmentType Contains(BoundingSphere% sh)
            {
                pin_ptr<BoundingSphere> pT = this;
                DirectX::BoundingSphere* pThis = (DirectX::BoundingSphere*)pT;
                pin_ptr<BoundingSphere> pS = &sh;
                DirectX::BoundingSphere* pSh = (DirectX::BoundingSphere*)pS;
                return (ContainmentType)SphereContains(pThis, pSh);
            }

            ContainmentType Contains(BoundingBox% box)
            {
                pin_ptr<BoundingSphere> pT = this;
                DirectX::BoundingSphere* pThis = (DirectX::BoundingSphere*)pT;
                pin_ptr<BoundingBox> pB = &box;
                DirectX::BoundingBox* pBox = (DirectX::BoundingBox*)pB;
                return (ContainmentType)SphereContains(pThis, pBox);
            }

            ContainmentType Contains(BoundingOrientedBox% box)
            {
                pin_ptr<BoundingSphere> pT = this;
                DirectX::BoundingSphere* pThis = (DirectX::BoundingSphere*)pT;
                pin_ptr<BoundingOrientedBox> pB = &box;
                DirectX::BoundingOrientedBox* pBox = (DirectX::BoundingOrientedBox*)pB;
                return (ContainmentType)SphereContains(pThis, pBox);
            }

            ContainmentType Contains(BoundingFrustum% fr)
            {
                pin_ptr<BoundingSphere> pT = this;
                DirectX::BoundingSphere* pThis = (DirectX::BoundingSphere*)pT;
                pin_ptr<BoundingFrustum> pF = &fr;
                DirectX::BoundingFrustum* pFr = (DirectX::BoundingFrustum*)pF;
                return (ContainmentType)SphereContains(pThis, pFr);
            }

            bool Intersects(BoundingSphere% sh)
            {
                pin_ptr<BoundingSphere> pT = this;
                DirectX::BoundingSphere* pThis = (DirectX::BoundingSphere*)pT;
                pin_ptr<BoundingSphere> pS = &sh;
                DirectX::BoundingSphere* pSh = (DirectX::BoundingSphere*)pS;
                return SphereIntersects(pThis, pSh);
            }

            bool Intersects(BoundingBox% box)
            {
                pin_ptr<BoundingSphere> pT = this;
                DirectX::BoundingSphere* pThis = (DirectX::BoundingSphere*)pT;
                pin_ptr<BoundingBox> pB = &box;
                DirectX::BoundingBox* pBox = (DirectX::BoundingBox*)pB;
                return SphereIntersects(pThis, pBox);
            }

            bool Intersects(BoundingOrientedBox% box)
            {
                pin_ptr<BoundingSphere> pT = this;
                DirectX::BoundingSphere* pThis = (DirectX::BoundingSphere*)pT;
                pin_ptr<BoundingOrientedBox> pB = &box;
                DirectX::BoundingOrientedBox* pBox = (DirectX::BoundingOrientedBox*)pB;
                return SphereIntersects(pThis, pBox);
            }

            bool Intersects(BoundingFrustum% fr)
            {
                pin_ptr<BoundingSphere> pT = this;
                DirectX::BoundingSphere* pThis = (DirectX::BoundingSphere*)pT;
                pin_ptr<BoundingFrustum> pF = &fr;
                DirectX::BoundingFrustum* pFr = (DirectX::BoundingFrustum*)pF;
                return SphereIntersects(pThis, pFr);
            }

            bool Intersects(XMVECTOR^ V0, XMVECTOR^ V1, XMVECTOR^ V2)
            {
                pin_ptr<BoundingSphere> pT = this;
                DirectX::BoundingSphere* pThis = (DirectX::BoundingSphere*)pT;
                return SphereIntersects(pThis, (DirectX::XMVECTOR*)V0, (DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2);
            }
            // Triangle-sphere test

            PlaneIntersectionType Intersects(XMVECTOR^ Plane)
            {
                pin_ptr<BoundingSphere> pT = this;
                DirectX::BoundingSphere* pThis = (DirectX::BoundingSphere*)pT;
                return (PlaneIntersectionType)SphereIntersects(pThis, (DirectX::XMVECTOR*)Plane);
            }
            // Plane-sphere test

            bool Intersects(XMVECTOR^ Origin, XMVECTOR^ Direction, [Out] float% Dist)
            {
                pin_ptr<BoundingSphere> pT = this;
                DirectX::BoundingSphere* pThis = (DirectX::BoundingSphere*)pT;
                pin_ptr<float> pDist = &Dist;
                return SphereIntersects(pThis, (DirectX::XMVECTOR*)Origin, (DirectX::XMVECTOR*)Direction, pDist);
            }
            // Ray-sphere test

            ContainmentType ContainedBy(XMVECTOR^ Plane0, XMVECTOR^ Plane1, XMVECTOR^ Plane2,
                XMVECTOR^ Plane3, XMVECTOR^ Plane4, XMVECTOR^ Plane5)
            {
                pin_ptr<BoundingSphere> pT = this;
                DirectX::BoundingSphere* pThis = (DirectX::BoundingSphere*)pT;
                return (ContainmentType)SphereContainedBy(pThis, (DirectX::XMVECTOR*)Plane0, (DirectX::XMVECTOR*)Plane1,
                    (DirectX::XMVECTOR*)Plane2, (DirectX::XMVECTOR*)Plane3, (DirectX::XMVECTOR*)Plane4, (DirectX::XMVECTOR*)Plane5);
            }
            // Test sphere against six planes (see BoundingFrustum::GetPlanes)

            // Static methods
            static void CreateMerged([Out] BoundingSphere% Out, BoundingSphere% S1, BoundingSphere% S2)
            {
                pin_ptr<BoundingSphere> pO = &Out;
                DirectX::BoundingSphere* pOut = (DirectX::BoundingSphere*)pO;
                pin_ptr<BoundingSphere> pS1 = &S1;
                DirectX::BoundingSphere* pSh1 = (DirectX::BoundingSphere*)pS1;
                pin_ptr<BoundingSphere> pS2 = &S2;
                DirectX::BoundingSphere* pSh2 = (DirectX::BoundingSphere*)pS2;
                SphereCreateMerged(pOut, pSh1, pSh2);
            }

            static void CreateFromBoundingBox([Out] BoundingSphere% Out, BoundingBox% box)
            {
                pin_ptr<BoundingSphere> pO = &Out;
                DirectX::BoundingSphere* pOut = (DirectX::BoundingSphere*)pO;
                pin_ptr<BoundingBox> pB = &box;
                DirectX::BoundingBox* pBox = (DirectX::BoundingBox*)pB;
                SphereCreateFromBoundingBox(pOut, pBox);
            }

            static void CreateFromBoundingBox([Out] BoundingSphere% Out, BoundingOrientedBox% box)
            {
                pin_ptr<BoundingSphere> pO = &Out;
                DirectX::BoundingSphere* pOut = (DirectX::BoundingSphere*)pO;
                pin_ptr<BoundingOrientedBox> pB = &box;
                DirectX::BoundingOrientedBox* pBox = (DirectX::BoundingOrientedBox*)pB;
                SphereCreateFromBoundingBox(pOut, pBox);
            }

            static void CreateFromPoints([Out]BoundingSphere% Out, size_t Count,
                array<XMFLOAT3>^ pPoints, size_t Stride)
            {
                pin_ptr<BoundingSphere> pO = &Out;
                DirectX::BoundingSphere* pOut = (DirectX::BoundingSphere*)pO;
                pin_ptr<XMFLOAT3> pA = &pPoints[0];
                DirectX::XMFLOAT3* pArray = (DirectX::XMFLOAT3*)pA;
                SphereCreateFromPoints(pOut, Count, pArray, Stride);
            }

            static void CreateFromFrustum([Out] BoundingSphere% Out, BoundingFrustum% fr)
            {
                pin_ptr<BoundingSphere> pO = &Out;
                DirectX::BoundingSphere* pOut = (DirectX::BoundingSphere*)pO;
                pin_ptr<BoundingFrustum> pF = &fr;
                DirectX::BoundingFrustum* pFr = (DirectX::BoundingFrustum*)pF;
                SphereCreateFromFrustum(pOut, pFr);
            }

            static BoundingSphere Default() { return BoundingSphere(XMFLOAT3(0, 0, 0), 1); }
        };
    }
}
