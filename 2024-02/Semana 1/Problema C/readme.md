Solución y análisis:
Se reciben dos números por entrada, luego se realiza un ciclo, en donde se recibe cada número y se van guardando en un min heap, se realiza otro ciclo posteriormente, en este ciclo se encuentra toda la lógica para resolver el problema, se busca un valor “x”, tal que sea menor o igual que k elementos.
Primero se verifica si k es mayor que 0, esto porque si k es 0, se tiene que manejar otra lógica diferente, entonces  si k es mayor que 0, se comprueba si el número presente en la posición k+1 es igual que el de la posición k, si esto se cumple, entonces quiere decir que no hay un número “x” tal que sea menor que k elementos. Caso contrario si habrá dicho número y será el mismo que en la posición k.
Si k no es mayor que 0, entonces se revisa el menor valor y si es posible tener un “x” menor.

Analizando la complejidad temporal, se tiene un ciclo que se ejecuta n veces,  en donde se insertan los elementos al min heap, coste perteneciente a O(n log n), luego se tiene otro ciclo, se ejecuta n veces, el peor caso es realizar un pop por iteración, por lo que la complejidad es perteneciente a O(n log n). Finalmente la complejidad es perteneciente a O(2n log n)

Con respecto a la complejidad espacial, se usa un min heap, de tamaño n y el resto de asignación de espacio es constante, por lo que pertenece a O(n).
