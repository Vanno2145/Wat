#include "Reservoir.h"
#include <iostream>

using namespace std;

Reservoir::Reservoir()
{
	name = nullptr;

	width = height = depth = 0;
}

Reservoir::Reservoir(const char* n)
{
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
}

Reservoir::Reservoir(const char* n, double w):Reservoir(n)
{
	width = w;
}

Reservoir::Reservoir(const char* n, double w, double h) :Reservoir(n, w)
{
	height = h;
}

Reservoir::Reservoir(const char* n, double w, double h, double d) :Reservoir(n, w, h)
{
	depth = d;
}

Reservoir::Reservoir(const char* n, double w, double h, double d, const char * t) :Reservoir(n, w, h, d)
{
	type = new char[strlen(t) + 1];
	strcpy_s(type, strlen(t) + 1, t);
}

void Reservoir::Copy(const Reservoir& r)
{
	name = new char[strlen(r.name) + 1];
	strcpy_s(name, strlen(r.name) + 1, r.name);

	width = r.width;
	height = r.height;
	depth = r.depth;

	type = new char[strlen(r.type) + 1];
	strcpy_s(type, strlen(r.type) + 1, r.type);
}

void Reservoir::Info()
{
	char* n = new char[10];
	cout << "Enter name: ";
	cin >> n;

	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);

	cout << "Enter width: ";
	cin >> width;

	cout << "Enter height: ";
	cin >> height;

	cout << "Enter depth: ";
	cin >> depth;

	char* t = new char[10];
	cout << "Enter type: ";
	cin >> t;

	type = new char[strlen(t) + 1];
	strcpy_s(type, strlen(t) + 1, t);
}

void Reservoir::Print()
{
	cout << "Name: " << name << endl
		<< "Width: " << width << endl
		<< "Height: " << height << endl
		 << "Depth: " << depth << endl
		 << "Reservoir type: " << type << endl;
}

void Reservoir::Square()
{
	cout << "Reservoir square: " << width * height * depth;
}

void Reservoir::Capacity()
{
	cout << "Reservoir capacity: " << width * height;
}

void Reservoir::Restype(const Reservoir& r)
{
		cout << "Reservoirs types: " << type << " - " << r.type << endl;
}

void Reservoir::Ressquare(const Reservoir& r)
{
	cout << "Reservoirs squars: " << width * height << " - " << r.height * r.width;
}

Reservoir::~Reservoir()
{
	delete[] name;
	delete[] type;
}
