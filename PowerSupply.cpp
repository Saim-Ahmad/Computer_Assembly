#include "PowerSupply.h"

PowerSupply::PowerSupply() :efficiencyRating(""), wattage(0), price(0){ }

PowerSupply::PowerSupply(string er, int a, double b)
{
	efficiencyRating = er;
	wattage = a;
	price = b;
}

void PowerSupply::seter(string er)
{
	efficiencyRating = er;
}

void PowerSupply::setswattage(int s)
{
	wattage = s;
}

void PowerSupply::setprice(double p)
{
	price = p;
}

string PowerSupply::geter()
{
	return efficiencyRating;
}

int PowerSupply::getwattage()
{
	return wattage;
}

double PowerSupply::getprice()
{
	return price;
}

PowerSupply::~PowerSupply()
{
}
