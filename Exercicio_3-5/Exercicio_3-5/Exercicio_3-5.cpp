// Exercicio_3-5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Portuguese");
	int numero;

	cout << "Insira um n�mero: ";
	cin >> numero;

	if (numero % 2 == 0) {
		for (int contador = 0; contador < numero; contador = contador + 2) {
			cout << contador << "  ";
		}
	}
	else {
		for (int contador = 1; contador < numero; contador = contador + 2) {
			cout << contador << "  ";
		}
	}
}

