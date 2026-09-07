#include <string>
#include "../../dominios/dominios.hpp"
#include <iostream>

using namespace std;

void testes_texto () {

    Texto texto = Texto("texto");

    cout << "validar texto \"" + texto.getTexto() + "\": " << texto.validaTexto() << endl;

    texto.setTexto("texto com 30 caracterestexto c");

    cout << "validar texto \"" + texto.getTexto() + "\": " << texto.validaTexto() << endl;

    texto.setTexto("texto com 31 caracterestexto ca");

    cout << "validar texto \"" + texto.getTexto() + "\": " << texto.validaTexto() << endl;

    texto.setTexto("texto com ponto final.");

    cout << "validar texto \"" + texto.getTexto() + "\": " << texto.validaTexto() << endl;

    texto.setTexto("Texto comecando com maiuscula");

    cout << "validar texto \"" + texto.getTexto() + "\": " << texto.validaTexto() << endl;

    texto.setTexto("Texto com maiuscula e ponto.");

    cout << "validar texto \"" + texto.getTexto() + "\": " << texto.validaTexto() << endl;

    texto.setTexto("Texto com pontuacao!");

    cout << "validar texto \"" + texto.getTexto() + "\": " << texto.validaTexto() << endl;

    texto.setTexto("Texto, com pontuacao.");

    cout << "validar texto \"" + texto.getTexto() + "\": " << texto.validaTexto() << endl;

    texto.setTexto("Texto com pontuacao dupla ..");

    cout << "validar texto \"" + texto.getTexto() + "\": " << texto.validaTexto() << endl;
}
