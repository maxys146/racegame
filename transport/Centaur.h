#pragma once
#include "Transport.h"
class Centaur :
    public Transport
{
public:
    Centaur();
    double getTotalRaceTime() override;
};

