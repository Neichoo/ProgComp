Solución y análisis:
Se busca simular el comportamiento de los estudiantes, entonces primero se reciben los casos de prueba en t, luego en cada caso, se recibe el número de estudiantes en n, y luego se recibe en forma de string los alumnos. Luego se comienza a simular el comportamiento, cada vez que ocurre un cambio en el string se ve representado en él y se suma un minuto, así hasta que no hayan más cambios, al final se imprime el último minuto en donde un estudiante se enojó.

Analizando la complejidad temporal, se realiza un ciclo while, de complejidad O(t), con t como el número de casos, dentro de este ciclo, se realiza la simulación de los estudiantes, en el peor caso hipotético, sería que cada estudiante se ponga enojado cada minuto, lo llevaría a una complejidad de O(k^2) siendo k el número de estudiantes, debido a que se tienen dos ciclos anidados, finalmente la complejidad temporal es de O(t(k^2)).

Analizando la complejidad espacial, sería el almacenar la cadena de estudiantes, ya que el resto es constante, quedando perteneciente a O(k).
