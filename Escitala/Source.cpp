#include <iostream>
#include "Escitala.h"
#include<string>
using namespace std;



int main()
{
	string texto;
	int filas, columnas;


	cout << "Ingrese un mensaje\n";
	getline(cin, texto);
	
	cout << "filas:\n";
	cin >> filas;
	cout << "Columnas:\n";
	cin >> columnas;

	Escitala esc1(filas,columnas);

	string cifrado = esc1.cifrar(texto);
	cout<<"\nMensaje cifrado: \n"<<cifrado;
	string descifrado = esc1.descifrar(cifrado);
	cout << "\n\nMensaje Descifrado: \n" << descifrado;
	return 0;
}
