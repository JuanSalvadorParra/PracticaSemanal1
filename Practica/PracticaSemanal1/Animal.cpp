//
// Created by pipro on 1/3/2026.
//

#include "Animal.h"
using namespace std;

void Animal::descripcion() {
    cout << "Soy un animal" << endl;
}

void Animal::sonido() {
    cout << "*Sonido General*" << endl;
}

Animal::~Animal() {
    cout << "Animal destroyed" << endl;
}
