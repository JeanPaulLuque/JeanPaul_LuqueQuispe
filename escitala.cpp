#include <iostream>
#include <string>
using namespace std;
void encode(int,int,string);
void decode(int, int, string);
void validar(string);
int main()
{
	int rows, columns;
	string msg;
	cout << "Ingrese el mensaje:" << endl;
	getline(std::cin, msg);
	cout << "Filas:" << endl;
	cin >> rows;
	cout << "Columnas:" << endl;
	cin >> columns;
	
	if(msg.length()>rows*columns){
		cout << "Invalid input.";
	}
	else {
		encode(rows, columns, msg);//code : orden primero filas despues columnas
		//code(columns, rows, msg); inverso de code
	}
	cout << "\nMensaje Descifrado: \n";
	//decode(columns, rows, msg);
	

	return 0;
}
void encode(int r,int c,string msg)
{
	int csize = r * c;
	string newText(csize, ' ');//creando string con x tamaño
	int cont = 0;
	int auxVueltas = 1;
	for (int i = 0; i < msg.length(); i++)
	{
		newText[i] = msg[i];
	}
	
	

	for (int i = 0; i < c; i++)
	{
		for (int j = 0; j < r; j++)
		{
			
			cout << newText[cont];

			cont =  cont + c;
		}
		cont = 0;
		cont += auxVueltas;
		auxVueltas++;

	}
	
}
void decode(int r, int c, string msg)
{
	int csize = r * c;
	string newText(csize, ' ');//creando string con x tamaño
	int cont = 0;
	int auxVueltas = 1;
	for (int i = 0; i < msg.length(); i++)
	{
		newText[i] = msg[i];
	}



	for (int i = 0; i < c; i++)
	{
		for (int j = 0; j < r; j++)
		{

			cout << newText[cont];

			cont = cont + c;
		}
		cont = 0;
		cont += auxVueltas;
		auxVueltas++;

	}

}
