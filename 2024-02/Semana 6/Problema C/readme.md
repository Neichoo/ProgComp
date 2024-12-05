Solución y análisis:
Se recibe el número de números “n” que se encuentran presentes en el juego, luego se realiza un ciclo recibiendo cada número y añadiendolo a un max heap y a un min heap a la vez. Luego se realiza otro ciclo haciendo pop, hasta la mitad del tamaño de “n”, finalmente se le hace top a cualquier heap y se imprime.

Analizando la complejidad temporal, se tiene el primer ciclo que se ejecuta n veces, donde se realizan 2 inserciones, cada una de O(log n), luego en el segundo ciclo se ejecuta n/2 veces, donde se realizan 2 pops, cada uno de O(log n). Por lo que finalmente la complejidad pertenece a O(n log n).

Analizando la complejidad espacial, se tienen 2 heaps, O(n) cada uno y el resto es constante, por lo que la complejidad pertenece a O(n).
