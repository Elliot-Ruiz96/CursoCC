#include "persona.h"
#include <stdio.h>
#include "Fecha.h"

void c7_ejemplo();
void c7_ejemplo2();

int main()
{
    void c7_ejemplo();
    void c7_ejemplo2();
}

void c7_ejemplo()
{
    Persona *Pepito = new Persona("Pepito", "PEPE65874",8);
    Pepito->muestra_datos();
    delete Pepito;
    Persona Elliot("Elliot","RUSE960823",24);
    Elliot.muestra_datos();
    Persona::muestra_algo("algo");
}

void c7_ejemplo2()
{
    Fecha Fecha(18, 02, 2021);
    Fecha.muestra_fecha();
}
