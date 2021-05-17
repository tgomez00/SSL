# Fases de la traduccion y Errores
## 1. Preprocesador
***b)*** 

Para generar el archivo hello2.i se utilizó el siguiente comando:
```
gcc -E hello2.c -o hello2.i  
```
*Observaciones:* En esta etapa del preprocesamiento, al crear el archivo hello2.i podemos observar como el preprocesador interpreta el #include y lo que hace es copiar todo el contenido que se encuentra en stdio.h al archivo hello2.i. además podemos observar cómo elimina los comentarios, y en lugar de ellos deja un espacio en blanco 

***d)*** 

`int printf(const char * restrict s, ...);`

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

***a)***

Para realizar la vinculación utilizamos el siguiente comando:

```
gcc -o hello4 hello4.c
```

*Observaciones:* Cuando queremos vincular el hello4.o con la biblioteca estándar salta lo siguiente, no vincula ya que no encuentra el prontf en ningún lado

![image](https://user-images.githubusercontent.com/82044738/118502031-aff64480-b6ff-11eb-8c99-f2ca9affc138.png)

***c)***

Una vez vinculado y creado el ejecutable el resultado es el siguiente:

![image](https://user-images.githubusercontent.com/82044738/118502126-cb614f80-b6ff-11eb-9831-15560c4134b3.png)

*Observaciones:* Como al printf le falta la variable a mostrar, lo que hace en este caso es ingresar a un espacio de memoria random y mostrar lo que contiene.

## 4. Corrección de bug

Una vez corregido, el resultado es el esperado:

![image](https://user-images.githubusercontent.com/82044738/118502958-91447d80-b700-11eb-9bbd-bd79e83d634c.png)


## 5. Remoción de prototipo

***b)***

El programa funciona igual, ya que, se reconoce que printf es una función que pertenece al header stdio.h.


## 6. Compilación separada

***b)***

Nuestro entorno de desarrollo para lograr que el código objeto implementado anteriormente se vuelva ejecutable, lo que realiza es el proceso de enlazar o linkear el objeto con la librería estándar.

Una vez el cogido objeto ha sido linkeado, tenemos un ejecutable que puede ser copiado para su ejecución en memoria por el loader. Otra de las funciones del loader es crear el programa,  la pila de datos, inicializar los registros e iniciar la ejecución del código.

*Observaciones:*  Al compilar hello8.c podemos observar que la función prontf aparece como implícita ya que no tenemos ningún header en donde pueda buscar esta misma.

![image](https://user-images.githubusercontent.com/82044738/118503511-12037980-b701-11eb-9c89-c2ca7c96d1e0.png)

Al tratar de compilar studio.c podemos observar que se reconoce a la función printf y aparece una recomendación para poder agregar el stdio.h

![image](https://user-images.githubusercontent.com/82044738/118503575-20519580-b701-11eb-9d16-c926567b6843.png)

![image](https://user-images.githubusercontent.com/82044738/118503590-234c8600-b701-11eb-9629-7433d9cbbab4.png)

***c)***

Aunque eliminemos o agreguemos argumentos a la función de prontf en hello8.c no va a ocurrir nada, ya que al no incluir un header que contenga el prototipo de la función no podemos reconocer de que tipo es ni que argumentos contiene.

***d)***

La ventaja de incluir el contrato en los clientes y en el proveedor es que podemos forzar a ambas partes a cumplir el contrato. Además, el compilador puede detectar diferentes tipos de errores de invocación (por parte del cliente) y de definición (por parte del proveedor)




