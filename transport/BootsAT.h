#pragma once
#include "Transport.h"
class BootsAT :
    public Transport
{
public:
    BootsAT();
    double getTotalRaceTime() override;
};

