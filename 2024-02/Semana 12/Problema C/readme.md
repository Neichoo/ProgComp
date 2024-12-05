Solución y análisis:
Se recibe el número de casos de prueba, almacenado en t, luego se realiza un ciclo, en donde se recibe un número “n” (representando el largo de la cadena) y una cadena “notas”, de manera anidada, se realiza un ciclo, en el cual se insertan en un max heap todas las letras de la cadena “notas”, para tenerlas ordenadas lexicográficamente y así poder calcular fácilmente hasta qué letra llega, en el alfabeto de 26 letras.

Analizando la complejidad temporal, se realiza un ciclo while t veces, perteneciente a O(t), luego dentro de este mismo, se realiza otro ciclo for perteneciente a O(n), en el que se realizan “n” inserciones en la cola de prioridad, perteneciente a O(log n), por lo que ese ciclo for resulta de O(n log n). Finalmente la complejidad temporal pertenece a O(t(n log n)).

Con respecto a la complejidad espacial, se usa un max heap y el resto es constante, por lo que se termina usando espacio O(n).