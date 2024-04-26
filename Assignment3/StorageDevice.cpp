#include "StorageDevice.h"
using std::string;
#include <cstring>

StorageDevice::StorageDevice() : device(""), capacity(0), price(0.0) { }

StorageDevice::StorageDevice(string name, int a, double b)
{
	device = name;
	capacity = a;
	price = b;
}

StorageDevice::~StorageDevice()
{
}

void StorageDevice::setdevice(string t)
{
	device = t;
}

void StorageDevice::setcapacity(int c)
{
	capacity = c;
}

void StorageDevice::setprice(double p)
{
	price = p;
}

string StorageDevice::getdevice()
{
	return device;
}

int StorageDevice::getcapacity()
{
	return capacity;
}

double StorageDevice::getprice()
{
	return price;
}
