#ifndef _VEC_H
#define _VEC_H

#include <ostream>
#include <math.h>

/**
 * @brief Template class for a 3D vector of type T.
 *
 * This class represents a 3D vector and supports various operations
 * like addition, subtraction, dot product, and magnitude calculation.
 *
 * @tparam T The type of the vector's components (e.g., int, float, double).
 */
template<typename T>
class _vec3
{
public:
    /**
     * @brief Default constructor, initializes vector components to zero.
     */
    _vec3<T>() : d{ 0, 0, 0 } {}

    /**
     * @brief Constructor to initialize vector with custom values.
     *
     * @param a Value for the first component.
     * @param b Value for the second component.
     * @param c Value for the third component.
     */
    _vec3<T>(T a, T b, T c) : d{ a, b, c } {}

    /**
     * @brief Access vector component by index.
     *
     * @param i Index of the component (0 for x, 1 for y, 2 for z).
     * @return T& Reference to the component.
     */
    T& operator[](int i) { return d[i]; }

    /**
     * @brief Access vector component by index (const version).
     *
     * @param i Index of the component (0 for x, 1 for y, 2 for z).
     * @return T Value of the component.
     */
    T operator[](int i) const { return d[i]; }

    /**
     * @brief Adds two vectors.
     *
     * @param a The first vector.
     * @param b The second vector.
     * @return _vec3<T> The result of vector addition.
     */
    friend _vec3<T> operator+(const _vec3<T>& a, const _vec3<T>& b) {
        return _vec3<T>(a[0] + b[0], a[1] + b[1], a[2] + b[2]);
    }

    /**
     * @brief Subtracts two vectors.
     *
     * @param a The first vector.
     * @param b The second vector.
     * @return _vec3<T> The result of vector subtraction.
     */
    friend _vec3<T> operator-(const _vec3<T>& a, const _vec3<T>& b) {
        return _vec3<T>(a[0] - b[0], a[1] - b[1], a[2] - b[2]);
    }

    /**
     * @brief Computes the dot product of two vectors.
     *
     * @param a The first vector.
     * @param b The second vector.
     * @return T The result of the dot product.
     */
    friend T dot(const _vec3<T>& a, const _vec3<T>& b) {
        return a[0] * b[0] + a[1] * b[1] + a[2] * b[2];
    }

    /**
     * @brief Computes the magnitude of a vector.
     *
     * @param a The vector.
     * @return double The magnitude of the vector.
     */
    friend double mag(const _vec3<T>& a) {
        return sqrt(dot(a, a));
    }

    /**
     * @brief Outputs the vector components to a stream.
     *
     * @param out The output stream.
     * @param a The vector to output.
     * @return std::ostream& The output stream with vector components.
     */
    friend std::ostream& operator<<(std::ostream& out, const _vec3<T>& a) {
        out << a[0] << " " << a[1] << " " << a[2];
        return out;
    }

protected:
    T d[3];  ///< Array to store the vector components.
};

using double3 = _vec3<double>;  ///< Alias for _vec3 with double type components.

#endif
