Solución y análisis:
Se reciben dos números por entrada, luego se realiza un ciclo, en el que se verifica si el último dígito de un número es cero mediante la operación módulo, de ser así, se divide el número por diez. De otra forma, quiere decir que el último dígito de un número no es cero, y por ende se le resta 1 al número.

Analizando la complejidad temporal, se tiene que el ciclo for se ejecuta k veces, en el que se realizan operaciones O(1), por lo que la complejidad final es perteneciente a O(k).

La complejidad espacial es perteneciente a O(1), puesto que no se utiliza ninguna estructura de datos.