#include "vec2.hpp"

template<typename T>
vec2<T>::vec2(T x, T y) : x(x), y(y) {
	std::cout << "vec2 Default(" << x << ", " << y << ")" << std::endl;
}

template<typename T>
vec2<T>::vec2(const vec2& v) : x(v.x), y(v.y) {
	std::cout << "vec2 Copy(" << x << ", " << y << ")" << std::endl;
}

template<typename T>
vec2<T>::vec2(const vec2&& v) : x(v.x), y(v.y) {
	std::cout << "vec2 Move(" << x << ", " << y << ")" << std::endl;
}

template<typename T>
bool vec2<T>::operator ==(T n) const {
	return length() == n;
}

template<typename T>
bool vec2<T>::operator ==(const vec2& v) const {
	return x == v.x && y == v.y;
}

template<typename T>
vec2<T>& vec2<T>::operator =(const vec2& v) {
	x = v.x;
	y = v.y;

	return *this;
}

template<typename T>
vec2<T>&& vec2<T>::operator +(const vec2& v) const & {
	return std::move(vec2(x + v.x, y + v.y));
}

template<typename T>
vec2<T>&& vec2<T>::operator +(const vec2& v) && {
	x += v.x;
	y += v.y;

	return std::move(*this);
}

template<typename T>
vec2<T>& vec2<T>::operator +=(T n) {
	x += n;
	y += n;

	return *this;
}

template<typename T>
vec2<T>& vec2<T>::operator +=(const vec2& v) {
	x += v.x;
	y += v.y;

	return *this;
}

template<typename T>
vec2<T>& vec2<T>::operator -=(T n) {
	x -= n;
	y -= n;

	return *this;
}

template<typename T>
vec2<T>& vec2<T>::operator -=(const vec2& v) {
	x -= v.x;
	y -= v.y;

	return *this;
}

template<typename T>
vec2<T>& vec2<T>::operator *=(T n) {
	x *= n;
	y *= n;

	return *this;
}

template<typename T>
vec2<T>& vec2<T>::operator *=(const vec2& v) {
	x *= v.x;
	y *= v.y;

	return *this;
}

template<typename T>
vec2<T>& vec2<T>::operator /=(T n) {
	x /= n;
	y /= n;

	return *this;
}

template<typename T>
vec2<T>& vec2<T>::operator /=(const vec2& v) {
	x /= v.x;
	y /= v.y;

	return *this;
}

template<typename T>
vec2<T>& vec2<T>::normalize() {
	T length = length();

	if (length == 0) {
		return *this;
	}

	x /= length;
	y /= length;

	return *this;
}

template<typename T>
T vec2<T>::dot(const vec2& v) const {
	return x * v.x + y * v.y;
}

template<typename T>
T vec2<T>::length() const {
	return sqrt(dot(*this));
}

template<typename T>
inline std::ostream& operator <<(std::ostream& stream, const vec2<T>& vector) {
	return stream << "(" << vector.x << ", " << vector.y << ")";
}