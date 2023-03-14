#pragma once
#include "Transport.h"
class Broom :
    public Transport
{
public:
    __declspec(dllexport) Broom();
    __declspec(dllexport) double getTotalRaceTime() override;
};

