#pragma once
#include"PhysicalMemory.h"
#include"MotherBoard.h"
#include"CPU.h"
class Computer
{
protected:
	PhysicalMemory& pm;
	MotherBoard& mb;
	CPU& cpu;
public:
	Computer(PhysicalMemory& p, MotherBoard& m, CPU& c);
	~Computer();
	PhysicalMemory getPhysicalMemory();
	MotherBoard getMotherBoard();
	CPU getCPU();
	void setPhysicalMemory( PhysicalMemory& p);
	void setMotherBoard( MotherBoard& m);
	void setCPU( CPU& c);
};

