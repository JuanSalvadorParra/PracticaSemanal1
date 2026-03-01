#include <iostream>
#include "Perro.h"
using namespace std;

int main() {

    ////////////////////////////////////////////// ACTIVIDAD 1 ////////////////////////////////////////////////

    cout << "Actividad 1: " << endl;

    Perro *perro = new Perro(); // Creo un nuevo objeto perro

    Animal* animal = perro;  // Creo un puntero animal y le asigno un perro

    Mamifero* mamifero = perro; // Creo un puntero mamifero y le asigno un perro

    // Uso metodos de de animal desde cada puntero
    cout  << endl << "Puntero animal: " << endl;
    animal->descripcion();
    animal->sonido();

    cout  << endl << "Puntero mamifero: " << endl;
    mamifero->sonido();
    mamifero->descripcion();

    cout << endl;

    cout << " -> Fin actividad 1 <- " << endl; // Fin actividad 1

    ////////////////////////////////////////////// ACTIVIDAD 2 ////////////////////////////////////////////////

    cout << endl << "Actividad 2: " << endl;

    Animal* animal1 = new Perro(); // Creo un puntero animal que apunta a un perro

    Perro* perro2 = dynamic_cast<Perro*>(animal1); // Creo un puntero perro y uso dinamic_cast para comprobar que el puntero animal apunta a un perro

    if (perro2 != nullptr) { // Dependiendo del resultado del dinamic_cast llamo a una funcion exclusiva de perro
        cout << endl << "Downcast exitoso" << endl;
        perro2->babear();
    }
    else
        cout << endl << "Downcast fallido" << endl;

    Mamifero* mamifero1 = new Mamifero();
    Animal* animal2 = mamifero1;

    Perro *perro3 = dynamic_cast<Perro*>(animal2); // Creo un puntero perro y compruebo con dinamic_cast si animal2 apunta a un perro
    // Como animal2 no esta apuntando a un perro devuelve nullptr

    if (perro3 != nullptr) { // Dependiendo del resultado del dinamic_cast llamo a una funcion exclusiva de perro
        cout << endl << "Downcast exitoso" << endl;
        perro3->babear();
    }
    else
        cout << endl << "Downcast fallido" << endl; // En este caso el downcast falla

    cout << endl;
    cout << " -> Fin actividad 2 <- " << endl << endl; // Fin actividad 2

    delete perro;
    delete animal1;
    delete animal2;

    return 0; // Fin del main
}