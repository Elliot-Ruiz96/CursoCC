#include "persona.h"

using namespace std;

Persona::Persona(string nombre, string rfc, int edad)
{
    this->nombre = nombre;
    this->rfc = rfc;
    this->edad = edad;
}

Persona::Persona(const Persona &persona)
{
    this->nombre = persona.nombre;
    this->rfc = persona.rfc;
    this->edad = persona.edad;
}

void Persona::muestra_datos()
{
    cout << "Nombre: " << this->nombre << endl;
    cout << "Rfc: " << this->rfc << endl;
    cout << "Edad: " << this->edad << endl;

}

void Persona::muestra_algo(string cadena)
{
    cout << "Mostrando: " << cadena << endl;
}
