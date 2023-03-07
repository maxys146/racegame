#pragma once
#include "Transport.h"
class Broom :
    public Transport
{
public:
    Broom();
    double getTotalRaceTime() override;
};

