#include "CPU.h"
#include"ALU.h"
#include"ControlUnit.h"

CPU::CPU():au(nullptr),cu(nullptr),brand(""),architecture(""),gpuBrand(""),gpuSize(0) { }

CPU::CPU(ALU* a, ControlUnit* c, string brand, string architecture) :au(a), cu(c), brand(brand), architecture(architecture),
gpuBrand(gpuBrand), gpuSize(0) { }


CPU::CPU(ALU* a, ControlUnit* c, string brand, string architecture, string gpuBrand, int gpuMemorySize):au(a), cu(c), brand(brand),
architecture(architecture), gpuBrand(gpuBrand), gpuSize(gpuMemorySize) {}



CPU::~CPU()
{
	delete au;
	delete cu;
}

ALU* CPU::getau()
{
	return au;
}

ControlUnit* CPU::getcu()
{
	return cu;
}

string CPU::getBrand()
{
	return brand;
}

void CPU::setBrand(string& brand)
{
	this->brand= brand;
}

string CPU::getArchitecture()
{
	return architecture;
}

void CPU::setArchitecture(string& architecture)
{
	this->architecture = architecture;
}

string CPU::getGPUBrand()
{
	return gpuBrand;
}

void CPU::setGPUBrand(string& gpuBrand)
{
	this->gpuBrand = gpuBrand;
}

int CPU::getGPUMemorySize()
{
	return gpuSize;
}

void CPU::setGPUMemorySize(int gpuMemorySize)
{
	this->gpuSize = gpuMemorySize;
}
