#include "Transport.h"

bool Transport::setDistance(int distance)
{
	this->distance = distance;
	return true;
}
double Transport::getTotalRaceTime()
{
	return 1;
}
std::string Transport::getName()
{
	return transportName;
}
int Transport::getId()
{
	return transportId;
}