#include "Allres.h"
#include <iostream>

using namespace std;

Allres::Allres()
{
	count = 0;
	all = nullptr;
}

void Allres::Addres(int c, const Reservoir& r)
{
	all[count] = r;
	count++;
}

void Allres::Printres()
{
	for (int i = 0; i < count; i++) {
		all[i].Print();
	}
}

Allres::~Allres()
{
	delete[] all;
}
