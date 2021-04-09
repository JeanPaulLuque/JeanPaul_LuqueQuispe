#pragma once
#include <iostream>
#include <string>
using namespace std;
class Escitala
{
private:
	int filas;
	int columnas;
	int total = (filas * columnas)-1;
public:
	Escitala(int filas,int columnas);
	string cifrar(string msg);
	string descifrar(string msg);
};

