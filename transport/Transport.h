#pragma once
#include <iostream>

class Transport
{
protected:
    // Общие данные
    double totalRestingTime = 0;
    double restCount = 0;
    int distance = 0;
    double raceTimeWoRest = 0;
    double totalRaceTime = 0;
    // Данные для ТС
    int speed = 0;
    double timeToRest = 0;
    double resting1stTime = 0;
    double resting2ndTime = 0;
    double restingOtherTime = 0;
    std::string transportName = "Транспорт";
    int transportId = 0;
    int transportType = 1; //Тип транспорта (1 - наземный, 2 - воздушный)
public:
    __declspec(dllexport) bool setDistance(int distance);
    __declspec(dllexport) virtual double getTotalRaceTime();
    __declspec(dllexport) std::string getName();
    __declspec(dllexport) int getType();
    __declspec(dllexport) int getId();
};

