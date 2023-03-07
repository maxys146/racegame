#include "BootsAT.h"
#include <iostream>

BootsAT::BootsAT()
{
    speed = 6;
    timeToRest = 60;
    resting1stTime = 10;
    restingOtherTime = 5;
    transportName = "Ботинки-вездеходы";
    transportId = 1;
    transportType = 1;
}
double BootsAT::getTotalRaceTime()
{
    raceTimeWoRest = distance / speed;
    restCount = raceTimeWoRest / timeToRest;
    if (floor(restCount) == restCount)
        restCount = restCount - 1;
    else
        restCount = floor(restCount);

    totalRestingTime = resting1stTime + (restingOtherTime * (restCount - 1));

    totalRaceTime = raceTimeWoRest + totalRestingTime;
    return totalRaceTime;
}