Solución y análisis:
Se recibe el número de elementos presentes en el arreglo, almacenado en n, la idea es encontrar el número de formas en las que se puede dividir el arreglo en tres partes, entonces primero se calcula la suma total del arreglo y se verifica si es divisible entre 3, de no ser así, se imprime 0, ya que no se puede dividir en partes iguales. Luego se calcula la suma para cada tercio, se usa una variable de suma acumulada para saber las veces que se alcanza el primer tercio, si la suma acumulada llega a los dos tercios, entonces se incrementa el número de formas. Finalmente se imprime el número de formas posibles.

Analizando la complejidad temporal, se tiene un primer ciclo perteneciente a O(n), luego otro ciclo O(n) calculando la suma total, posteriormente otro ciclo O(n), realizando los cálculos de las formas posibles, por lo que la complejidad final es perteneciente a O(n).

Analizando la complejidad espacial, se tiene un vector O(n) y el resto es constante, por lo que finalmente la complejidad pertenece a O(n).
