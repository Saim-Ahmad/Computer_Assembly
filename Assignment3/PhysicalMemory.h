#pragma once
class PhysicalMemory
{
protected:
	int capacity;
public:
	PhysicalMemory();
	PhysicalMemory(int a);
	void setcapacity(int a);
	int getcapacity();
	~PhysicalMemory();
};

