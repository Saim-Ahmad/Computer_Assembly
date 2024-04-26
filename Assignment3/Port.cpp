#include "Port.h"

Port::Port() : baud_rate(0), portType("") {}

Port::Port(int baudRate, string type) : baud_rate(baudRate), portType(type) {}

void Port::setBaudRate(int a)
{
    baud_rate = a;
}

void Port::setPortType(string Type)
{
    portType = Type;
}

int Port::getBaudRate()
{
    return baud_rate;
}

string Port::getPortType()
{
    return portType;
}

Port::~Port() {}
