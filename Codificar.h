#ifndef CODIFICAR_H
#define CODIFICAR_H
#include <vector>
#include <math.h>
#include <cstring>
#include <iostream>

using namespace std;

class Codificar
{
	unsigned int mascara;
	char ** listaDeNumeros;
	
	public:
		Codificar();
		Codificar(int, char*);
		~Codificar();
		char** getListaDeNumeros();
		char* getNumeros(int);
	protected:
};

#endif
