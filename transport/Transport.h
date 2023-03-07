#pragma once
#include <iostream>

class Transport
{
protected:
    // ����� ������
    double totalRestingTime = 0;
    double restCount = 0;
    int distance = 0;
    double raceTimeWoRest = 0;
    double totalRaceTime = 0;
    // ������ ��� ��
    int speed = 0;
    double timeToRest = 0;
    double resting1stTime = 0;
    double resting2ndTime = 0;
    double restingOtherTime = 0;
    std::string transportName = "���������";
    int transportId = 0;
    int transportType = 1; //��� ���������� (1 - ��������, 2 - ���������)
public:
    bool setDistance(int distance);
    virtual double getTotalRaceTime();
    std::string getName();
    int getType();
    int getId();
};

