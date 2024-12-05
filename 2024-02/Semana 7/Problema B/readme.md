Solución y análisis:
Se recibe la cantidad de casos de prueba en t, luego se entra a un ciclo, en donde en cada iteración se recibe un caso de prueba, almacenado en un string s, luego se realiza un ciclo para ver si es que no hay letras diferentes en el string, en caso de que no hayan, entonces se imprime “NO”, pero en cambio si hay, se sigue con el flujo del código, llegando a otro ciclo, en el que se itera hasta encontrar letras diferentes, intercambiandolas, luego se imprime “YES” y la palabra modificada.

Analizando la complejidad temporal, se tiene un ciclo que se ejecuta “t” veces O(t), luego un ciclo anidado donde se busca si es que hay letras diferentes, si consideramos el tamaño del string como “n”, ese ciclo es O(n), luego se realiza un doble ciclo en el peor caso O(n^2), por lo que finalmente se tiene una complejidad perteneciente a O(t(n^2)).

Analizando la complejidad espacial, se tiene asignación de espacio constante, excepto el string de entrada por lo que la complejidad pertenece a O(n).
