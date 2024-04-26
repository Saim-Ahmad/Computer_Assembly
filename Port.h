#pragma once
#include <string>
using namespace std;

class Port
{
protected:
    int baud_rate;
    string portType;

public:
    //constructors
    Port();
    Port(int baudRate, string type);
    //getters setters
    void setBaudRate(int a);
    void setPortType(string Type);
    int getBaudRate();
    string getPortType();
    ~Port();
};
