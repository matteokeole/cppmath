#include <cassert>
#include <iostream>
#include "vec/vec2.test.hpp"

/*static void testVec3Negate() {
	vec3<float> a(1, 2, 3);
	vec3<float> n(-a);

	print("-a", n);
}

static void testVec3Cross() {
	vec3<float> a(1, 4, 6);
	vec3<float> b(5, 3, 2);
	vec3<float> ab = a.cross(b);

	// assert((ab == vec3<float>(-10, 28, -17)) && "The result of a.cross(b) is invalid");
	print("ab", ab);
}

static void testVec3TripleCross() {
	vec3<float> a(1, 4, 6);
	vec3<float> b(5, 3, 2);
	vec3<float> aba = a.cross(b).cross(a);

	print("aba", aba);
}

static void testVec3Normalize() {
	vec3<float> a(1, 1, 1);
	vec3<float> n(a);

	n.normalize();

	print("a", a);
	print("n", n);
}

static void testVec3Dot() {
	vec3<float> a(1, 2, 3);
	vec3<float> b(3, 4, 5);

	float dot = a.dot(b);

	assert((dot == 26) && "The result of a.dot(b) is invalid");
}

static void testVec4Negate() {
	vec4<float> a(1, 2, 3, 4);
	vec4<float> n(-a);

	print("-a", n);
}

static void testVec4Normalize() {
	vec4<float> a(1, 1, 1, 1);
	vec4<float> n(a);

	n.normalize();

	print("a", a);
	print("n", n);
}

static void testVec4Dot() {
	vec4<float> a(1, 2, 3, 4);
	vec4<float> b(4, 5, 6, 7);

	float dot = a.dot(b);

	assert((dot == 60) && "The result of a.dot(b) is invalid");
}*/

int main() {
	TestVec2::defaultConstructor();
	TestVec2::copyConstructor();
	TestVec2::moveConstructor();
	TestVec2::squareBracketOperator();
	TestVec2::dot();
	TestVec2::length();
	TestVec2::equalOperator();
	TestVec2::addOperatorRef();
	TestVec2::addOperatorRvalueRef();
	TestVec2::addEqualOperator();
	TestVec2::negateOperatorRef();
	TestVec2::negateOperatorRvalueRef();
	TestVec2::subtractOperatorRef();
	TestVec2::subtractOperatorRvalueRef();
	TestVec2::subtractEqualOperator();
	TestVec2::multiplyOperatorRef();
	TestVec2::multiplyOperatorRvalueRef();
	TestVec2::multiplyEqualOperator();
	TestVec2::divideOperatorRef();
	TestVec2::divideOperatorRvalueRef();
	TestVec2::normalize();

	// vec3 tests
	//testVec3Negate();
	//testVec3Cross();
	//testVec3TripleCross();
	//testVec3Normalize();
	//testVec3Dot();

	// vec4 tests
	//testVec4Negate();
	//testVec4Normalize();
	//testVec4Dot();

	// mat3x3 tests

	// mat4x4 tests
	//mat4x4_test::defaultConstructor();
	//mat4x4_test::copyConstructor();
	//mat4x4_test::moveConstructor();
	//mat4x4_test::braceOperator();
	//mat4x4_test::transposeConstruct();
	//mat4x4_test::transpose();

	std::cin.get();
}