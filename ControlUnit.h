#pragma once
class ControlUnit
{
protected:
	float clock;
public:
	//constructor
	ControlUnit();
	ControlUnit(float a);
	~ControlUnit();
	//getters setters

	float getclock();
	void setclock(float a);
};

