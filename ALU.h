#pragma once
class ALU
{
protected:
	int NoOfAdders;
	int NoOfSubtractor;
	int NoOfRegisters;
	int sizeOfRegisters;
public:
	//constructors
	ALU();
	ALU(int a, int b, int c, int d);
	//getters setters
	void setNoOfAdders(int a);
	void setNoOfSubtractor(int b);
	void setNoOfRegisters(int c);
	void setsizeOfRegisters(int d);
	int getNoOfAdders();
	int getNoOfSubtractor();
	int getNoOfRegisters();
	int getsizeOfRegisters();
	~ALU();
};

