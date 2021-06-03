#include "Fraccion3.h"
#include <iostream>

using namespace std;

void Fraccion::setNumerador(float valorNumerador){
	numerador=valorNumerador;
}

void Fraccion::setDenominador(float valorDenominador){
	denominador=valorDenominador;
}

float Fraccion::getNumerador(){
	return numerador;
}

float Fraccion::getDenominador(){
	return denominador;
}

void Fraccion::simplificar(float fraction){
	
	//se convierte el número decimal recibido a fracción
	float aux,a,b;

	a=1;
	b=1;
	aux=1;
	while(!(aux==fraction)){
		aux=a/b;
		if(aux<fraction){
			a++;
		}else if(aux>fraction){
			a--;
			b++;
		}
	}

	int numerador=a;
	int denominador=b;
		
	int nums[6]={2,3,5,7,11,13};
	
	//se cambia el signo de la fracción en caso de ser -/- o el denominador solamente negativo
	if((numerador<0) && (denominador<0)){
		numerador=numerador*(-1);
		denominador=denominador*(-1);
	}  
	else if(numerador>0 && denominador<0){
		numerador=numerador*(-1);
		denominador=denominador*(-1);	
	}
	
		
	for(int i=0;i<6;i++){
		while((numerador%nums[i]==0) && (denominador%nums[i]==0)){
			numerador=numerador/nums[i];
			denominador=denominador/nums[i];
		}
	}
	
//	cout<<"\nFracción simplificada y con signos resueltos: "<<numerador<<"/"<<denominador<<endl;
	float result=numerador*entero;
	cout<<"Resultado operación de escalamiento, multiplicar la fraccion por un entero predefinido de 3: "<<result<<"/"<<denominador;
}

float Fraccion::multiplicarse(int entero){
	/*float n,d;
	
	cout<<"\nIngrese la fracción con la que desea multiplicarse"<<endl;
	cout<<"Ingrese numerador: "<<endl;
	cin>>n;
	cout<<"Ingrese denominador: "<<endl;
	cin>>d;
	
	float nuevoNum=numerador*n;
	float nuevoDen=denominador*d;
	
	
	float result=nuevoNum/nuevoDen;*/
	
	float result=numerador*entero;
	cout<<"Resultado operación: "<<result<<"/"<<denominador;
	
}

float Fraccion::sumarse(){
	float n,d,n0,d0;
	
	n0=numerador;
	d0=denominador;	
	
	cout<<"\nIngrese la fracción con la que desea sumarse"<<endl;
	cout<<"Ingrese numerador: "<<endl;
	cin>>n;
	cout<<"Ingrese denominador: "<<endl;
	cin>>d;
	
	float result=(n0/d0)+(n/d);
	return result;
	
}

void Fraccion::show(){
	cout<<numerador<<"/"<<denominador<<endl;
}
