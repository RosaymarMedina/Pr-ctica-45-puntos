#ifndef DECODIFICAR_H
#define DECODIFICAR_H
#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

class Decodificar
{
	unsigned int mascara;
	char* fraseOculta;
	public:
		Decodificar();
		Decodificar(char**,int);
		char* getFraseOculta();
		~Decodificar();
	protected:
};

#endif
