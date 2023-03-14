#pragma once
#include "Transport.h"
class FastCamel :
    public Transport
{
public:
    __declspec(dllexport) FastCamel();
    __declspec(dllexport) double getTotalRaceTime() override;
};

