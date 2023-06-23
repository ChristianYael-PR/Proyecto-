# Proyecto - Equipo 1 - Matemática Discretas.
<h1>Algoritmo de Euclides para determinar Máximo Común Divisior (MCD) y Mínimo Común Múltiplo (mcm).</h1><br>
<p aling=justify>El Algoritmo de Euclides es un método o procedimiento que permite sistematizar la búsqueda del Máximo Común Divisor (MCD) de dos números enteros. También se le llama “método de las divisiones sucesivas”.
Dados los números enteros a y b, denotdado como (a, b), con a ≥ b y b ≠ 0, se desea encontrar los divisores comunes de ambos. Se realiza la división entera entre ellos, de donde se obtienen los enteros q1 y , r1 cociente y residuo, respectivamente. Esto es: a = b (q1) + r1 , (0 ≤ r1 < b). <br>

Como todo divisor de a y de b, divide a r1 (Propiedad 4) y todo divisor de b y de r1 divide a a
(Propiedad 3), la búsqueda se reduce a hallar los divisores comunes de b y de r1.
Se efectúa “una nueva división entera” entre b y r1, en donde se obtienen otros dos enteros q2 y r2,  cociente y residuo, respectivamente:b = r1 (q2) + r2 , (0 ≤ r2 < r1). <br>

Como todo divisor de b y de r1, divide a r2 (Propiedad 4) y todo divisor de r1 y de r2 divide a
b (Propiedad 3), la búsqueda se reduce a hallar los divisores comunes de r1 y de r2.
Así, realizando “divisiones sucesivas”, utilizando el resto como nuevo divisor, se llegará a un residuo
nulo. <br>

a = b (q1) + r1 , (0 ≤ r1 < b) <br>
b = r1 (q2) + r2 , (0 ≤ r2 < r1) <br> 
r1 = r2 (q3) + r3 , (0 ≤ r3 < r2) <br>
. <br>
. <br>
. <br>
rn-1 = rn (qn+1) + 0
(Hasta que ya no haya residuos, y llegue a 0 residuos) (El último divisor es el MCD)<br>

Los divisores comunes de rn y de 0, son los divisores de , rn ya que 0 es divisible por cualquier entero no nulo.
Entonces, el problema de hallar los divisores comunes de los enteros a y b, se reduce al de hallar
los divisores de rn, siendo rn el último residuo no nulo de las divisiones sucesivas.
Resultan así, las conclusiones del Algoritmo de Euclides: <br>
Los divisores comunes de dos números enteros a y b, con a ≥ b y b ≠ 0, son los divisores del último residuo no nulo, de las sucesivas divisiones entre a y b, y los restos. <br>

Para poder determinar el Mínimo Común Múltiplo (mcm), dados los números enteros a y b, denotado como [a, b], se necesita multiplicar los números enteros a y b, y dividirse en el Máximo Común Divisior (MCD). </p> <br>

[a , b] = a * b / (a , b) (MCD) <br>

<h2>Ejemplo con valores de entrada y salidas.<h2><br>

Como entrada el usuario debe ingresar dos números enteros, a y b, que como ejemplo pondremos a = 230 y b = 70. <br>

Como salida se representaran los siguientes puntos con los ejemplos: <br>

El programa mostrará en la consola los siguientes resultados: <br>

- Cálculo del Máximo Común Divisor (MCD):
Se imprimirá una lista de ecuaciones que representan el proceso de cálculo del MCD utilizando el algoritmo de Euclides.
Por ejemplo: 230 = 70 (3) + 20. <br>

-El Máximo Común Divisor (MCD):
Se imprimirá el valor del MCD de los dos números ingresados.
Por ejemplo: El Máximo Común Divisor (MCD) de 230 y 70 es: 10. <br>

- Cálculo del Mínimo Común Múltiplo (mcm):
Se imprimirá una ecuación que representa el cálculo del mcm utilizando la fórmula mencionada.
Por ejemplo: [230 , 70] = (230 * 70) / 10.
Finalmente, se mostrará el valor del mcm.
Por ejemplo: El Mínimo Común Múltiplo (mcm) de 230 y 70 es: 1610. <br>

En resumen, los valores de entrada son los dos números ingresados por el usuario, y los valores de salida son las ecuaciones y los resultados del cálculo del MCD y el mcm. <br>

<h2>Instrucciones de ejecución del código en lenguaje C del Algoritmo de Euclides para determinar Máximo Común Divisior (MCD) y Mínimo Común Múltiplo (mcm).<h2><br>

Para compilar y ejecutas, se tienen que seguir los siguientes pasos: <br>
- Asegurarse de tener un compilador de C instalado en su sistema o de tener una página de internet confiable. <br>

- Descargar el archivo AlgoritmodeEuclides_MCD_mcm.c desde este repositorio. <br>

- Navegar hasta la ubicación donde se descargo el archivo AlgoritmodeEuclides_MCD_mcm.c <br>

- Compila el programa ejecutado el siguiente comando: gcc AlgoritmodeEuclides_MCD_mcm.c -o mcm_cardinalidad, puede abrirse directo del programa compilador en caso de no resultar el codigo. <br> 

- Una vez compilado, ejecute el programa con el siguiente comando: ./AlgoritmodeEuclides_MCD_mcm <br>

- Seguir las instrucciones que aparecen en pantalla para ingresar los dos números enteros, a y b, para poder obtener el resultado del MCD y del mcm. <br>
