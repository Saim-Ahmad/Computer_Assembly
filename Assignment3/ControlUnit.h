#pragma once
class ControlUnit
{
protected:
	float clock;
public:
	ControlUnit();
	ControlUnit(float a);
	~ControlUnit();
	float getclock();
	void setclock(float a);
};

