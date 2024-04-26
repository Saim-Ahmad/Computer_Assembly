#pragma once
#include <cstring>
using std::string;
class MainMemory
{
protected:
	int capacity;
	string technologyType;
public:
	//constructors
	MainMemory();
	MainMemory(int a, string type);
	//getters setters
	void setcapacity(int a);
	void settechnologytype(string type);
	int getcapacity();
	string gettechnologytype();
	~MainMemory();
};

