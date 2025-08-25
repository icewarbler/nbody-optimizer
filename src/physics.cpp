#include "physics.h"

namespace Physics {
    const double G=6.6743e-11

    Vector3 gravForce(const particle& p1, const particle& p2) 
    {
        Vector3 r = p2.getPosition() - p1.getPosition;
        double rd = r.x() * r.x() + r.y()*r.y() + r.z()*r.z();
        double dist = std::sqrt(rd);

        double force = G * p1.getMass() * p2.getMass() / rd;
        return (r*(force / dist));
    }
}