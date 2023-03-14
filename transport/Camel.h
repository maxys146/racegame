#pragma once
#include "Transport.h"
class Camel :
    public Transport
{
public:
    __declspec(dllexport) Camel();
    __declspec(dllexport) double getTotalRaceTime() override;
};

