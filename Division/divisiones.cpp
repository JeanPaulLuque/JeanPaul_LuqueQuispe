#include "divisiones.h"

Divisiones::Divisiones(int a, int n)
{
	this->a = a;
	this->n = n;
}

int Divisiones::divisionEnteros()
{
	int coci;
	int rest, res;

	coci = a / n;//cociente
	rest = a - (coci * n);//resto
	std::cout << "cociente " << rest;
	std::cout << std::endl <<coci<<std::endl;
	if (rest < 0)
	{
		res = rest+n;
		return res;
	}
	return rest;
	
}
