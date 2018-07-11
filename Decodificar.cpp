#include "Decodificar.h"

Decodificar::Decodificar(){
	
}
Decodificar::Decodificar(char** listaDeNumeros, int tam){
	int auxTam=0;
	unsigned int intNumero;
	int auxFraseNum=0;
	mascara = 255;
	intNumero = atoi(listaDeNumeros[tam-1]);
	for(int i=0; i<4; i++){
		auxFraseNum = (intNumero&mascara)>>(8*i);
		mascara = mascara<<(8);
		if(auxFraseNum!=0) auxTam++;
	}
	auxTam += ((tam-1)*4);
	fraseOculta = new char[auxTam];
	for(int i=0; i<tam; i++){
		mascara = 255;
		intNumero = atoi(listaDeNumeros[i]);
		for(int j=0; j<4;j++){
			auxFraseNum = (intNumero&mascara)>>(8*j);
			mascara = mascara<<8;
			fraseOculta[(i*4)+j] = auxFraseNum;
			fraseOculta[(i*4)+j+1] = 0;
		}
	}
}
char *Decodificar::getFraseOculta(){
	return this->fraseOculta;
}
Decodificar::~Decodificar(){
}
