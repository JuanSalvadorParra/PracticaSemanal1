#include <iostream>
#include "Perro.h"
using namespace std;

int main() {

    ////////////////////////////////////////////// ACTIVIDAD 1 ////////////////////////////////////////////////

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


    cout << " -> Fin actividad 1 <- " << endl;

    ////////////////////////////////////////////// ACTIVIDAD 2 ////////////////////////////////////////////////

    cout << endl << "Actividad 2: " << endl << endl;

    Animal* animal1 = new Perro();
    try {
        Perro* perro2 = dynamic_cast<Perro*>(animal1);
        perro2->sonido();
    }
        catch (runtime_error& error) {
            cout << "Error de creacion el perro" << endl;
        }

    cout << endl;
    cout << " -> Fin actividad 2 <- " << endl << endl;

    delete perro;
    delete mamifero;
    delete animal;
    delete animal1;

    return 0;
}