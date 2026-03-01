#include <iostream>
#include "Perro.h"
using namespace std;

int main() {

    cout << "Actividad 1: " << endl;

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

    cout << "Fin actividad 1 " << endl;

    cout << endl << "Actividad 2: " << endl;

    Animal* animal1 = new Perro();
    try {
        Perro* perro2 = dynamic_cast<Perro*>(animal1);
        perro2->sonido();
    }
        catch (runtime_error& error) {
            cout << "Error de creacion el perro" << endl;
        }

    return 0;
}