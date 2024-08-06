#pragma once

template<typename T>
class vec2 {
	private:
		T entries[2];

	public:
		vec2(T, T);
		vec2(const vec2&);
		vec2(const vec2&&) noexcept;

		T& operator [](unsigned int);

		vec2&& operator -() const &;
		vec2&& operator -(const vec2&) const &;
		vec2&& operator -(const vec2&) &&;

		T length() const;

		T dot(const vec2&) const;
};