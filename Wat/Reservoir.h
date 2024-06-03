#pragma once
class Reservoir
{
	char* name;

	double width;
	double height;
	double depth;

	char* type;
public:
	Reservoir();
	Reservoir(const char* n);
	Reservoir(const char* n, double w);
	Reservoir(const char* n, double w, double h);
	Reservoir(const char* n, double w, double h, double d);
	Reservoir(const char* n, double w, double h, double d, const char* t);

	void Copy(const Reservoir & r);
	void Info();
	void Print();

	void Square();
	void Capacity();

	void Restype(const Reservoir & r);
	void Ressquare(const Reservoir& r);

	~Reservoir();
};

