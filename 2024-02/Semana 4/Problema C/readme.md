Solución y análisis:
Como el objetivo del problema es reescribir la suma ordenada de menor a mayor, se usa un min heap, para así tener los elementos ordenados de menor a mayor, en el min heap estarán solamente los números, sin los “+”. Entonces el código comienza leyendo el input y guardándolo en un string, luego se itera sobre ese string para poder evaluar cada carácter, si es que es distinto de “+”, entonces se añade al min heap, luego se calcula el tamaño del minheap para poder iterar en un ciclo for, es importante realizarlo antes y no en las condiciones del mismo ciclo for, ya que con cada pop, el tamaño cambiará. Entonces en el ciclo for, se empieza a construir el output, concatenando a una cadena que inicialmente está vacía los números seguidos de un “+”, luego de terminar el for, se realiza un pop back para poder eliminar el último “+”. Y finalmente se imprime el resultado.

Analizando la complejidad temporal de este código, primero se obtiene la entrada en O(n), siendo n el tamaño de la entrada, luego se realiza un ciclo que se ejecuta n veces, realizando push al min heap, la complejidad de este ciclo es de O(n log n). En el segundo ciclo, se itera k veces, siendo k el tamaño del min heap, en cada iteración se revisa el top O(1) y se hace pop O(log k), entonces su complejidad es O(k log k), finalmente la complejidad temporal es de O(n log n + k log k).

Analizando la complejidad espacial, es de O(n), ya que solamente se usa un min heap, el resto es constante.