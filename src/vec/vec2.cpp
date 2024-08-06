#include <iostream>
#include "vec2.hpp"

template<typename T>
vec2<T>::vec2(T x, T y) : entries{x, y} {
	/// Debug
	std::cout << "Default" << std::endl;
}

template<typename T>
vec2<T>::vec2(const vec2& vector) : entries{vector[0], vector[1]} {
	/// Debug
	std::cout << "Copy" << std::endl;
}

template<typename T>
vec2<T>::vec2(const vec2&& vector) noexcept : entries{vector[0], vector[1]} {
	/// Debug
	std::cout << "Move" << std::endl;
}

template<typename T>
const T vec2<T>::operator [](unsigned int index) const {
	return entries[index];
}

template<typename T>
T& vec2<T>::operator [](unsigned int index) {
	return entries[index];
}

template<typename T>
T vec2<T>::length() const {
	return sqrt(dot(*this));
}

template<typename T>
T vec2<T>::dot(const vec2& vector) const {
	return entries[0] * vector[0] + entries[1] * vector[1];
}

template<typename T>
vec2<T>& vec2<T>::operator =(const vec2& vector) {
	entries[0] = vector[0];
	entries[1] = vector[1];

	return *this;
}

template<typename T>
vec2<T>&& vec2<T>::operator +(const vec2& vector) const & {
	return std::move(vec2(
		entries[0] + vector[0],
		entries[1] + vector[1]
	));
}

template<typename T>
vec2<T>&& vec2<T>::operator +(const vec2& vector) && {
	entries[0] += vector[0];
	entries[1] += vector[1];

	return std::move(*this);
}

template<typename T>
vec2<T>& vec2<T>::operator +=(const vec2& vector) {
	entries[0] += vector[0];
	entries[1] += vector[1];

	return *this;
}

template<typename T>
vec2<T>&& vec2<T>::operator -() const & {
	return std::move(vec2(
		-entries[0],
		-entries[1]
	));
}

template<typename T>
vec2<T>&& vec2<T>::operator -() && {
	entries[0] = -entries[0];
	entries[1] = -entries[1];

	return std::move(*this);
}

template<typename T>
vec2<T>&& vec2<T>::operator -(const vec2& vector) const & {
	return std::move(vec2(
		entries[0] - vector[0],
		entries[1] - vector[1]
	));
}

template<typename T>
vec2<T>&& vec2<T>::operator -(const vec2& vector) && {
	entries[0] -= vector[0];
	entries[1] -= vector[1];

	return std::move(*this);
}

template<typename T>
vec2<T>& vec2<T>::operator -=(const vec2& vector) {
	entries[0] -= vector[0];
	entries[1] -= vector[1];

	return *this;
}

template<typename T>
vec2<T>&& vec2<T>::operator *(const vec2& vector) const & {
	return std::move(vec2(
		entries[0] * vector[0],
		entries[1] * vector[1]
	));
}

template<typename T>
vec2<T>&& vec2<T>::operator *(const vec2& vector) && {
	entries[0] *= vector[0];
	entries[1] *= vector[1];

	return std::move(*this);
}

template<typename T>
vec2<T>& vec2<T>::operator *=(const vec2& vector) {
	entries[0] *= vector[0];
	entries[1] *= vector[1];

	return *this;
}

template<typename T>
vec2<T>&& vec2<T>::operator /(const vec2& vector) const & {
	return std::move(vec2(
		entries[0] / vector[0],
		entries[1] / vector[1]
	));
}

template<typename T>
vec2<T>&& vec2<T>::operator /(const vec2& vector) && {
	entries[0] /= vector[0];
	entries[1] /= vector[1];

	return std::move(*this);
}

template<typename T>
vec2<T>& vec2<T>::operator /=(const vec2& vector) {
	entries[0] /= vector[0];
	entries[1] /= vector[1];

	return *this;
}

template<typename T>
vec2<T>& vec2<T>::normalize() {
	T length = this->length();

	if (length == 0) {
		return *this;
	}

	entries[0] /= length;
	entries[1] /= length;

	return *this;
}

template class vec2<float>;