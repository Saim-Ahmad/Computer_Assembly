#pragma once
#include <string>
using std::string;
class StorageDevice
{
protected:
    string device;
    int capacity;
    double price;

public:
    StorageDevice();
    StorageDevice(string name, int a, double b);
    ~StorageDevice();
    void setdevice(string t);
    void setcapacity(int c);
    void setprice(double p);
    string getdevice();
    int getcapacity();
    double getprice();
};

