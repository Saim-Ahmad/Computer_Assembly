#pragma once
class Battery
{
protected:
	int capacity;
public:
	//constructors
	Battery();
	Battery(int c);
	~Battery();
	//getters setters
	void setcapacity(int c);
	int getcapacity();
};

