#pragma once
#include "Transport.h"
class Camel :
    public Transport
{
public:
    Camel();
    double getTotalRaceTime() override;
};

