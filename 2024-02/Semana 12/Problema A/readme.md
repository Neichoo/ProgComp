Solución y análisis:
Se reciben un número, el cual representa los números de casos de prueba a realizar, luego se reciben 3 números, el objetivo es imprimir por consola el número que está al medio numéricamente, por lo que se usa una cola de prioridad, se hace un pop, luego un top y de esta manera eliminamos el valor más alto, luego se imprime el valor de al medio.

Analizando la complejidad temporal, se tiene un ciclo while perteneciente a O(t), con t como el número de casos de prueba a realizar, luego se realizan 3 inserciones a la priority queue de tipo max heap, seguido de un pop y un top. La inserción y pop tienen un coste de O(log n), mientras que top es O(1), pero sabemos de antemano que el número de elementos es fijo, son 3 números, por lo que al realizar 3 inserciones y 1 pop, se tiene O(4 log 3). Finalmente la complejidad temporal es perteneciente a O(t(4 log 3)), como “4 log 3” es constante queda como O(t).

La complejidad espacial al ser solamente 3 elementos, se tiene que es O(1).
