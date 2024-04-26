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
	//constructors
	PowerSupply();
	PowerSupply(string er, int a, double b);
	//getters setters
	void seter(string er);
	void setswattage(int s);
	void setprice(double p);
	string geter();
	int getwattage();
	double getprice();
	~PowerSupply();

};

