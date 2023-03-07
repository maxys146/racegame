#include "FastCamel.h"
#include <iostream>

FastCamel::FastCamel()
{
    speed = 40;
    timeToRest = 10;
    resting1stTime = 5;
    resting2ndTime = 6.5;
    restingOtherTime = 8;
    transportName = "Верблюд-быстроход";
    transportId = 6;
    transportType = 1;
}
double FastCamel::getTotalRaceTime()
{
    raceTimeWoRest = distance / speed;
    restCount = raceTimeWoRest / timeToRest;
    if (floor(restCount) == restCount)
        restCount = restCount - 1;
    else
        restCount = floor(restCount);

    if (restCount == 1)
    {
        totalRestingTime = resting1stTime;
    }
    else if (restCount == 2)
    {
        totalRestingTime = resting1stTime + resting2ndTime;
    }
    else if (restCount > 2)
    {
        totalRestingTime = resting1stTime + resting2ndTime + (restingOtherTime * (restCount - 2));
    }
    totalRaceTime = raceTimeWoRest + totalRestingTime;
    return totalRaceTime;
}