#pragma once
#include "Transport.h"
class MagicCarpet :
    public Transport
{
public:
    MagicCarpet();
    double getTotalRaceTime() override;
};

