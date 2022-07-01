#include "question2.h"
#include<math.h>

double get_kinetic_energy(double mass, double velocity)
{   
    return 0.5 * mass * (pow(velocity, 2));
}