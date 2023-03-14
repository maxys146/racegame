#pragma once
#include "Transport.h"
class MagicCarpet :
    public Transport
{
public:
    __declspec(dllexport) MagicCarpet();
    __declspec(dllexport) double getTotalRaceTime() override;
};

