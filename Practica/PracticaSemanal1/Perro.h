//
// Created by pipro on 1/3/2026.
//

#ifndef PRACTICASEMANAL1_PERRO_H
#define PRACTICASEMANAL1_PERRO_H
#include <iostream>
#include "Mamifero.h"
using namespace std;

class Perro : public Mamifero {
private:
    //No se si lleva atributos
public:
    void descripcion() override;
    void sonido() override;
    ~Perro() override;
};


#endif //PRACTICASEMANAL1_PERRO_H