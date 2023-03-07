#include "Eagle.h"

Eagle::Eagle()
{
    speed = 8;
    transportName = "Îð¸ë";
    transportId = 5;
    transportType = 2;
}
double Eagle::getTotalRaceTime()
{
    double reductionPercent, totalDistance;

    reductionPercent = 6;

    totalDistance = (distance / 100) * (100 - reductionPercent);

    totalRaceTime = totalDistance / speed;

    return totalRaceTime;
}