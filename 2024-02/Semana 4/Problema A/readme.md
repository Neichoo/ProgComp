Solución y análisis:
Se recibe el largo de la entrada en n, luego se realiza un ciclo para recibir cada carácter, como las únicas dos palabras que se pueden formar son “zero” y “one”, que están aseguradas de estar presentes de manera entera, entonces al momento de recibir cada carácter se le suma 1 al contador de z si es que el carácter es z o se le suma 1 al contador de n si es que el carácter es n. Entonces luego como se pide el número más grande en binario, se realiza un ciclo que se ejecuta la cantidad de veces que está presente n en la entrada imprimiendo unos, luego otro ciclo que se ejecuta la cantidad de veces que esté presente z en la entrada imprimiendo ceros.

Analizando la complejidad temporal, se lee en un ciclo for n carácteres, esto es perteneciente a O(n), más tarde se realiza un bucle O(m) y otro O(z), siendo m la cantidad de “n” presente en la entrada y z la cantidad de “z” presentes en la entrada, entonces la complejidad final es perteneciente a O(n+m+z).

Analizando la complejidad espacial, se usa solo espacio constante, por lo que la complejidad espacial es O(1). 
