#pragma once
#include<string>
using std::string;
class PowerSupply
{
protected:
	string efficiencyRating;
	int wattage;
	double price;
public:
	PowerSupply();
	PowerSupply(string er, int a, double b);
	void seter(string er);
	void setswattage(int s);
	void setprice(double p);
	string geter();
	int getwattage();
	double getprice();
	~PowerSupply();

};

