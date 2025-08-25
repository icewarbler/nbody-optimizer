#include <Vector3.h>

class particle 
{
private:
    Vector3 position;
    Vector3 velocity;
    Vector3 acceleration;
    double mass;

public:
    particle(const Vector3& pos, const Vector3& vel, const Vector3 accel, double m)
        : position(pos), velocity(vel), acceleration(accel), mass(m) {}

    Vector3 getPosition() const { return position; }
    Vector3 getVelocity() const { return velocity; }
    Vector3 getAcceleration() const { return acceleration; }
    double getMass() const { return mass; }

    void setPosition(const Vector3& pos) { position=pos; }
    void setVelocity(const Vector3& vel) { velocity=vel; }
    void setAcceleration(const Vector3& accel) { acceleration=accel; }

    Vector3 updatePosition(double dt) { position += velocity*dt; return position; }

};