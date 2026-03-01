#include <iostream>
#include "Perro.h"
using namespace std;

int main() {

    Perro *perro = new Perro();

    Animal* animal = perro;

    Mamifero* mamifero= perro;

    cout  << endl << "Puntero animal: " << endl;
    animal->descripcion();
    animal->sonido();

    cout  << endl << "Puntero mamifero: " << endl;
    mamifero->sonido();
    mamifero->descripcion();

    cout << endl;

    delete perro;
    delete mamifero;
    delete animal;

    return 0;
}