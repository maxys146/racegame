#include "Broom.h"
#include <iostream>

Broom::Broom()
{
    speed = 20;
    transportName = "Метла";
    transportId = 2;
    transportType = 2;
}
double Broom::getTotalRaceTime()
{
    double reductionPercent, totalDistance;

    reductionPercent = floor(distance / 1000);

    totalDistance = (distance / 100) * (100 - reductionPercent);

    totalRaceTime = totalDistance / speed;

    return totalRaceTime;
}