#include <iostream>
#ifndef FRACCION3_H
#define FRACCION3_H
#include "Fraccion3.h"
#endif

using namespace std;

class Vect{
	private:
		Fraccion * arregloFracc;
		int numFracciones;
		int tamanio;
		int taMem;
		
	public:
		
		//constructor con arreglo definido	
		Vect(int numFrac, Fraccion * arregloFra, int tamano){
			numFracciones=numFrac;
			arregloFracc = arregloFra;
			tamanio= tamano;
			taMem= tamano;
		//	arregloFracc=arregloFrac;			
		}
		
		//constructor sólo con tamaño
		Vect(int tam){
    	tamanio = tam;
    	arregloFracc = new Fraccion[tam];
    	taMem = tam;
		}
		
		//constructor por default
		Vect(){
			//inicializar con algún valor los atributos
			numFracciones=1;
			Fraccion arr;
			tamanio=1;
			taMem=1;
			//arreglo=arr.Fraccion(1,1);
			//arregloFracc=arr;
		}
		
		//setters establecen
		void setNumFracciones(int numFracciones);
		void setArregloFracc(Fraccion arregloFracc);
		void setFraccion(int, Fraccion);
		
		//getters recaban el valor
		int getNumFracciones();
		Fraccion getArregloFracc();
		Fraccion getFraccion(int);
		
		//métodos
		Vect operator + (Vect);
		Vect operator - (Vect);
		Vect operator * (Vect);
		
		float magnitud();
		void print();
		void producto(float entero);
		int getTamanio();
		
		
		
};
