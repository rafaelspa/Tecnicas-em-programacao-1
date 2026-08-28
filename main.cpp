#include <iostream>

using namespace std;

// Declaração e implementação da classe Poligono.

class Poligono {

protected:

     int numero_lados;

public:

     int getNumeroLados() const;

};

// Declaração e implementação da classe Retangulo.
class Retangulo: protected Poligono {

protected:
    int base, altura;
    int const N_LADOS = 4;

public:
    int getNumeroLados() const;
    Retangulo(float, float);
    float calcularArea();
    float calcularPerimetro();

};

Retangulo::Retangulo(float base, float altura){
    this->base = base;
    this->altura = altura;
    this->numero_lados = N_LADOS;
}

int Retangulo::getNumeroLados() const {
    return this->numero_lados;
}

float Retangulo::calcularArea() {
    return this->base * this->altura;
}

float Retangulo::calcularPerimetro() {
    return 2 * base + 2 * altura;
}

// Implementação de método main.

int main() {

     float base, altura;

     cin >> base;

     cin >> altura;

     Retangulo retangulo(base, altura);

     cout << retangulo.getNumeroLados();

     cout << retangulo.calcularArea();

     cout << retangulo.calcularPerimetro();

     return 0;

}
