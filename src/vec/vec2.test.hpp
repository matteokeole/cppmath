#pragma once

#include "vec/vec2.hpp"

namespace TestVec2 {
	void defaultConstructor() {
		vec2<float> a(1, 2);

		assert(a[0] == 1 && a[1] == 2);
	}

	void copyConstructor() {
		vec2<float> a(1, 2);
		vec2<float> b(a);

		assert(b[0] == 1 && b[1] == 2);
	}

	void moveConstructor() {
		vec2<float> a(1, 2);
		vec2<float> b(std::move(a));

		assert(b[0] == 1 && b[1] == 2);
	}
}