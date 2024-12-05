Solución y análisis:
Se recibe el número de casas “n”, la casa donde vive su objetivo “m” y el dinero del que dispone “k”, luego se guarda en un vector, los valores de cada casa, donde un 0 representa que la casa está ocupada y por ende no está a la venta, se realiza un ciclo buscando las casas hacia la izquierda de su objetivo y se queda con la mínima distancia que pueda acceder en base al dinero que dispone, luego se hace otro ciclo, pero ahora revisando hacia la derecha de su objetivo. Finalmente se queda entre el mínimo de los dos recorridos y se imprime por pantalla la distancia a la que queda.

Analizando la complejidad temporal, se recibe en un ciclo todas las viviendas O(n), luego se recorre a la izquierda del objetivo O(n), luego a la derecha O(n), finalmente la complejidad pertenece a O(n).

Analizando la complejidad espacial, se tiene el vector con los precios de las casas O(n) y las demás variables son constantes, por lo que la complejidad espacial pertenece a O(n).
