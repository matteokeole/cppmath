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

	void squareBracketOperator() {
		vec2<float> a(0, 0);

		assert(a[0] == 0);

		a[0] = 1;

		assert(a[0] == 1);
	}

	void dot() {
		vec2<float> a(1, 2);
		vec2<float> b(3, 4);
		float dot = a.dot(b);

		assert(dot == 11);
	}

	void length() {
		vec2<float> a(1, 1);
		float length = a.length();

		assert(length > 1.414 - 0.001 && length < 1.414 + 0.001);
	}

	void equalOperator() {
		vec2<float> a(1, 1);
		vec2<float> b(0, 0);

		b = a;

		assert(b[0] == 1 && b[1] == 1);
	}

	void addOperatorRef() {
		vec2<float> a(0, 0);
		vec2<float> b(1, 1);

		a = a + b;

		assert(a[0] == 1 && a[1] == 1);
	}

	void addOperatorRvalueRef() {
		vec2<float> a(0, 0);
		vec2<float> b(1, 1);

		a = std::move(a) + b;

		assert(a[0] == 1 && a[1] == 1);
	}

	void addEqualOperator() {
		vec2<float> a(0, 0);
		vec2<float> b(1, 1);

		a += b;

		assert(a[0] == 1 && a[1] == 1);
	}

	void negateOperatorRef() {
		vec2<float> a(1, 1);

		a = -a;

		assert(a[0] == -1 && a[1] == -1);
	}

	void negateOperatorRvalueRef() {
		vec2<float> a(1, 1);

		a = -std::move(a);

		assert(a[0] == -1 && a[1] == -1);
	}

	void subtractOperatorRef() {
		vec2<float> a(0, 0);
		vec2<float> b(1, 1);

		a = a - b;

		assert(a[0] == -1 && a[1] == -1);
	}

	void subtractOperatorRvalueRef() {
		vec2<float> a(0, 0);
		vec2<float> b(1, 1);

		a = std::move(a) - b;

		assert(a[0] == -1 && a[1] == -1);
	}

	void subtractEqualOperator() {
		vec2<float> a(0, 0);
		vec2<float> b(1, 1);

		a -= b;

		assert(a[0] == -1 && a[1] == -1);
	}

	void multiplyOperatorRef() {
		vec2<float> a(1, 1);
		vec2<float> b(0, 0);

		a = a * b;

		assert(a[0] == 0 && a[1] == 0);
	}

	void multiplyOperatorRvalueRef() {
		vec2<float> a(1, 1);
		vec2<float> b(0, 0);

		a = std::move(a) * b;

		assert(a[0] == 0 && a[1] == 0);
	}

	void multiplyEqualOperator() {
		vec2<float> a(1, 1);
		vec2<float> b(0, 0);

		a *= b;

		assert(a[0] == 0 && a[1] == 0);
	}

	void divideOperatorRef() {
		vec2<float> a(1, 1);
		vec2<float> b(2, 2);

		a = a / b;

		assert(a[0] == 0.5 && a[1] == 0.5);
	}

	void divideOperatorRvalueRef() {
		vec2<float> a(1, 1);
		vec2<float> b(2, 2);

		a = std::move(a) / b;

		assert(a[0] == 0.5 && a[1] == 0.5);
	}

	void divideEqualOperator() {
		vec2<float> a(1, 1);
		vec2<float> b(2, 2);

		a /= b;

		assert(a[0] == 0.5 && a[1] == 0.5);
	}

	void normalize() {
		vec2<float> a(1, 1);

		a.normalize();

		assert(a[0] > 0.707 - 0.001 && a[0] < 0.707 + 0.001);
	}
}