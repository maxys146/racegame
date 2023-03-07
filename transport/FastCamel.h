#pragma once
#include "Transport.h"
class FastCamel :
    public Transport
{
public:
    FastCamel();
    double getTotalRaceTime() override;
};

