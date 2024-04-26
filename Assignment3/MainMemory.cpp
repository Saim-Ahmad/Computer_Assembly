#include<string>
#include "MainMemory.h"

MainMemory::MainMemory(): capacity(0), technologyType("") { }

MainMemory::MainMemory(int a, string type) : capacity(a), technologyType(type) { }

void MainMemory::setcapacity(int a)
{
	capacity = a;
}

void MainMemory::settechnologytype(string type)
{
	technologyType = type;
}

int MainMemory::getcapacity()
{
	return capacity;
}

string MainMemory::gettechnologytype()
{
	return technologyType;
}

MainMemory::~MainMemory()
{
}
