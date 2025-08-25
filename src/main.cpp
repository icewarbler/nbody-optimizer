#include <iostream>
#include <string>
#include <particle.h>

int main(int argc, char* argv[])
{
    Vector3 startPos(0, 0, 0);
    Vector3 startVel(1, 0, 0);
    Vector3 startAccel(0, 0, 0);
    double mass = 1.0;

    particle p(startPos, startVel, startAccel, mass);

    p.updatePosition(0.01);

    std::cout << p.getPosition();
    
    return 0;
}