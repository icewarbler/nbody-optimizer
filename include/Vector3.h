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
    double& operator[](int i) { return e[i]; }

    double& x() { return e[0]; }
    double& y() { return e[1]; }
    double& z() { return e[2]; }
}