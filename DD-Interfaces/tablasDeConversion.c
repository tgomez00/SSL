/*
Alumno: GOMEZ TOMAS LEONEL
Curso: K2051
Materia: SySL
Fecha: 03/05/2021
*/

#include <stdio.h>
#include "conversion.h"

int main(void)
{
    const double LOWER = 0;
    const double UPPER = 300;
    const double STEP = 20;

    const double LOWER2 = 0;
    const double UPPER2 = 300;
    const double STEP2 = 20;
    double grado1;

 // obtengo la tabla de farenheit a celsius
   
    for(grado1=LOWER; grado1<=UPPER; grado1 = grado1 + STEP)
    {
        printf("%3f %6.1f \n" , grado1 , Celsius(grado1));
    } 
    printf("-------------------------------------------------\n");
// obtengo la tabla de celcius a farenheit

    for(grado1=LOWER2; grado1<=UPPER2 ;grado1 = grado1 + STEP2)
    {
        printf("%3f %6.1f \n" , grado1 , Farenheit(grado1));
    } 
}
