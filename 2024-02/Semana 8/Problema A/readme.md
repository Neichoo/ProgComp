Solución y análisis:
Se recibe el número de casos en t, luego se comienza calculando el promedio de agua por contenedor, que es la suma total de agua dividida entre el número de contenedores. Luego, se recorre cada contenedor y se verifica si tiene más o menos agua que el promedio, si tiene más, se acumula la "holgura", que es el exceso de agua, en cambio si tiene menos, se verifica si la holgura acumulada es suficiente para cubrir el déficit. Si en algún momento no se puede cubrir el déficit, el resultado es "NO", si se puede redistribuir el agua correctamente en todos los contenedores, el resultado es "YES".

Analizando la complejidad temporal, se tiene un ciclo O(t) y en cada ciclo se realiza un ciclo O(n), por lo que la complejidad es perteneciente a O(t\*n)

Analizando la complejidad espacial, se tiene que pertenece a O(n) por los contenedores de agua.
