#include <math.h>
#include "dist_header.h"


double degToRad(double a) {     //degres to radian
    return ((a * M_PI) / 180);
}

double calculateDistance(double Fa, double Fb, double La, double Lb) {
    double d = acos(
        sin(Fa)*sin(Fb) + cos(Fa)*cos(Fb)*cos(La - Lb)
    );
    return d * EARTH_RADIUS;
}