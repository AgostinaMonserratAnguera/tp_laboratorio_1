
#include <stdio.h>
#ifndef AUXILIARES_H_
#define AUXILIARES_H_
///
/// @brief Pide un numero (una opcion dentro de nuestro menu), lo valida, verifica y devuelve el resultado
/// @fn int utn_getNumero (int*pResultado, char*mensaje, char*mensajeError, int minimo, int maximo, int reintentos);
/// @param pResultado (Puntero que indica el espacio en memoria donde guardar el resultado de la funcion)
/// @param mensaje (El mensaje que muestra las opciones que tienen nuestro menu)
/// @param mensajeError (El mensaje que deseo mostrar cuando hay un error)
/// @param minimo (Valor minimo que toma la funcion, en este caso 1, que corresponde a la opcion 1)
/// @param maximo (Valor maximo que toma la funcion, en este caso 5, que corresponde a la opcion 5)
/// @param reintentos (Cantidad de reintentos que tiene el usuario en caso de error, en este caso 1)
/// @return En caso de exito, retorna 1 (verdadero), en caso de fracaso retorna 0 (falso)
///
int utn_getNumero (int*pResultado, char*mensaje, char*mensajeError, int minimo, int maximo, int reintentos);
///
/// @brief Toma a la variable dividir que es el resultado que se paso de la funcion Division, verifica que sea distinto de 0, lo que representaria error,
/// y lo muestra en ambos casos, si es distinto, muestra el resultado, y si es igual, la leyenda "No es posible dividir por 0"
/// @fn void MostrarDivision(float y, float dividir);
/// @param y (Variable en la que se copia el valor de b)
/// @param dividir (Variable donde se guarda el resultado de la funcion Division)
/// @return En caso de ser distinto de 0, se muestra la variable dividir con un printf, y en caso de ser 0, la leyenda de error
///
void MostrarDivision(float y, float dividir);
///
/// @brief Toma los valores de las variables a, b, factorialA y factorialB, le comunica al usuario que en caso de que las variables a y b tengas decimales, se tomara la parte entera para
/// calcular los respectivos factoriales, y que deben encontrarse dentro de un rango para no sobrecargar el sistema. Luego, verifica que se encuentren dentro de dicho rango con if, y segun el resultado, se muestran los valores de los
/// factoriales o el error
/// @fn void MostrarFactorial(float x, float y, int factorialA, int factorialB);
/// @param x (Variable donde se copia el valor de a)
/// @param y (Variable donde se copia el valor de b)
/// @param factorialA (Variable resultado de la funcion Factorial)
/// @param facotrialB (Variable resultado de la funcion Factorial)
/// @return En caso de que la variable x y la variable y, se encuentren en el rango, se las muestra por separado, y en caso de que no esten en
/// el rango, se muestra un mensaje de error
///
void MostrarFactorial(float x, float y, int factorialA, int factorialB);

#endif /* AUXILIARES_H_ */
