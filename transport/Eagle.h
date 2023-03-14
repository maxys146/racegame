#pragma once
#include "Transport.h"
class Eagle :
    public Transport
{
public:
    __declspec(dllexport) Eagle();
    __declspec(dllexport) double getTotalRaceTime() override;
};

