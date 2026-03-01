//
// Created by pipro on 1/3/2026.
//

#ifndef PRACTICASEMANAL1_ANIMAL_H
#define PRACTICASEMANAL1_ANIMAL_H
#include <iostream>
using namespace std;

class Animal {
private:
    //No se si lleva atributos
public:
    virtual void descripcion();
    virtual void sonido();
    virtual ~Animal();
};

#endif //PRACTICASEMANAL1_ANIMAL_H