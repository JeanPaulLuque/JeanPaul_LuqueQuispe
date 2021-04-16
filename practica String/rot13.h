#pragma once
#pragma once
#include <iostream>
#include <string>
using namespace std;
class Rot13 {
private://        
	string Abc = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int clave = 13;

public:
	string cifrar(string msg);
	string descifrar(string msg);
	Rot13();
};


string Rot13::cifrar(string msg)
{
	for (int i = 0; i < msg.length(); i++)
	{
		for (int j = 0; j < Abc.length(); j++)
		{
			if (msg[i] == Abc[j])
			{
				int letraActual = j;
				int mod = letraActual + clave;
				if (mod > Abc.length()) {
					mod -= Abc.length();
				}
				msg[i] = Abc[mod];
				break;
			}
		}
	}
	return msg;
}
string Rot13::descifrar(string msg)
{
	for (int i = 0; i < msg.length(); i++)
	{
		for (int j = 0; j < Abc.length(); j++)
		{
			if (msg[i] == Abc[j])
			{
				int letraActual = j;
				int mod = letraActual - clave;
				if (mod < 0)
				{
					mod += Abc.length();
				}
				msg[i] = Abc[mod];
				break;
			}
		}
	}
	return msg;
}
Rot13::Rot13() {

}