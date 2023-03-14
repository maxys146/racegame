#pragma once
#include "Transport.h"
class BootsAT :
    public Transport
{
public:
    __declspec(dllexport) BootsAT();
    __declspec(dllexport) double getTotalRaceTime() override;
};

