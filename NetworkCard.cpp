#include "NetworkCard.h"
#include<string>
using std::string;

NetworkCard::NetworkCard():cardType(""),speed(0),price(0.0) { }

NetworkCard::NetworkCard(string name, int a, double b)
{
	cardType = name;
	speed = a;
	price = b;
}

void NetworkCard::settype(string name)
{
	cardType = name;
}

void NetworkCard::setspeed(int s)
{
	speed = s;
}

void NetworkCard::setprice(double p)
{
	price = p;
}

string NetworkCard::getbrand()
{
	return cardType;
}

int NetworkCard::getspeed()
{
	return speed;
}

double NetworkCard::getprice()
{
	return price;
}

NetworkCard::~NetworkCard()
{
}
