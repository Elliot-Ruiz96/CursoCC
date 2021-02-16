#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>

using namespace std;

class Persona
{
public:
    Persona();
    void muestra_datos();
private:
    string nombre;
    string rfc;
    int edad;
};

#endif // PERSONA_H
