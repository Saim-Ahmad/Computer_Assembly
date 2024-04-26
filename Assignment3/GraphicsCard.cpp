#include "GraphicsCard.h"
#include <cstring>
#include <string>
using std::string;

GraphicsCard::GraphicsCard(): brand(""), memorySize(0), price(0.0) { }

GraphicsCard::GraphicsCard(string name, int a, double b) : brand(name), memorySize(a), price(b) { }

void GraphicsCard::setbrand(string name)
{
	brand = name;
}

void GraphicsCard::setsize(int s)
{
	memorySize = s;
}

void GraphicsCard::setprice(double p)
{
	price = p;
}

string GraphicsCard::getbrand()
{
	return brand;
}

int GraphicsCard::getsize()
{
	return memorySize;
}

double GraphicsCard::getprice()
{
	return price;
}

GraphicsCard::~GraphicsCard()
{
}
