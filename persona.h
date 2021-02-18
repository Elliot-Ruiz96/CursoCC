#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>

using namespace std;

class Persona
{
public:
    Persona(string nombre, string rfc, int edad);
    Persona(const Persona &persona);
    void muestra_datos();
    static void muestra_algo(string cadena);
private:
    string nombre;
    string rfc;
    int edad;
};

#endif // PERSONA_H
