#include "Escitala.h"

string Escitala::cifrar(string msg)
{
    int actual = 0;
    int diff = total - msg.length();
    int aux = 0 ;
    string output;//mensaje de salida
    string newText(diff, ' ');
    msg += newText;
    for (int i = 0;i<total;i++)//i da el nro de iteraciones que el tamaño total del mensaje 
    {
        if (actual >= total)
        {
            aux++;
            actual = aux;
        }
        output += msg[actual];//concatenamos la letra del mensaje al output
        actual += columnas; // saltos
    }
    return output;
    
}

string Escitala::descifrar(string msg)
{
    
    int actual = 0;
    int diff = total - msg.length();
    int aux = 0;
    string output;
    string newText(diff, ' ');//string para agregarle 
    msg += newText;
    for (int i = 0; i < total; i++)//i da el nro de iteraciones que el tamaño total del mensaje 
    {
        if (actual >= total)// Si llega o pasa el tamaño del string se cambia posicion
        {
            aux++;
            actual = aux;
        }
        output += msg[actual];
        actual += filas;//saltos
        
    }
    return output;

}

Escitala::Escitala(int filas,int columnas)
{
    this->filas = filas;
    this->columnas = columnas;
    total = filas * columnas;
}

