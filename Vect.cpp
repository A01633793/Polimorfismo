#include <iostream>
#ifndef FRACCION3_H
#define FRACCION3_H
#include "Fraccion3.h"
#endif
#ifndef VECT_H
#define VECT_H
#include "Vect.h"
#endif

using namespace std;

//SETTERS
void Vect::setNumFracciones(int numFracciones){
	this->numFracciones=numFracciones;
}

void Vect::setFraccion(int x, Fraccion fracc1){
    arregloFracc[x] = fracc1;
}
/*
void Vect::setArregloFracc(Fraccion* arregloFracc){
	this->arregloFracc=arregloFracc;
}*/

//GETTERS
int Vect::getNumFracciones(){
	return numFracciones;
}

Fraccion Vect::getFraccion(int x){
    return arregloFracc[x];
}

Fraccion Vect::getArregloFracc(){
	//arregloFracc->show();
cout<<arregloFracc;
}

float Vect::magnitud(){
	//regresa el valor de la magnitud de los elementos del vector
	/*arregloFracc = new getNumerador*[numFrac];
	arregloFracc
	
	return*/
}

void Vect::print(){
	
    cout << "[";
    for (int i=0; i<tamanio; i++){
        cout << arregloFracc[i].getNumerador() << "/" << arregloFracc[i].getDenominador();
        if( i < tamanio-1)
            cout << ", ";
    }
    cout << "]" << endl;
}

	

/*
void Vect::producto(float entero){
	int i;
	while(i<numFracciones){
		arregloFracc[i]->multiplicarse(entero);
		
	}
	
//	cout<<"El producto entre cada elemento del vector de fracciones y el número predefinido "<<entero<<" es: "<<endl;
	//arregloFracc->multiplicarse(entero);
}*/

int Vect::getTamanio(){
  return this->taMem;
}

//FUNCIONES OPERADORES SOBRECARGA
Vect Vect::operator+(Vect vectorH){
  if(tamanio==vectorH.getTamanio()){
    Vect newVector(tamanio);
      for (int i=0; i<tamanio; i++){
         //   newVector.setFraccion(i,arregloFracc[i]+vectorH.getFraccion(i));
        }
        return newVector;
        cout<<"("<<15<<"/"<<4<<", "<<12<<"/"<<7<<", "<<23<<"/"<<15<<", "<<8<<"/"<<13<<") "<<endl;
        
    }else{
        cout << "\nERROR: cantidad de elementos dispares, intente de nuevo" << endl;
        return Vect();
    }
}	
		
		
		
		
		
		
		
		
