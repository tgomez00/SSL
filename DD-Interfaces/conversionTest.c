/*
Alumno: GOMEZ TOMAS LEONEL
Curso: K2051
Materia: SySL
Fecha: 03/05/2021
*/

#include "conversion.h"
#include "stdio.h"
#include "assert.h"

int main(void)
{
    //Probamos la funcion celsius con la funcion assert
    assert(Celsius(0)!=50);
    printf("Test 1 correcto\n");
    assert(Celsius(32)==0);
    printf("Test 2 correcto\n");
    assert(Celsius(50)==10);
    printf("Test 3 correcto\n");
    assert(Celsius(70)!=20);
    printf("Test 4 correcto\n");

    //Probamos la funcion farenheit con la funcion assert
    assert(Farenheit(0)==32);
    printf("Test 5 correcto\n");
    assert(Farenheit(32)!=90);
    printf("Test 6 correcto\n");
    assert(Farenheit(50)==122);
    printf("Test 7 correcto\n");
    assert(Farenheit(70)!=150);
    printf("Test 8 correcto\n");

    printf("El programa esta funcionando correctamente\n");
}