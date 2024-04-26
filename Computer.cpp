#include "Computer.h"
#include"PhysicalMemory.h"
#include"MotherBoard.h"
#include"CPU.h"


Computer::Computer(PhysicalMemory& p, MotherBoard& m, CPU& c):pm(p),mb(m),cpu(c){ }

Computer::~Computer()
{
}

PhysicalMemory Computer::getPhysicalMemory()
{
    return pm;
}

MotherBoard Computer::getMotherBoard()
{
    return mb;
}

CPU Computer::getCPU()
{
    return cpu;
}

void Computer::setPhysicalMemory(PhysicalMemory& p)
{
    pm = p;
}

void Computer::setMotherBoard(MotherBoard& m)
{
    mb = m;
}

void Computer::setCPU(CPU& c)
{
    cpu = c;
}
