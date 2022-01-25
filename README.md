# Desafio_Practico
PROBLEMA: EL CÓDIGO DE LA CAJA FUERTE

Ante el temor de olvidarlos, un señor decide registrar de una forma oculta los cuatro números necesarios para abrir su caja fuerte. 

La estrategia que utiliza es la siguiente: tomó un archivo e intercaló 5 asteriscos en el mismo separados entre sí de modo tal que cada número quedara representado por la cantidad de caracteres que separa a un asterisco del siguiente. Por supuesto controló que en el archivo no hubiera asteriscos por delante de los que el puso. Cada vez que se olvida de los números debe emprender un penoso trabajo de abrir el archivo con un editor y contar caracteres. Para simplificar la tarea te pide que le escribas un programa que recupere los cuatro números clave escondidos en la cadena de entrada.

Restricciones y Comentarios:

* Los números clave tienen como máximo 4 cifras. 

* La cadena de entrada tiene como máximo 50 000 caracteres. 

Datos de entrada: Se ingresa una cadena que consta de asteriscos y letras mayúsculas. 

Datos de salida El programa debe generar el archivo CLAVE.OUT, en el directorio actual, conteniendo exactamente 4 líneas. En cada línea va un número clave. El primer número clave en la primera línea y así siguiendo. Se deben escribir en su forma habitual sin ceros superfluos a la izquierda. 

Por ejemplo, si la entrada es: 

(OO*O*OO*OOO*OOOO*OO)  


La salida debe contener:

1

2

3

4

Ya que hay un caracter que separa el primer asterisco del segundo, dos caracteres que separan al segundo del tercero, etc... 
------------------------------------------------------------------------------------------------------------------------------
Lenguaje utilizado: C++
