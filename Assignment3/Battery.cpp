#include "Battery.h"

Battery::Battery():capacity(0){ }

Battery::Battery(int c)
{
    capacity = 0;
}

Battery::~Battery()
{
}

void Battery::setcapacity(int c)
{
    capacity = c;
}

int Battery::getcapacity()
{
    return capacity;
}
