#pragma once
class Battery
{
protected:
	int capacity;
public:
	Battery();
	Battery(int c);
	~Battery();
	void setcapacity(int c);
	int getcapacity();
};

