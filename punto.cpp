#include <iostream>
using namespace std;
#define Linea(Lin) cout << "Linea " #Lin << ": "; // funcion auxiliar

class Vz {                                               // L.5
  public: float z;
  void operator()() {                                    // L.7
   cout << "VectorZ (" << z << ")" << endl;
  }
};

class Vector {
  public: float x, y;
  void operator()() {                                    // L.14
    cout << "VectorXY (" << x << ", " << y << ") " << endl;
  }
  bool operator== (const Vector& v) {                    // L.17
    return ((v.x == x) && (v.y == y))? true: false;
  }
  Vector operator+ (const Vector& v) {                   // L.20
    Vector vr;   vr.x = x + v.x;   vr.y = y + v.y;
    return vr;
  }
  friend Vector operator* (const Vector&, float );       // L.24: V . m
  friend Vector operator* (float, const Vector& );       // L.25: m . V
  friend Vz operator* (const Vector&, const Vector&);    // L.26: V ^ V
  friend float operator% (const Vector&, const Vector&); // L.27: V x V
};

Vector operator* (const Vector& v, float m ) {           // V . m
  Vector vr;   vr.x = v.x * m;   vr.y = v.y * m;
  return vr;
}
Vector operator* (float m, const Vector& v ) {           // m . V
  Vector vr;   vr.x = m * v.x;   vr.y = m * v.y;
  return vr;
}
Vz operator* (const Vector& v1, const Vector& v2) {      // V ^ V
  class Vz v;   v.z = v1.x * v2.y - v1.y * v2.x;
  return v;
}
float operator% (const Vector& v1, const Vector& v2) {   // V x V
  return v1.x * v2.x + v1.y * v2.y;
}

void main () {   // =============
  Vector v1 = {2, 3};           // M.1
  Vector v2 = {4, 5};           // M.2
  Vector v3 = v1 + v2;  Linea(3);  v3();
  Vector v4 = 5 * v1;   Linea(4);  v4();
  Vector v5 = v1 * 5;   Linea(5);  v5();
  Vz v6 = v1 * v2;      Linea(6);  v6();
  Vz v7 = v2 * v1;      Linea(7);  v7();
  Linea(8); cout << "Resultado == " << v1 % v2 << endl;
}
