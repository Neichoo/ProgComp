Solución y análisis:
Se recibe el número de casos de prueba en t, luego se realiza un ciclo para recibir cada caso de prueba, en cada iteración se almacena un palabra en un string, luego se tiene un ciclo anidado recorriendo la palabra, almacenando cuántas veces se repite la letra A y lo mismo para B. Finalmente se imprime la letra que se repite más.

Analizando la complejidad temporal, se tiene el ciclo de los casos de prueba perteneciente a O(t), luego el ciclo anidado, si consideramos n como el tamaño de la palabra, entonces finalmente se tiene una complejidad perteneciente a O(t\*n).

Analizando la complejidad espacial, todo el espacio es constante, menos el de la palabra, por lo que pertenece a O(n).
