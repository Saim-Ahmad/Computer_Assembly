#pragma once
#include <cstring>
#include <string>
using std::string;
class GraphicsCard
{
protected:
	string brand;
	int memorySize;
	double price;
public:
	//constructor
	GraphicsCard();
	GraphicsCard(string name, int a, double b);
	//getters setters
	void setbrand(string name);
	void setsize(int s);
	void setprice(double p);
	string getbrand();
	int getsize();
	double getprice();
	~GraphicsCard();
};

