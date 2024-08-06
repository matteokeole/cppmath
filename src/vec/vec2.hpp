#pragma once

template<typename T>
class vec2 {
	private:
		T entries[2];

	public:
		vec2(T, T);
		vec2(const vec2&);
		vec2(const vec2&&) noexcept;

		const T operator [](unsigned int) const;
		T& operator [](unsigned int);

		T dot(const vec2&) const;

		T length() const;

		vec2& operator =(const vec2&);

		vec2&& operator +(const vec2&) const &;
		vec2&& operator +(const vec2&) &&;

		vec2& operator +=(const vec2&);

		vec2&& operator -() const &;
		vec2&& operator -() &&;
		vec2&& operator -(const vec2&) const &;
		vec2&& operator -(const vec2&) &&;

		vec2& operator -=(const vec2&);

		vec2&& operator *(const vec2&) const &;
		vec2&& operator *(const vec2&) &&;

		vec2& operator *=(const vec2&);

		vec2&& operator /(const vec2&) const &;
		vec2&& operator /(const vec2&) &&;

		vec2& operator /=(const vec2&);

		vec2& normalize();
};