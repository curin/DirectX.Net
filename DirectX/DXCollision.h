#pragma once

#include <DirectXCollision.h>
#include "Math/XMVECTOR.h"
#include "Collision/ContainmentType.h"
#include "Collision/PlaneIntersectionType.h"

namespace DirectX
{
	namespace Math
	{
		inline bool Intersects(DirectX::XMVECTOR* Origin, DirectX::XMVECTOR* Direction, DirectX::XMVECTOR* V0, DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2, float* Dist) 
		{
			return DirectX::TriangleTests::Intersects(*Origin, *Direction, *V0, *V1, *V2, *Dist);
		}
		// Ray-Triangle

		inline bool Intersects(DirectX::XMVECTOR* A0, DirectX::XMVECTOR* A1, DirectX::XMVECTOR* A2, DirectX::XMVECTOR* B0, DirectX::XMVECTOR* B1, DirectX::XMVECTOR* B2)
		{
			return DirectX::TriangleTests::Intersects(*A0, *A1, *A2, *B0, *B1, *B2);
		}
		// Triangle-Triangle

		inline DirectX::PlaneIntersectionType Intersects(DirectX::XMVECTOR* V0, DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2, DirectX::XMVECTOR* Plane)
		{
			return DirectX::TriangleTests::Intersects(*V0, *V1, *V2, *Plane);
		}
		// Plane-Triangle

		inline DirectX::ContainmentType ContainedBy(DirectX::XMVECTOR* V0, DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2,
			DirectX::XMVECTOR* Plane0, DirectX::XMVECTOR* Plane1, DirectX::XMVECTOR* Plane2,
			DirectX::XMVECTOR* Plane3, DirectX::XMVECTOR* Plane4, DirectX::XMVECTOR* Plane5)
		{
			return DirectX::TriangleTests::ContainedBy(*V0, *V1, *V2, *Plane0, *Plane1, *Plane2, *Plane3, *Plane4, *Plane5);
		}
	}

	public ref class DirectXTriangleTests
	{
	public:
		static inline bool Intersects(DirectX::Math::XMVECTOR^ Origin, DirectX::Math::XMVECTOR^ Direction, DirectX::Math::XMVECTOR^ V0, DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2, float% Dist)
		{
			pin_ptr<float> dist = &Dist;
			return DirectX::Math::Intersects((DirectX::XMVECTOR*)Origin, (DirectX::XMVECTOR*)Direction, (DirectX::XMVECTOR*)V0, (DirectX::XMVECTOR*)V1, V2, dist);
		}
		// Ray-Triangle

		static inline bool Intersects(DirectX::Math::XMVECTOR^ A0, DirectX::Math::XMVECTOR^ A1, DirectX::Math::XMVECTOR^ A2, DirectX::Math::XMVECTOR^ B0, DirectX::Math::XMVECTOR^ B1, DirectX::Math::XMVECTOR^ B2)
		{
			return DirectX::Math::Intersects((DirectX::XMVECTOR*)A0, (DirectX::XMVECTOR*)A1, (DirectX::XMVECTOR*)A2, (DirectX::XMVECTOR*)B0, (DirectX::XMVECTOR*)B1, (DirectX::XMVECTOR*)B2);
		}
		// Triangle-Triangle

		static inline DirectX::Math::PlaneIntersectionType Intersects(DirectX::Math::XMVECTOR^ V0, DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2, DirectX::Math::XMVECTOR^ Plane)
		{
			return (DirectX::Math::PlaneIntersectionType)DirectX::Math::Intersects((DirectX::XMVECTOR*)V0, (DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2, (DirectX::XMVECTOR*)Plane);
		}
		// Plane-Triangle

		static inline DirectX::Math::ContainmentType ContainedBy(DirectX::Math::XMVECTOR^ V0, DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2,
			DirectX::Math::XMVECTOR^ Plane0, DirectX::Math::XMVECTOR^ Plane1, DirectX::Math::XMVECTOR^ Plane2,
			DirectX::Math::XMVECTOR^ Plane3, DirectX::Math::XMVECTOR^ Plane4, DirectX::Math::XMVECTOR^ Plane5)
		{
			return (DirectX::Math::ContainmentType)DirectX::Math::ContainedBy((DirectX::XMVECTOR*)V0, (DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2, (DirectX::XMVECTOR*)Plane0, (DirectX::XMVECTOR*)Plane1, (DirectX::XMVECTOR*)Plane2, (DirectX::XMVECTOR*)Plane3, (DirectX::XMVECTOR*)Plane4, (DirectX::XMVECTOR*)Plane5);
		}
	};
}