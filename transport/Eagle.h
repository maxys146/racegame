#pragma once
#include "Transport.h"
class Eagle :
    public Transport
{
public:
    Eagle();
    double getTotalRaceTime() override;
};

