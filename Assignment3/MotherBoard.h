#pragma once
#include"Port.h"
#include"MainMemory.h"
class MotherBoard
{
protected:
	MainMemory* mm;
	Port* ports;
	int numports;
public:
	MotherBoard();
	MotherBoard(MainMemory* m, int num);
	void setmm(MainMemory* m);
	void setports(int index, Port p);
	void setnum(int n);
	MainMemory* getmm();
	Port* getports;
	int getnum();
	~MotherBoard();
};

