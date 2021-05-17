# Fases de la traduccion y Errores
## 1. Preprocesador
***b)*** 

Para generar el archivo hello2.i se utilizó el siguiente comando:
```
gcc -E hello2.c -o hello2.i  
```
*Observaciones:* En esta etapa del preprocesamiento, al crear el archivo hello2.i podemos observar como el preprocesador interpreta el #include y lo que hace es copiar todo el contenido que se encuentra en stdio.h al archivo hello2.i. además podemos observar cómo elimina los comentarios, y en lugar de ellos deja un espacio en blanco 

***d)*** 

*int printf(const char * restrict s, ...);*
En esta función el primer parámetro `const char * restrict s` hace referencia a la cadena de control, es decir, a una cadena de caracteres que contiene información sobre el formato de la salida. 

El `const char *` es un puntero a un carácter constante, este mismo puede cambiar
La palabra `restrict` lo que hace es declarar que los punteros comparten el mismo tipo, en este caso el tipo es "s" (cadena de caracteres).

El siguiente parámetro hace referencia a la lista de argumentos que representan los datos de salida. Por último, esta misma devuelve un el número de caracteres generados o devuelve un negativo si la función es errónea.

***e)***

La única diferencia que se observa es que en el archivo hello3.i se agregan estas 4 líneas nuevas pertenecientes al preprocesador
```
# 1 "hello3.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "hello3.c"
```

## 2. Compilación

***a)***

Para crear el archivo hello3.s utilizamos el siguiente comando:

```
gcc -S hello3.c
```
Una vez compilado y generado el hello3, hay un warning y un error demostrado en la siguiente imagen:

![image](https://user-images.githubusercontent.com/82044738/118501143-cea80b80-b6fe-11eb-8946-8ae33b1f3c1a.png)

***b)***

Una vez arreglado el error y generado nuevamente el archivo hello4.s podemos observar que el warning sigue, pero el programa ya compila.

![image](https://user-images.githubusercontent.com/82044738/118501419-1169e380-b6ff-11eb-9446-5b2c1d82a8de.png)


***c)***

El objetivo del código ensamblador es, primero que nada, llamar a la función main, cargar el numero 42 en el espacio de la próxima variable y, por último,  llamar a la función prontf.

***d)***

Para crear el archivo hello4.o se utilizó el siguiente comando:
```
gcc -c hello4.s -o hello4.o
```









## 3. Vinculación
## 4. Corrección de bug
## 5. Remoción de prototipo
## 6. Compilación separada
