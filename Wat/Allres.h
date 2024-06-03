#pragma once
#include "Reservoir.h"
class Allres
{
	int count;
	Reservoir* all;
public:
	Allres();

	void Addres(int c, const Reservoir & r);
	void Printres();

	~Allres();
};

