#include <iostream>
#include "vec2.hpp"

template<typename T>
vec2<T>::vec2(T x, T y) : entries{x, y} {
	/// Debug
	std::cout << "Default" << std::endl;
}

template<typename T>
vec2<T>::vec2(const vec2& vector) : entries{vector.entries[0], vector.entries[1]} {
	/// Debug
	std::cout << "Copy" << std::endl;
}

template<typename T>
vec2<T>::vec2(const vec2&& vector) noexcept : entries{vector.entries[0], vector.entries[1]} {
	/// Debug
	std::cout << "Move" << std::endl;
}

template<typename T>
T& vec2<T>::operator [](unsigned int index) {
	return entries[index];
}

template class vec2<float>;