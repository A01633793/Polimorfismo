class Fraccion{
private:
    int num;
    int denom;

    
public:
    Fraccion();
    Fraccion(int, int);
    void reduccion(int &,int &);
    Fraccion suma(Fraccion);
    Fraccion multiplicacion(Fraccion);
    void imprimir();
    int getNumerador();
    int getDenominador();
    void setNumerador(int);
    void setDenominador(int);
    
};
