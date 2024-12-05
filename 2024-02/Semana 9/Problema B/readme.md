Solución y análisis:
Se recibe el número de casos de prueba en n, luego se realiza un ciclo para recibir cada caso de prueba, almacenando en cada iteración el caso de prueba en un string, luego si es que la palabra tiene más de 10 carácteres, se realiza una abreviación de la palabra, resultando en la primera letra seguida de cuantos carácteres hay entre medio y finalmente la última letra. Luego se imprime la frase, en el caso que tenga menos de 10 carácteres, se queda como está.

Analizando la complejidad temporal, se tiene el ciclo de los casos de prueba perteneciente a O(n), luego se lee cada palabra dentro, entonces si definimos m como la longitud de la palabra, se tiene una complejidad perteneciente a O(n\*m).

Analizando la complejidad espacial, se ve que se guardan las palabras, por lo que pertenece a O(m).
