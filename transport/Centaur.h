#pragma once
#include "Transport.h"
class Centaur :
    public Transport
{
public:
    __declspec(dllexport) Centaur();
    __declspec(dllexport) double getTotalRaceTime() override;
};

