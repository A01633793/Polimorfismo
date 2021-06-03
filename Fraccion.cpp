#include "Fraccion.h"
#include <iostream>
using namespace std;

//constructor por default
Fraccion::Fraccion(){
    num= 0;
    denom= 1;
}

Fraccion::Fraccion(int numm, int den){
    if(den == 0)
        den = 1;
    // ambos negativos o unicamente denominador negativo, entonces cambio signo en ambos
    // La expresion completa sería den < 0 && num < 0 || num > 0 && den < 0
    // Sin embargo, tienen en comun que si el denominador es negativo, cambio el signo en ambos 
    if(den < 0 ){ 
        numm = -numm;
        den = -den;
    }
    reduccion(numm,den);
    this->num = numm;
    this->denom = den;
}

void Fraccion::reduccion(int &numm, int &den){
    // Variables auxiliares
    int limit = 0;
    int signo1 = 1;
    int signo2 = 1;
    // Guarda el signo en las variables signoX y deja num y den sin signo.
    // Esto se hace para que las operaciones modulo y limite esten correctas logicamente
    if(numm < 0){
        signo1 = -1;
        numm = numm*signo1;
    }
    if(den < 0){
        signo2 = -1;
        den = den*signo2;
    }
    //aquí se identifica si hay un posible MCD (maximo comun divisor)
    if(numm >= den)
        limit = den; 
    else
        limit = numm;
    int it = 2;
    while(it<=limit){
        if(numm % it == 0 && den % it == 0){
            numm = numm/it;
            den = den/it;
        }else{
            it++;
        }
    }
    // Devolvemos los signos del numerador y denominador (en caso de que exista cambio)
    numm = numm*signo1;
    den = den*signo2;
}

Fraccion Fraccion::suma(Fraccion farg){
    int numm = num * farg.getDenominador() +  denom * farg.getNumerador();
    int den = denom * farg.getDenominador();
    Fraccion fresultado(numm,den);
    return fresultado;
}

Fraccion Fraccion::multiplicacion(Fraccion farg){
    int numm = num * farg.getNumerador();
    int den = denom * farg.getDenominador();
    Fraccion fresultado(numm,den);
    return fresultado;  
}

void Fraccion::imprimir(){
    cout << num << "/" << denom << endl;
}

int Fraccion::getNumerador(){return num;}
int Fraccion::getDenominador(){return denom;}
void Fraccion::setNumerador(int numm){
    this->num = numm;
    }
void Fraccion::setDenominador(int den){denom = den;}
