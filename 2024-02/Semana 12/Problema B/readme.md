Solución y análisis:
Se realiza un set con todas las letras admitidas, sin repetirse, de la palabra “codeforces”, luego se recibe el número de casos de prueba, almacenado en la variable t, posteriormente se realiza un ciclo, se recibe un carácter a la vez, luego se comprueba si ese carácter está presente en el set, si es que lo está se imprime “YES”, caso contrario se imprime “NO”.

Analizando la complejidad temporal, se crea un set que toma O(7 log 7), como es constante realmente pertenece a O(1), luego se tiene un ciclo while que se ejecuta t veces, perteneciente a O(t), dentro, se usa find, esto toma O(log 7) para buscar el elemento, también pertenece a O(1) debido a que es constante, finalmente la complejidad temporal es de O(t).

La complejidad espacial es constante, perteneciente a O(1). 
