#include "persona.h"

using namespace std;

Persona::Persona()
{
    this->nombre ="Pepito";
    this->rfc ="PEPE564867";
    this->edad = 8;
}

void Persona::muestra_datos()
{
    cout << "Nombre: " << this->nombre << endl;
    cout << "Rfc: " << this->rfc << endl;
    cout << "Edad: " << this->edad << endl;

}
