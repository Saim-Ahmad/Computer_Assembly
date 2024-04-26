#include "PhysicalMemory.h"

PhysicalMemory::PhysicalMemory(): capacity(0) { }

PhysicalMemory::PhysicalMemory(int a) : capacity(a) { }

void PhysicalMemory::setcapacity(int a)
{
    capacity = a;
}

int PhysicalMemory::getcapacity()
{
    return capacity;
}

PhysicalMemory::~PhysicalMemory()
{
}
