#include <stddef.h>
#include <stdio.h>
#include "Auxiliares.h"
int utn_getNumero (int*pResultado, char*mensaje, char*mensajeError, int minimo, int maximo, int reintentos)
{
    int retorno=0;
    int bufferInt;
    int i;

    if (pResultado!=NULL && mensaje!=NULL && mensajeError!=NULL && minimo<=maximo && reintentos>=0)
    {
        for (i=0; i<reintentos; i++)
        {
            printf("%s", mensaje);
            scanf("%d", &bufferInt);

            if (bufferInt>=minimo && bufferInt<=maximo)
            {
                *pResultado=bufferInt;
                retorno=1;
            }
            else
            {
                printf("%s", mensajeError);
            }
        }
    }
    return retorno;
}


void MostrarDivision(float y, float dividir)
{
	if(y!=0)
	{
		printf("c)El resultado de A/B es: %.2f\n", dividir);
	}
	else
	{
		printf("c)No es posible dividir por cero\n");
	}
}
void MostrarFactorial(float x, float y, int factorialA, int factorialB)
{
	x=(int)x;
	y=(int)y;
	printf("En caso de ingresar numeros con decimales, se realizara el factorial de la parte entera, el rango limite para el sistema esta comprendido entre 1 y 7\n");
	if(x>=1 && x<=7)
	{
		printf("e)El factorial de A es: %d\n", factorialA);
	}
	else
	{
		printf("e)No se puede realizar el factorial de %f, ya que no se encuentra dentro del rango limite comprendido entre 1 y 7\n", x);
	}
	if(y>=1 && y<=7)
	{
		printf("e)El factorial de B es: %d\n", factorialB);
	}
	else
	{
		printf("e)No se puede realizar el factorial de %.2f, ya que no se encuentra dentro del rango limite comprendido entre 1 y 7\n", y);
	}

}


