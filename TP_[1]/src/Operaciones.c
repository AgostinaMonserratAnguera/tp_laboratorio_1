#include "Operaciones.h"
float Suma(float x, float y)
{
	float suma;
	suma = x+y;
	return suma;
}
float Resta(float x, float y)
{
	float resta;
	resta = x-y;
	return resta;
}
float Division(float x, float y)
{
    float division;
    division = x/y;
    return division;
}
float Multiplicacion(float x, float y)
{
	float multiplicacion;
	multiplicacion = x*y;
	return multiplicacion;
}
int CalcularFactorial (float numeroIngresado)
{
	numeroIngresado = (int)numeroIngresado;
	int factorial=1;
		for(int i=numeroIngresado;i>0;i--)
		{
			factorial=factorial*i;
		}
		return factorial;

}

