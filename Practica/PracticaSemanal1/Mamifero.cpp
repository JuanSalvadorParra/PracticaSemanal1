//
// Created by pipro on 1/3/2026.
//

#include "Mamifero.h"
#include <iostream>
using namespace std;

void Mamifero::descripcion() {
    cout << "Soy un mamifero" << endl;
}

void Mamifero::sonido() {
    cout << "*Sonido de mamifero*" << endl;
}

Mamifero::~Mamifero() {
    cout << "Mamifero destroyed" << endl;
}
