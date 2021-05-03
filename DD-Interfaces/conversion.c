/*
Alumno: GOMEZ TOMAS LEONEL
Curso: K2051
Materia: SySL
Fecha: 03/05/2021
*/

#include "conversion.h"

double Celsius (double f)
{
    return (5.0/9.0)*(f-32);
}
double Farenheit (double f)
{
    return f * (9.0/5.0) + 32;
}