#include "divisiones.h"

Divisiones::Divisiones(int a, int n)
{
	this->a = a;
	this->n = n;
}

int Divisiones::divisionEnteros()
{
	int resto;
	int cociente, res;

	resto = a / n;//residuo
	cociente = a - (resto * n);//cociente

	if (cociente < 0)
	{
		res = cociente+n;
		return res;
	}
	return cociente;
	
}
