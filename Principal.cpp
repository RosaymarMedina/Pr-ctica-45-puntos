#include "Principal.h"
#include <cstdlib>


Principal::Principal(){
	int numeroInt;
	
	archivoPrueba1.open("PRUEBA.txt", ios::in);
	archivoEnteros1.open("ENTEROS.txt", ios::out);
	int h=0;
	char* aux = new char[10];
	//ofstream // abrir lectura
	//ifstream // abrir escritura
//	strcpy (this->cadena, "Esto es una prueba para el parcial de programacion I de la Unet."); 
	while(!archivoPrueba1.eof()){
		cad.push_back(archivoPrueba1.get());
		h++;
	}
	cadena = new char[h];
	for(int i=0; i<h; i++){
		cadena[i]=cad[i];
		cadena[i+1]=0;
	}
		cout << "Frase: " << cadena;
		if (strlen(cadena)%4==0){
			numeroInt=strlen(cadena)/4;
		}else{
			numeroInt=(strlen(cadena)/4)+1;
		}
	c = new Codificar(numeroInt, cadena);

	cout << endl << "\t\tCodificacion de la frase:" << endl << endl;
	for(int i=0; i<numeroInt; i++){
	archivoEnteros1 << c->getNumeros(i) << endl;
	cout << c->getNumeros(i) << endl;
	}
	cout << "\t\tGuardado en \"Enteros.txt\"." << endl << endl;
	
	archivoPrueba1.close();
	archivoEnteros1.close();
	archivoEnteros2.open("ENTEROS.txt",ios::in);
	
	h=0;
		nMatriz = new char*[numeroInt];
	while(!archivoEnteros2.eof()){
		nCad.push_back(archivoEnteros2.get());
		h++;
	}
	nCadena = new char[h];
	for(int i=0; i<h; i++){
		nCadena[i]=nCad[i];
		nCadena[i+1]=0;
	}
	int a=0;
	int b=0;

	for(int i=0; i<h; i++){
		if(nCadena[i]!=10){
		aux[b]=nCadena[i];
		aux[b+1]=0;
		b++;
		}else{
			if(nCadena[i]==10){
				nMatriz[a] = new char[10];
				strcpy(nMatriz[a], aux);
				strcpy(aux, " ");
				b=0;
				a++;
			}
		}
		
	}
	
	d = new Decodificar(nMatriz,numeroInt);
	cout << "\t\tFrase decodificada: " << endl << endl << d->getFraseOculta();
}



Principal::~Principal(){
}
