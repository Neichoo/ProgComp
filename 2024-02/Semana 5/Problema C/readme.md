Se recibe el largo y el ancho de la entrada, luego se crea una matriz para poder representar la entrada, se realiza un ciclo para guardar cada elemento en la matriz, en su posición correspondiente, luego se recorre el tablero para encontrar los límites del cuadrado negro, posteriormente, utilizando esos límites se calcula el centro del cuadrado negro

Analizando la complejidad temporal, se tiene un doble ciclo, en el que se guardan los elementos en el tablero, perteneciente a O(n\*m), con n como las filas y m como las columnas, luego se tiene otro doble ciclo en el que se calculan los límites del cuadrado negro, también perteneciente a O(n\*m). Entonces la complejidad temporal pertenece a O(n\*m).

Analizando la complejidad espacial, se utiliza una matriz de tamaño nxm, el resto del espacio es constante, por lo que la complejidad espacial pertenece a O(n\*m).
