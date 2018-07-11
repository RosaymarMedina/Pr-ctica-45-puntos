#ifndef PRINCIPAL_H
#define PRINCIPAL_H
#include <cstring>
#include "Codificar.h"
#include "Decodificar.h"
#include <fstream>

class Principal{
	vector<char> cad;
	vector<char> nCad;
	char* cadena;
	char* nCadena;
	char**nMatriz;
	Codificar *c;
	Decodificar *d;
	ifstream archivoPrueba1;
	ofstream archivoEnteros1;
	ifstream archivoEnteros2;
	
	public:
		Principal();
		~Principal();
		
	protected:
};

#endif
