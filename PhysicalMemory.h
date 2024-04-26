#pragma once
#include<iostream>
#include <string>
using namespace std;
class PhysicalMemory
{
protected:
	int capacity;
	string pmType;
public:
	//constructors
	PhysicalMemory();
	PhysicalMemory(int a,string t);
	//getters setters
	void setcapacity(int a);
	void srttype(string t);
	string gettype();
	int getcapacity();
	~PhysicalMemory();
};

