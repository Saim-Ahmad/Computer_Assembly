#include "MotherBoard.h"

MotherBoard::MotherBoard() :ports(nullptr), numports(0) {}


MotherBoard::MotherBoard(MainMemory* m, int num, Port* p) :mm(m), numports(num),ports(p)
{
	
}

void MotherBoard::setmm(MainMemory* m)
{
	mm = m;
}

void MotherBoard::setports(int index, Port p)
{
	ports[index] = *(new Port(p));
}

void MotherBoard::setnum(int n)
{
	numports = n;
}

MainMemory* MotherBoard::getmm()
{
	return mm;
}

int MotherBoard::getnum()
{
	return numports;
}

MotherBoard::~MotherBoard()
{
	delete[] ports;
}
