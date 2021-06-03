#include "Arrfrac.h"
#include <iostream>
using namespace std;

//Constructor sin argumentos
Arrfrac::Arrfrac(){
    arr = new Fraccion[1];
    size = 1;
    sizeMem = 1;
}

//Constructor con tamaño especifico
Arrfrac::Arrfrac(int s){
    size = s;
    arr = new Fraccion[s];
    sizeMem = s;
}

//Constructor con arreglo especifico
Arrfrac::Arrfrac(int s, Fraccion * arrf){
    arr = arrf;
    size = s;
    sizeMem = s;
}

//Obtener tamaño del arreglo
int Arrfrac::getSize(){
    return size;
}

//Obtener Fraccion por indice
Fraccion Arrfrac::getFraccion(int i){
    return arr[i];
}

//Cambiar una fraccion por indice
void Arrfrac::setFraccion(int i, Fraccion f){
    arr[i] = f;
}

//Suma de fracciones (no modifica el objeto actual)
Arrfrac Arrfrac::suma(Arrfrac inaArrfrac){ 
    // Si los tamaños de los arreglos coinciden
    if(size == inaArrfrac.getSize()){
        Arrfrac newArrfrac(size);
        for (int i=0; i<size; i++){
            //En la nueva fraccion estable el resultado de la suma entre las 2 fracciones con el mismo indice
            newArrfrac.setFraccion(i, arr[i].suma(inaArrfrac.getFraccion(i)));  
        }
        return newArrfrac;
    }else{
        cout << "Los arreglos no tienen el mismo numero de elemetos" << endl;
        return Arrfrac();
    }
}

//Multiplicacion de fracciones (no modifica el objeto actual)
Arrfrac Arrfrac::multiplicacion(Arrfrac inArrfrac){ 
    // Si los tamaños de los arreglos coinciden
    if(size == inArrfrac.getSize()){
        Arrfrac newArrfrac(size);
        for (int i=0; i<size; i++){
            //En la nueva fraccion estable el resultado de la multiplicacion entre las 2 fracciones con el mismo indice
            newArrfrac.setFraccion(i, arr[i].multiplicacion(inArrfrac.getFraccion(i)));  
        }
        return newArrfrac;
    }else{
        cout << "Los arreglos no tienen el mismo numero de elemetos" << endl;
        return Arrfrac();
    }
}

//Suma de vectores, en caso de no ser igual el mismo numero de elementos no podra ser realizada.
 ArrFrac ArrFrac::operator + (Vect const &f2){
  if (sizes == f2.sizes){
  Vect nueevoVector(sizes);
  for (int i=0; i<sizes; i++){

    nueevoVector.arr[i]=arr[i]+f2.arr[i];
  }
  return nueevoVector;
  }
  else
      cout<<"Los vectores no tienen el mismo numero elemetos" << endl;
  return Vect();
 }

ArrFrac ArrFrac::operator - (Vect const &f2){
  if (sizes == f2.sizes){
  Vect nueevoVector(sizes);
  for (int i=0; i<sizes; i++){
 
    nueevoVector.arr[i]=arr[i]-f2.arr[i];
  }
  return nueevoVector;
  }
  else
      cout<<"Los vectores no tienen el mismo numero elemetos" << endl;
  return Vect();
    }

void Arrfrac::agregarFraccion(Fraccion f){
    // Se duplica el tamaño de la memoria para evitar trasladar arreglos de elementos cada que se agrega una fraccion
    if(size+1 > sizeMem){
        //Se crea un nuevo arreglo de fracciones con el doble de memoria
        Fraccion * newArr = new Fraccion[size*2];
        //Se copia el arreglo en el nuevo arreglo
        for (int i=0; i<size; i++){
            newArr[i] = arr[i];
        }
        newArr[size+1] = f;
        arr = newArr;
        sizeMem = size*2;
        size = size+1;
    }else{
        //Si hay suficiente memoria reservado, entonces, simplemente agregalo
        arr[size+1] = f;
        size++;
    }
}
void Arrfrac::eliminarFraccion(){ //ultimo elemento
    arr[size].setNumerador(0);
    arr[size].setDenominador(1);
    size--;
} 
void Arrfrac::imprimir(bool showSize){
    if(showSize)
        cout << "size: " << size << ", sizeMem: " << sizeMem << " --- "; 
    cout << "[";
    int i;
    for (i=0; i<size; i++){
        cout << arr[i].getNumerador() << "/" << arr[i].getDenominador();
        if( i < size-1)
            cout << ", ";
    }
    cout << "]" << endl;    
} 
