Solución y análisis:
Se recibe un número “n”, luego se busca construir en base a “n”, un número simétrico rotacionalmente y que sea divisible por 3. Entonces se comienza con condicionales, n módulo 3 igual 0, si esto es verdad entonces se construye un número con n veces el número 1, de otra forma, si es que entra en la condición de n módulo 2 igual 0, se construye el número colocando la mitad de veces 6 y la otra mitad de veces 9, si no cae en los dos casos anteriores, el número construido comienza con 6, luego tiene una cantidad impar de 1 y finalmente un 9.

Analizando la complejidad temporal, se tiene en el peor caso, un ciclo que se ejecuta “n2 veces, perteneciente a O(n), la impresión del número, como está hecho en base a una cadena, se demora O(n). Entonces finalmente la complejidad pertenece a O(n)

Por otra parte, la complejidad espacial en el peor caso es O(n), por las cadenas o1 y o2.
