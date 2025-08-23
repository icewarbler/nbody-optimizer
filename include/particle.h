#include <Vector3.h>

class particle 
{
private:
    Vector3 position;
    Vector3 velocity;
    Vector3 acceleration;
    double mass;
};

// Returns an updated position
Vector3 updatePosition(double dt);

Vector3 applyForce(Vector3 )