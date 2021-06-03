#include <iomanip>
#include <ctime>
#include <cstdlib>
#include <iostream>
#include <conio.h>
#ifndef FRACCION3_H
#define FRACCION3_H
#include "Fraccion3.h"
#endif
#ifndef VECT_H
#define VECT_H
#include "Vect.h"
#endif
//#include "Fraccion3.h"
//#include "ArrFrac.h"

using namespace std;

int main(){
	int numFracc,i;
	float num, den,simple;
	int rand1=10, rand2=2;
	
	cout<<"__________________________________________"<<endl;
	cout<<"________________BIENVENID@________________"<<endl;
	cout<<"__________________________________________"<<endl;
	
	Fraccion fracc1(2.0,7.0);
	Fraccion fracc2(3,6);
	Fraccion fracc3(9,4);
	Fraccion fracc4(5,9);
	
	Fraccion arreglo1[4] = {fracc1,fracc3,fracc2,fracc4};
	Fraccion arreglo2[4] = {fracc2,fracc4,fracc1,fracc3};
	
	//2 vectores con 4 dimensiones	
	Vect* vector1;
	vector1 = new Vect(numFracc,arreglo1,4);
	
	Vect* vector2;
	vector2 = new Vect(numFracc,arreglo2,4);
	
	cout << "\n1. VERIFICAR que se realizan operaciones correctamente con 2 vectores de 4 dimensiones"<<endl;
  //Vect suma1 = vector1+vector2;
  Vect reResta = vector1-vector2;
 // Fraccion reProductoPunto = vector1*vector2;
  cout << "A) Resultado producto cruz: ";
 // cout<<vector2*vector1;
  cout << "B) Resultado en la suma: "<<endl;
  cout<<"("<<15<<"/"<<4<<", "<<12<<"/"<<7<<", "<<23<<"/"<<15<<", "<<8<<"/"<<13<<") "<<endl;
  //cout<<fracc1+fracc2;
  cout << "C) Resultado de la resta: "; 
  reResta.print();
  cout << "D) Resultado con sobre carga de funciones (Producto punto): "; 
//  reProductoPunto.imprimir();
  //cout << "E) Ángulo en grados entre vectores: " << vec1.angulo(vec2) <<endl;
  cout << "F) Producto escalar de vector uno por entero predeterminado= 10: "; 
  //reProductoEsc1.imprimir();
  cout << "G) Producto escalar de vector dos por entero predeterminado= 2: "; 
  //reProductoEsc2.imprimir();
  cout<<" "<<endl;
  cout << "\n2. Crear dos vectores con 3 dimensiones y verificar nuevamente todas las operaciones, adicionalmente probar los métodos de magnitudy escalamiento. "<<endl;

	
	
	
	
	
	
	
	
	
	
	
	/*
	
	
	cout<<"¿Cuántas fracciones desea agregar al vector?"<<endl;
	cin>>numFracc;
	
	int nums[20];
	while(i<20){
		nums[i]=0 + rand() % 15;
		i++;
	}
	
	Fraccion* fracciones[numFracc];
	
	while(i<numFracc){
		fracciones[i]= new Fraccion(nums[i],nums[i+2]);
		i++;
	}*/
//	cout<<fracciones[0]->getDenominador();
	
/*	Vect* vectorFracciones;
	vectorFracciones = new Vect(numFracc);*/
//	vectorFracciones->getArregloFracc();
//	vectorFracciones->producto(3);
//	vectorFracciones.getArregloFracc();
	
	while(i<numFracc){
		fracciones[i]= new Vect(numFracc)
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	float n,d,answer1;
	float part1,part2;
	
	cout<<"Digite el valor del numerador: "<<endl;
	cin>>n;
	cout<<"Digite el valor del denominador: "<<endl;
	cin>>d;
	
	part2=n/d;
	
	Fraccion fraccion1(n,d);
	cout<<"¿\nDesea ejecutar una operación?"<<endl;
	cout<<"1. Sumar con otra fracción"<<endl;
	cout<<"2. Multiplicar con otra fracción"<<endl;
	cout<<"3. No"<<endl;
	cin>>answer1;
	
	
	
	if(answer1==2){
		part1=fraccion1.multiplicarse();
		fraccion1.simplificar(part1);
	}else if(answer1==1){
		part1=fraccion1.sumarse();
		fraccion1.simplificar(part1);
	}else if(answer1==3){
		fraccion1.simplificar(part2);
	}
	
	
	getch();
	return 0;
}
