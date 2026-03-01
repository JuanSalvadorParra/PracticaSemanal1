//
// Created by pipro on 1/3/2026.
//

#ifndef PRACTICASEMANAL1_MAMIFERO_H
#define PRACTICASEMANAL1_MAMIFERO_H
#include <iostream>
#include "Animal.h"
using namespace std;

class Mamifero : public Animal {
private:
    //No se si lleva atributos
public:
    void descripcion() override;
    void sonido() override;
    ~Mamifero() override;
};



#endif //PRACTICASEMANAL1_MAMIFERO_H