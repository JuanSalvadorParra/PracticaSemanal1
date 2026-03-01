//
// Created by pipro on 1/3/2026.
//

#include "Perro.h"
#include <iostream>
using namespace std;

void Perro::descripcion() {
    cout << "Soy un perro" << endl;
}

void Perro::sonido() {
    cout << "*Ladridos*" << endl;
}

Perro::~Perro() {
    cout << "Perro destroyed" << endl;
}
