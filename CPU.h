#pragma once
#include"ALU.h"
#include"ControlUnit.h"
#include<string>
using namespace std;
class CPU
{
protected:
	ALU* au;
	ControlUnit* cu;
	string brand;
	string architecture;
	string gpuBrand;
	int gpuSize;
public:
	//constructors
	CPU();
	CPU(ALU* a, ControlUnit* c, string brand, string architecture);
	CPU(ALU* a, ControlUnit* c, string brand, string architecture, string gpuBrand, int gpuMemorySize);
	~CPU();
	//getters setters

	ALU* getau();
	ControlUnit* getcu();
	string getBrand() ;
	void setBrand( string& brand);
	string getArchitecture() ;
	void setArchitecture( string& architecture);
	string getGPUBrand() ;
	void setGPUBrand( string& gpuBrand);
	int getGPUMemorySize() ;
	void setGPUMemorySize(int gpuMemorySize);
	
};

