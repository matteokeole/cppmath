#include "mat4x4.hpp"
#include "mat4x4.test.hpp"

namespace mat4x4_test {
	void defaultConstructor() {
		mat4x4<float> matrix(
			1, 0, 0, 0,
			0, 1, 0, 0,
			0, 0, 1, 0,
			0, 0, 0, 1
		);
	}

	void copyConstructor() {
		mat4x4<float> m1(
			1, 0, 0, 0,
			0, 1, 0, 0,
			0, 0, 1, 0,
			0, 0, 0, 1
		);
		mat4x4<float> m2(m1);
	}

	void moveConstructor() {
		mat4x4<float> m1(
			1, 0, 0, 0,
			0, 1, 0, 0,
			0, 0, 1, 0,
			0, 0, 0, 1
		);
		mat4x4<float> m2(m1.transpose());
	}

	void braceOperator() {
		mat4x4<float> m1(
			0, 1, 2, 3,
			4, 5, 6, 7,
			8, 9, 10, 11,
			12, 13, 14, 15
		);

		float& _33 = m1[15];
	}

	void transposeConstruct() {
		mat4x4<float> m1(
			1, 2, 2, 2,
			0, 1, 2, 2,
			0, 0, 1, 2,
			0, 0, 0, 1
		);
		mat4x4<float> m2(m1.transpose());
	}

	void transpose() {
		mat4x4<float> m1(
			1, 2, 2, 2,
			0, 1, 2, 2,
			0, 0, 1, 2,
			0, 0, 0, 1
		);
		mat4x4<float> m2(m1.transpose().transpose().transpose());
	}

	void a() {}
}