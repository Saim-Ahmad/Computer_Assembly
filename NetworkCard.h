#pragma once
#include<string>
using std::string;
class NetworkCard
{
protected:
	string cardType;
	int speed;
	double price;
public:
	//constructors
	NetworkCard();
	NetworkCard(string name, int a, double b);
	//getters setters
	void settype(string name);
	void setspeed(int s);
	void setprice(double p);
	string getbrand();
	int getspeed();
	double getprice();
	~NetworkCard();
};

