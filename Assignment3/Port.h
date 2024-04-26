#pragma once
#include <string>
using namespace std;

class Port
{
protected:
    int baud_rate;
    string portType;

public:
    Port();
    Port(int baudRate, string type);
    void setBaudRate(int a);
    void setPortType(string Type);
    int getBaudRate();
    string getPortType();
    ~Port();
};
