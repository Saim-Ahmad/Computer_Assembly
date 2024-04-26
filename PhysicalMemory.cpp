#include "PhysicalMemory.h"

PhysicalMemory::PhysicalMemory(): capacity(0) { }

PhysicalMemory::PhysicalMemory(int a, string t) : capacity(a), pmType(t)
{

}


void PhysicalMemory::setcapacity(int a)
{
    capacity = a;
}

void PhysicalMemory::srttype(string t)
{
    pmType = t;
}

string PhysicalMemory::gettype()
{
    return pmType;
}

int PhysicalMemory::getcapacity()
{
    return capacity;
}

PhysicalMemory::~PhysicalMemory()
{
}
