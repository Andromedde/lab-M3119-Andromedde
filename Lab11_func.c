//
// Created by FerHard_GW on 20.12.2022.
//

#include "math.h"
#include "Lab11.h"

float Perimeter(struct Cord arg)
{
    float a, b;
    a = abs(arg.x1 - arg.x2);
    b = sqrt(abs(arg.y2 - arg.y3) * abs(arg.y2 - arg.y3) + (abs(arg.x2 - arg.x3) * abs(arg.x2 - arg.x3)));
    return (a + b) * 2;
}

int Area(struct Cord arg)
{
    return (arg.y1 - arg.y4) * (arg.x2 - arg.x1);
}
