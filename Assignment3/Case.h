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
	Case();
	Case(string ff, string c, double price);
	void setff(string form);
	void setcolor(string c);
	void setprice(double p);
	double getprice();
	string getff();
	string getcolor();
	~Case();
};

