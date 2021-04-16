#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	string cadena1;
	int cadaBloque;
	
	
	getline(cin, cadena1);
	cin >> cadaBloque;
	string resultado;
	vector <string> palabras;
	
	
	int resto = cadena1.length() % cadaBloque;
	
	if (cadena1.length() % cadaBloque)//caracteres faltantees
	{
		string adicional(cadaBloque - resto, 'x');
		cadena1.append(adicional);
	}
	
	cout << "PASO C:\n";
	for (int i = 0; i < cadena1.length(); i += cadaBloque)
	{
		string out = cadena1.substr(i, 4);
		cout<<out<<endl;//paso c
		resultado.append(out+"*");
		palabras.push_back(out);
	}
	cout << "\nPASO E:\n"<<resultado<<endl;// resultado almacena el paso e
	cout << "\nPASO G : \n" << endl;
	int cont = 0;
	for (auto i = palabras.begin(); i != palabras.end(); i++,cont++)
	{
		cout << "pos :" <<cont<<" bloque: "<<*i<< endl;
	}
	return 0;
}
