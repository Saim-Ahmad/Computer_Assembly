#include "ControlUnit.h"

ControlUnit::ControlUnit() : clock(0) { }

ControlUnit::ControlUnit(float a) : clock(a) { }

ControlUnit::~ControlUnit()
{

}

float ControlUnit::getclock()
{
    return clock;
}

void ControlUnit::setclock(float a)
{
    clock = a;
}
