#include "mat4x4.hpp"

/// Argument naming (_--)
/// Spread
template<typename T>
mat4x4<T>::mat4x4(
	T _00, T _01, T _02, T _03,
	T _10, T _11, T _12, T _13,
	T _20, T _21, T _22, T _23,
	T _30, T _31, T _32, T _33
) : entries{
	_00, _01, _02, _03,
	_10, _11, _12, _13,
	_20, _21, _22, _23,
	_30, _31, _32, _33
} {
	std::cout << "Default: " << (*this) << std::endl;
}

/// Remove entries usage - Promise it's constant?
template<typename T>
mat4x4<T>::mat4x4(const mat4x4& m) : entries{
	m.entries[0], m.entries[1], m.entries[2], m.entries[3],
	m.entries[4], m.entries[5], m.entries[6], m.entries[7],
	m.entries[8], m.entries[9], m.entries[10], m.entries[11],
	m.entries[12], m.entries[13], m.entries[14], m.entries[15]
} {
	std::cout << "Copy: " << (*this) << std::endl;
}

/// Remove entries usage - Promise it's constant?
template<typename T>
mat4x4<T>::mat4x4(const mat4x4&& m) noexcept : entries{
	m.entries[0], m.entries[1], m.entries[2], m.entries[3],
	m.entries[4], m.entries[5], m.entries[6], m.entries[7],
	m.entries[8], m.entries[9], m.entries[10], m.entries[11],
	m.entries[12], m.entries[13], m.entries[14], m.entries[15]
} {
	std::cout << "Move: " << (*this) << std::endl;
}

template<typename T>
T& mat4x4<T>::operator [](unsigned int index) {
	return entries[index];
}

template<typename T>
mat4x4<T>&& mat4x4<T>::transpose() const & {
	return std::move(mat4x4(
		entries[0], entries[4], entries[8], entries[12],
		entries[1], entries[5], entries[9], entries[13],
		entries[2], entries[6], entries[10], entries[14],
		entries[3], entries[7], entries[11], entries[15]
	));
}

/// Temporary variable naming (_)
template<typename T>
mat4x4<T>&& mat4x4<T>::transpose() && {
	T _ = 0;

	_ = entries[1]; entries[1] = entries[4]; entries[4] = _;
	_ = entries[2]; entries[2] = entries[8]; entries[8] = _;
	_ = entries[3]; entries[3] = entries[12]; entries[12] = _;
	_ = entries[6]; entries[6] = entries[9]; entries[9] = _;
	_ = entries[7]; entries[7] = entries[13]; entries[13] = _;
	_ = entries[11]; entries[11] = entries[14]; entries[14] = _;

	return std::move(*this);
}

/// External or friend?
/// Promise it's constant?
/// Large bracket character?
template<typename T>
inline std::ostream& operator <<(std::ostream& stream, mat4x4<T>& matrix) {
	return stream
		<< matrix[0] << " " << matrix[1] << " " << matrix[2] << " " << matrix[3] << "\n"
		<< matrix[4] << " " << matrix[5] << " " << matrix[6] << " " << matrix[7] << "\n"
		<< matrix[8] << " " << matrix[9] << " " << matrix[10] << " " << matrix[11] << "\n"
		<< matrix[12] << " " << matrix[13] << " " << matrix[14] << " " << matrix[15];
}

/// Move this to header?
template class mat4x4<float>;
/// TODO: Merge this with the template class
template std::ostream& operator <<(std::ostream&, mat4x4<float>&);