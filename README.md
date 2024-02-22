# Resumen para el Parcial de IP1

## Estructura básica de un programa en C++
``` CPP
#include <bits/stdc++.h>
using namespace std;

int main() {
  // Aquí se debe colocar tu código
  return 0;
}
```
 - TODAS las líneas de código interpretadas por el compilador deben terminar con un punto y coma: **;**
 - Los comentarios `// Comentario` son ignorados por el compilador

## Variables y Tipos de Datos

- **int**: Números enteros (positivos y negativos)
- **float**: Números con coma decimal (positivos y negativos).  La coma decimal se escribe con **.**
- **bool**: Presenta solo dos posibles valores (`true` y `false`)
- **char**: Puede contener un solo caracter. Su valor literal se escribe enter comillas simples: `'a'`
- **string**: Contiene texto. Su valor literal se escribe entre comillas dobles: `"Hola, soy un texto"`

### Declaración de variables
Para declarar una variable debes utilizar la siguiente sintaxis: **tipo de dato**, **nombre de la variable**, **operador de asignación** y **valor a asignar**:
``` CPP
int x = 777;
```
La operación de asignación también se puede realizar de forma separada a la creación de la variable:
``` CPP
int x;
x = 777;
```
Ejemplo declarando un texto y un caracter
``` CPP
string mensaje = "Hola, buenos días";
char letra = 'A'
```

### Reglas de nombres para las variables
 - Los nombres de variables pueden contener letras, números y guiones bajos
 - Los nombres de variables nunca pueden empezar por un número
 - No pueden existir variables con el mismo nombre

## Entrada y Salida por consola

### Salida
Para imprimir un valor en pantalla se utiliza la instrucción `cout` separando cada valor a imprimir por el operador `<<`
``` CPP
cout << "Hola Mundo!";
```
Salida:
```
Hola Mundo!
```

Cuando se listan varios valores para imprimir en la consola, estos resultan pegados
``` CPP
cout << "Hola" << 7 << 5.25;
```
Salida:
```
Hola75.25
```

Para que la consola separe por espacios se debe imprimir este explícitamente, lo mismo ocurre con los saltos de línea (para estos se utiliza la palabra clave `endl`)
``` CPP
cout << "Hola" << ' ' << 7 << ' ' << 5.25;  // Separados por espacios
cout << endl << endl;  // Imprimiendo saltos de línea para acomodar la salida 
cout << "Hola" << endl << 7 << endl << 5.25;  // Separados por saltos de línea
```
Salida:
```
Hola 7 5.25

Hola
7
5.25
```

Cuando se va a impirimir un valor este se puede expresar literalmente, como variable o como una operación
``` CPP
int x = 5;
cout << 7 << ' ' << x << ' ' << x + 7;
// valor literal: 7
// variable: x
// operación: x + 7
```
Salida:
```
7 5 12
```

### Entrada
Para pedirle entrada al usuario se utilizan la instrucción `cin` y el operador `>>`, separando por este la cantidad de variables a llenar con la entrada del usuario
``` CPP
int a, b;
cin >> a >> b;
```
Cuando el programa ejecuta la instrucción `cin` su ejecución se detiene, esperando a que el usuario ingrese el dato y presione **ENTER**, de modo que al analizar la variable en la siguiente línea ya esta tendrá un valor válido,correspondiente al tipo de dato con el que se inicializó

## Operadores

