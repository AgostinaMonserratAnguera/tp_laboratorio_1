
#include <stdio.h>
#ifndef OPERACIONES_H_
#define OPERACIONES_H_
///
/// @brief Toma los valores de a y b y los suma
/// @fn float Suma (float x, float y);
/// @param x, y (Variables donde se guardan los valores de a y b respectivamente)
/// @return suma
///
float Suma(float x, float y);
///
/// @brief Toma los valores de a y b y los resta
/// @fn float Resta (float x, float y);
/// @param x, y (Variables donde se guardan los valores de a y b respectivamente)
/// @return resta
///
float Resta(float x, float y);
///
/// @brief Toma los valores de a y b y los divide en ese orden: a/b
/// @fn float Division (float x, float y);
/// @param x, y (Variables donde se guardan los valores de a y b respectivamente)
/// @return division
///
float Division(float x, float y);
///
/// @brief Toma los valores de a y b y los multiplica
/// @fn float Multiplicacion (float x, float y);
/// @param x, y (Variables donde se guardan los valores de a y b respectivamente)
/// @return multiplicacion
///
float Multiplicacion(float x, float y);
///
/// @brief Toma el valor de un numero ingresado, lo castea a entero para calcular posteriormente su factorial, solo de la parte entera en caso de ser un numero decimal
/// mediante iteracion for
/// @fn int CalcularFactorial (float numeroIngresado);
/// @param numeroIngresado (Variable donde se guarda el numero que ingresa el usuario)
/// @return factorial
///
int CalcularFactorial (float numeroIngresado);


#endif /* OPERACIONES_H_ */
