#include <iostream>
#include <string>
#include <ctime>
#include "rot13.h"
using namespace std;
void dibujarPersona(int x)
{
	switch (x)
	{
	case 1:
		cout << "\t o" << endl;
		break;
	case 2:
		cout << "\t o" << endl;
		cout << "\t |" << endl;
		break;
	case 3:
		cout << "\t o" << endl;
		cout << "\t |\\" << endl;
		break;
	case 4:
		cout << "\t  o" << endl;
		cout << "\t /|\\" << endl;
		break;
	case 5:
		cout << "\t  o" << endl;
		cout << "\t /|\\" << endl;
		cout << "\t  |" << endl;
		break;
	case 6:
		cout << "\t  o" << endl;
		cout << "\t /|\\" << endl;
		cout << "\t  |" << endl;
		cout << "\t /" << endl;
		break;
	case 7:
		cout << "\t  o" << endl;
		cout << "\t /|\\" << endl;
		cout << "\t  |" << endl;
		cout << "\t / \\" << endl;
	default:
		break;
	}
}
void esq(string palabrax, string selectedWord, int intento)
{
	system("cls");
	cout << "problema 18.12" << endl;
	cout << "\t\t\"EL AHORCADO \"\n\n";
	cout << "Adivine la palabra : " << palabrax << endl;
	cout << "INTENTO : " << intento << endl;
	cout << "Ingrese una letra:\n\n";
	dibujarPersona(intento);
	cout << endl;
}

void rellenarEspacios(string &palx,string selectedW)
{
	
	int pos = selectedW.find(" ");
	while (pos!=string::npos)
	{		
		selectedW.replace(pos, 1, "*");
		palx.replace(pos, 1, " ");
		pos = selectedW.find(" ", pos + 1);
	}

}
void problema18_11()
{
	string nombre, apellido;
	cout << "Introduzca el nombre:\n";
	cin.ignore();
	getline(cin, nombre);
	cout << "Introduzca el apellido:\n";

	getline(cin, apellido);
	string resultado(nombre + " " + apellido);
	cout << "nombre completo: " << resultado << endl;
}

int problema18_12()
{
	srand((unsigned)time(0));
	int numrand = 1 + (rand() % 46);
	int wordSize;
	int intento = 0;
	
	
	string selectedWord,letraprueba,pal;
	bool game = true;
	string palabras[] = { "angel","ojo","pizza","enojado","fuegos artificiales","calabaza","bebe","flor","arco iris","barba","platillo volador","reciclar","biblia","jirafa","castillo de arena","bikini","gafas"
						,"copo de nieve","libro","tacon","escalera","estrella de mar","abejorro","iglu","fresa","mariposa","escarabajo","sol","cámara","lampara","Neumático","gato","leon","tostada","iglesia","buzon","cepillo de dientes","lapiz","noche","pasta","delfin","nariz","camion","huevo","juegos","voleibol","torre" };

	selectedWord = palabras[numrand];
	
	pal = selectedWord;
	wordSize = selectedWord.length();

	
	string palabrax(wordSize, 'x');
	cout << "palabrax:" <<palabrax<<endl;
	rellenarEspacios(palabrax, selectedWord);
	cout << palabrax<<endl;
	cout << selectedWord << endl;//palabra 
	int posicion;
	while (game)
	{
		esq(palabrax,selectedWord,intento);
		cin >> letraprueba;
		
		if (intento == 7)
		{
			game = false;
		}//condicion de intentos

		if(selectedWord.find(letraprueba) !=string ::npos)//encuentra
		{
			
			posicion = selectedWord.find(letraprueba);
			while (posicion != string::npos)
			{
				selectedWord.replace(posicion, 1, "*");
				palabrax.replace(posicion, 1, letraprueba);

				posicion = selectedWord.find(letraprueba,posicion+1);//indice de la letra encontrada
			}
			if (!palabrax.compare(pal))//compara ambas palabras
			{
				cout <<endl <<"GANASTE!!"<<endl;
				game = false;//fin del juego
			}
		}
		else {//no encuentra
			cout << "La letra no se encontro."<<endl;
			intento++;//cont de intentos
		}
	}
	
	cout <<endl<< "FIN DEL JUEGO" << endl << "LA PALABRA ERA : " << pal<<endl;
	
	return 0;
}

void problema18_19()
{
	string enunciado;
	cin.ignore();
	getline(cin, enunciado);
	int mitad = enunciado.length() / 2;
	int fin = enunciado.length() - 1;
	string subcad1 = enunciado.substr(0, mitad);
	string subcad2 = enunciado.substr(mitad, fin);
	string result(subcad1 + "******" + subcad2);
	cout << result;
}

void problema18_21()
{
	//string linea = "Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. It was popularised in the 1960s with the release of Letraset sheets containing Lorem Ipsum passages, and more recently with desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum.";
	string linea;
	cout << "introduzca el enunciado:" << endl;
	cin.ignore();
	getline(cin, linea);
	size_t found = linea.find_first_of(",.?!'");
	while (found != string::npos)
	{
		linea[found] = ' ';
		found = linea.find_first_of(",.?!'", found + 1);
	}
	std::cout << linea << '\n';
}

void problema18_22()
{
	string texto;//aloh
	cout << "Ingrese un texto\n";
	cin.ignore();
	getline(cin, texto);
	string::const_iterator iterador1 = texto.end() - 1;//apunta al final del string 
	string result;



	while (iterador1 != texto.begin())//iterador que va hasta el inicio
	{
		result += *iterador1;
		iterador1--;

	}
	result += *iterador1;//tomo el primer elemento
	cout << "resultado : \n" << result;
}

void problema18_7()
{
	Rot13 rt1;
	string texto;
	cout << "ingrese un mensaje" << endl;
	cin.ignore();
	getline(cin, texto);
	string mensaje1, mensaje1_1;
	mensaje1 = rt1.cifrar(texto);
	mensaje1_1 = rt1.descifrar(mensaje1);
	cout << "Mensaje cifrado : " << mensaje1 << endl;
	cout << "Mensaje cifrado :" << mensaje1_1 << endl;
}

void menu()
{
	int opcion;
	cout << "\t\tTarea libro deitel\n";
	cout << "seleccione el ejercicio a ejecutar:" << endl;
	cout << "\n\tOpcion | Nro. de ejercicio";
	cout << "\n\t  1    |       18.7";
	cout << "\n\t  2    |       18.11";
	cout << "\n\t  3    |       18.12";
	cout << "\n\t  4    |       18.19";
	cout << "\n\t  5    |       18.21";
	cout << "\n\t  6    |       18.22" << endl;
	cout << "Ingrese una opcion :";
	cin >> opcion;
	switch (opcion)
	{
	case 1:
		system("cls");
		cout << "problema 18.7" << endl;
		problema18_7();
		break;
	case 2:
		system("cls");
		cout << "problema 18.11" << endl;
		problema18_11();
		break;
	case 3:
		system("cls");
		cout << "problema 18.12" << endl;
		problema18_12();
		break;
	case 4:
		system("cls");
		cout << "problema 18.19" << endl;
		problema18_19();
		break;
	case 5:
		system("cls");
		cout << "problema 18.21" << endl;
		problema18_21();
		break;
	case 6:
		system("cls");
		cout << "problema 18.22" << endl;
		problema18_22();
		break;
	default:
		system("cls");
		menu();
		break;
	}
}
int main()
{
	menu();
	return 0;
}
