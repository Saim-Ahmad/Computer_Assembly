#pragma once
#include <cstring>
using std::string;
class MainMemory
{
protected:
	int capacity;
	string technologyType;
public:
	MainMemory();
	MainMemory(int a, string type);
	void setcapacity(int a);
	void settechnologytype(string type);
	int getcapacity();
	string gettechnologytype();
	~MainMemory();
};

