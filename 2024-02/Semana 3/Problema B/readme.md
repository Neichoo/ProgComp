Solución y análisis:
Se recibe un número en formato de string, luego se obtiene el último dígito, si es que el número tiene más de un dígito, entonces también se obtiene el penúltimo, luego si es que el penúltimo es 9, y el último es mayor a 5, entonces se le suma 1 al número y se le añade un 0, esto para manejar cuando se trabaja con un 9. Para los otros casos se trabaja de manera similar y finalmente se imprime el número aproximado.

Analizando la complejidad temporal, se tienen operaciones y condicionales pertenecientes a O(1), por lo que la complejidad temporal pertenece a O(1).

Para analizar la complejidad espacial, se puede ver que la complejidad pertenece a O(n), siendo n el número de dígitos que tiene el número.
