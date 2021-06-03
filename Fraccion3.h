#include <iostream>

using namespace std;

class Fraccion{
	private:
		float numerador;
		float denominador;
		int entero;
	
	public:
		
		//constructores
		Fraccion(float numerador, float denominador){
			this->numerador=numerador;
			this->denominador=denominador;
			this->entero=3;	
		}
		
		Fraccion(){
			//inicializar con algún valor los atributos
			numerador=denominador=1;
			entero=3;
		}
		
		//setters establecen
		void setNumerador(float valorNumerador);
		void setDenominador(float valorDenominador);
		
		//getters recaban el valor
		float getNumerador();
		float getDenominador();
		
		//métodos
		void simplificar(float fraction);
		float sumarse();
		float multiplicarse(int entero);
		void show();
};
