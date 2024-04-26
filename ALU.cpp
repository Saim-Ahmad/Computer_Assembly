#include "ALU.h"

ALU::ALU():NoOfAdders(1), NoOfSubtractor(1), NoOfRegisters(1), sizeOfRegisters(32) { }

ALU::ALU(int a, int b, int c, int d):NoOfAdders(a), NoOfSubtractor(b), NoOfRegisters(c), sizeOfRegisters(d) { }

void ALU::setNoOfAdders(int a)
{
	NoOfAdders = a;
}

void ALU::setNoOfSubtractor(int b)
{
	NoOfSubtractor = b;
}

void ALU::setNoOfRegisters(int c)
{
	NoOfRegisters = c;
}

void ALU::setsizeOfRegisters(int d)
{
	sizeOfRegisters = d;
}

int ALU::getNoOfAdders()
{
	return NoOfAdders;
}

int ALU::getNoOfSubtractor()
{
	return NoOfSubtractor;
}

int ALU::getNoOfRegisters()
{
	return NoOfRegisters;
}

int ALU::getsizeOfRegisters()
{
	return sizeOfRegisters;
}

ALU::~ALU()
{

}
