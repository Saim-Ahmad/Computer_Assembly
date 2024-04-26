#include "Case.h"

Case::Case(): formFactor(""),color(""),price(0){ }

Case::Case(string ff, string c, double price)
{
	formFactor = ff;
	color = c;
	this->price = price;
}

void Case::setff(string form)
{
	formFactor = form;
}

void Case::setcolor(string c)
{
	color = c;
}

void Case::setprice(double p)
{
	price = p;
}

double Case::getprice()
{
	return price;
}

string Case::getff()
{
	return formFactor;
}

string Case::getcolor()
{
	return color;
}

Case::~Case()
{
}