### Aritméticos
Los operadores aritméticos permiten realizar operaciones matemáticas básicas
Se ejecutan en el mismo orden que su equivalente en las operaciones combinadas tradicionales y permiten el uso de paréntesis para realizar agrupaciones y cambiar la prioridad
 - Suma **+**: Este operador cuando se utiliza con variables **strings** permite concatenar (unir) el texto que contienen
 - Resta **-**
 - Multiplicación **\***
 - División **/**
 - Modulación **%**: El resultado de realizar esta operación es el resto de la división entre `a` y `b`
 ``` CPP
 int resto = 6 % 4;
 cout << resto;  // 2
 ```
> - Para calcular la potencia se utiliza la función `pow`, siendo
> - **b<sup>a</sup> = c** tal que `int c = pow( b, a )`

> - La función `sqrt` es la encargada de calcular raíces cuadradas, siendo
> - **√a = b** tal que `int b = sqrt( a )`

### Asignación
Asignación **=**: Es el encargado de darle valor a una variable
El operadores de asignación se pueden combinar con los operadores aritméticos para realizar una operación sobre el valor de la misma variable
``` CPP
int x = 7;
// x += 2 es equivalente a utilizar x = x + 2
x += 2;
cout << x;  // 9
```

### Comparación
Estos operadores permiten establecer comparaciones entre los resultados de las expresiones o los valores contenidos en las variables. El resultado de trabajar con estas operaciones es un valor booleano (verdadero o falso) que puede ser interpretado por las estructuras de control condicionales
 - Menor Que **<**
 - Mayor Que **>**
 - Menor Igual Que **<=**
 - Mayor Igual Que **>=**
 - Igual **==**
 - Desigual **!=**

Ej:
``` CPP
bool a = 7 < 8,  // true
  b = 7 == 8;  // false
```

### Booleanos (o lógicos)
Los operadores lógicos permiten trabajar con operadores boolean (verdadero o falso)
 - OR **||**: Es equivalente a una disyunción. La expresión será analizada como verdadera si al menos uno de sus valores lo es
 ``` CPP
 bool a = true || true,  // true
  b = true || false,  // true
  c = false || false;  // false
 ```
 - AND **&&**: Es equivalente a una conjunción. La expresión solo será verdadera si sus dos valores lo son
 ``` CPP
 bool a = true && true,  // true
  b = true && false,  // false
  c = false && false;  // false
 ```
 - NOT **!**: Es equivalente a una negación. La expresión será verdadera si es falsa y falsa si es verdadera
``` CPP
 bool a = !true,  // false
  b = !false;  // true
 ```

## Estructuras de control condicionales
Las estructuras de control condicionales permiten que el programa tome decisiones basadas en el resultado de una expresión booleana (algo que resulte en verdadero o falso, como una comparación)

### if
Si la condición (entre los paréntesis) es verdadera, entocnes se ejecuta el código entre las llaves
``` CPP
int x = 5;
if( x > 1 ) {
  cout << "x es mayor que 1" << endl;  // Salida
}
```

### else
La sentencia `else` solo se puede colocar a continuación de un `if` o un `else if`. El código entre sus llaves se ejecutará solo si la condición del `if` es falsa
``` CPP
int x = 1;
if( x > 1 ) {
  cout << "x es mayor que 1" << endl;
}
else {
  cout << "x es menor o igual a 1" << endl;  // Salida
}
```

### else if
La sentencia `else if` solo se puede colocar a continuación de un `if` u otro `else if`. Su código solo se ejecutará si las expresiones del `if` o los `else if` anteriores son falsas y la suya es verdadera
``` CPP
int x = -1;
if( x > 1 ) {
  cout << "x es mayor que 1" << endl;
}
else if( x == -1 ) {
  cout << "x es exactamente igual a -1" << endl;  // Salida
}
else {
  cout << "x es menor o igual a 1" << endl;
}
```

## Estructuras de control de ciclos
Las estructuras de control de ciclo permiten ejecutar el código varias veces, en dependecia de una condición

### while
El bucle while se ejecutará hasta que su condición sea falsa
``` CPP
// Imprime hola tres veces
int holasRestantes = 3;
while( holasRestantes > 0 ) {  // Solo se ejecuta si la cantidad de holas es mayor que 0
  cout << "Hola" << endl;  // Diciendo hola
  holasRestantes--;  // Disminuyendo la cantidad de holas que quedan por decir
}
```

### for
El `for` permite declarar una variable de control que representará la cantidad de iteraciones (veces que se repite) el bucle. Su estructura es: `for( declaracion; condicion; actualizacion ) { codigo }`
Primero se realizará la `declaracion`, aquí se instanciará la variable de control; luego se verificará si la `condicion` es verdadera, en ese caso, se ejecutará el `codigo`, después del código se ejecuta la etapa de `actualizacion`, en la que se modificará el valor de la variable de control para eventualmente interrumpir la `condicion`
``` CPP
// Ejemplo anterior utilizando for
int holas;
cin >> holas;
for( int i = 0; i < holas; i++ ) {
  cout << "Hola" << endl;
}
```
> Consejo: Utiliza el **for** solamente si conoces la cantidad de veces que deseas repetir la acción, en caso contrario, utiliza **while**