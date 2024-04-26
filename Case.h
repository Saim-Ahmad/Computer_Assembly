#pragma once
#include<string>
using std::string;
class Case
{
protected:
	string formFactor;
	string color;
	double price;
public:
	//constructors
	Case();
	Case(string ff, string c, double price);
	//getters setters
	void setff(string form);
	void setcolor(string c);
	void setprice(double p);
	double getprice();
	string getff();
	string getcolor();
	~Case();
};

