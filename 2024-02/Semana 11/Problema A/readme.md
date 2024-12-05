Solución y análisis:
Se definen 4 vectores con las posibles variaciones de input que son aceptables, fueron previamente calculadas para ahorrar tiempo, entonces el programa recibe los casos correspondientes que se ejecutarán, luego comienza un ciclo recibiendo cada caso de prueba, guardado en un string, entonces se revisa la primera letra del string y luego se compara con las previamente conocidas, luego si es que entra en un if, se ve si es que la palabra se encuentra en el vector previamente calculado correspondiente a esa letra, si es que está se imprime “YES”, de otra manera se imprime “NO”.

Analizando la complejidad temporal, se itera por el número de casos “t”, la búsqueda en los vectores es lineal, ya que cada vector tiene 24 elementos, por lo que la complejidad temporal pertenece a O(t).

Analizando la complejidad espacial, se tienen vectores usando tamaño constante, se guarda una entrada de tamaño n en un string, por lo que la complejidad pertenece a O(n).
