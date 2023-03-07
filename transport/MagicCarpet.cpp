#include "MagicCarpet.h"

MagicCarpet::MagicCarpet()
{
    speed = 10;
    transportName = "Ковёр-самолёт";
    transportId = 7;
    transportType = 2;
}
double MagicCarpet::getTotalRaceTime()
{
    double reductionPercent, totalDistance;

    if (distance < 1000) {
        reductionPercent = 0;
    }
    else if (distance < 5000) {
        reductionPercent = 3;
    }
    else if (distance < 10000) {
        reductionPercent = 10;
    }
    else if (distance >= 10000) {
        reductionPercent = 5;
    }
    totalDistance = (distance / 100) * (100 - reductionPercent);

    totalRaceTime = totalDistance / speed;

    return totalRaceTime;
}