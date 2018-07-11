#include "Codificar.h"

Codificar::Codificar(){
	
}

Codificar::Codificar(int tam, char *cadena){
//	cout<<tam<<endl;
//	cout<<cadena<<endl;
	mascara = 0;
	int auxToken=0;
	listaDeNumeros = new char *[tam];
	int aux;
	int aux2;
	
	for (int i=0; i<tam; i++){
		listaDeNumeros[i]= new char [10];
	}	
	
	for (int i=0; i<tam; i++){
		mascara=0;
		auxToken=0;
		for (int j=0; j<4; j++){
			mascara=(cadena[j+(i*4)]<<(8*j));
			auxToken|=mascara;
		}
			int k=0;
		aux2=0;
		do{
			aux2++;
			k++;
		}while (auxToken/(int)pow(10, k)!= 0);
		k=0;
		for(int j=0; j<aux2; j++){
			aux=(auxToken%(int)(pow(10, k+1))/(pow(10, k)));
			listaDeNumeros[i][aux2-1-k]=aux+48;
			k++;
		}
		listaDeNumeros[i][aux2]=0;
	}

}
char ** Codificar::getListaDeNumeros(){
	return this->listaDeNumeros;
}
char* Codificar::getNumeros(int pos){
	return this->listaDeNumeros[pos];
}
Codificar::~Codificar()
{
}
