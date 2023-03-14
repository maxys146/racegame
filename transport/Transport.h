#pragma once
#include <iostream>

#ifdef TRANSPORT_DLL_EXPORT
#define TRANSPORT_DLL_API __declspec(dllexport)
#else
#define TRANSPORT_DLL_API __declspec(dllimport)
#endif // TRANSPORT_DLL_EXPORT


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
    TRANSPORT_DLL_API bool setDistance(int distance);
    TRANSPORT_DLL_API virtual double getTotalRaceTime();
    TRANSPORT_DLL_API std::string getName();
    TRANSPORT_DLL_API int getId();
};

