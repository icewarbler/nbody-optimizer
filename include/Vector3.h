#pragma once

// HEAVILY adapted from the struct defined at https://en.wikipedia.org/wiki/N-body_simulation
class Vector3
{
private: 
    double e[3] = { 0 };
public:

    // Constructors
    Vector3() = default;
    Vector3(double e0, double e1, double e2) : e{e0, e1, e2} {}

    // Copy Constructor
    Vector3(const Vector3& new) = default;

    // Destructor
    ~Vector3() = default;

    // Access
    double operator[](int i) const { return e[i]; }
    double& operator[](int i) { return e[i]; }

    double x() const { return e[0]; }
    double y() const { return e[1]; }
    double z() const { return e[2]; }

    double& x() { return e[0]; }
    double& y() { return e[1]; }
    double& z() { return e[2]; }

    // Arithmetic
    Vector3 operator-() const { return Vector3(-e[0], -e[1], -e[2]); }

    Vector3 operator+=(const Vector3& other)
    {
        e[0] += other.e[0];
        e[1] += other.e[1];
        e[2] += other.e[2];
        return *this;
    }

    Vector3 operator-=(const Vector3& other)
    {
        e[0] -= other.e[0];
        e[1] -= other.e[1];
        e[2] -= other.e[2];
        return *this;
    }

    Vector3 operator*=(double num)
    {
        e[0] *= num;
        e[1] *= num;
        e[2] *= num;
        return *this;
    }
}