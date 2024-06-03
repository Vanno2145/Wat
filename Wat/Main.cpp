#include <iostream>
#include "Reservoir.h"
#include "Allres.h"

using namespace std;

int main() {
	Reservoir first, second;

	first.Info();
	second.Info();

	second.Restype(first);
	first.Ressquare(second);
	cout << endl << endl;
	Reservoir thid;

	thid.Copy(second);


	Allres allres;

	allres.Addres(0, first);
}