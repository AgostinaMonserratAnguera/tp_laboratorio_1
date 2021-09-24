#include <stdio.h>
#include <stdlib.h>
#include "Operaciones.h"
#include "Auxiliares.h"

int main(void) {
	setbuf(stdout, NULL);
	int opcion;
	int respuesta;
	float a;
	float b;
	float sumar;
	float restar;
	float dividir;
	float multiplicar;
	int factorialA;
	int factorialB;
	int flagA;
	int flagB;
	int flagTres;

	flagA = 0;
	flagB = 0;
	flagTres = 0;

	do
	  {
	     respuesta=utn_getNumero(&opcion, "\nSeleccione una opcion\n1)Ingrese un operando A\n2)Ingrese un operando B \n3)Operaciones matematicas\n"
	    		 	 	 	 	 "4)Resultados\n5)Salir\n","ERROR. No es una opcion valida",1,5,1);
	        if(respuesta==1)
	        {
	          switch (opcion)
	            {
	                case 1:
	                		printf("Esta dentro de la opcion: Ingrese un operando \n");
	                		scanf("%f", &a);
	                		printf("Operando A= %.2f\n", a);
	                		flagA = 1;

	                    break;
	                case 2:

	                		printf("Esta dentro de la opcion: Ingrese un operando B\n");
	                		scanf("%f", &b);
	                		printf("Operando B= %.2f\n", b);
	                		flagB = 1;

	                    break;
	                case 3:

	                		if(flagA==1 && flagB==1)
	                		{
	                			printf("Esta dentro de la opcion: Operaciones matematicas\n");
	                			printf("A)Calcular la suma (%.2f+%.2f)\n", a, b);
	                			printf("B)Calcular la resta (%.2f-%.2f)\n", a, b);
	                			printf("C)Calcular la division (%.2f/%.2f)\n", a, b);
	                			printf("D)Calcular la multiplicacion (%.2f*%.2f)\n", a, b);
	                			printf("E)Calcular el factorial de %.2f y %.2f)\n", a, b);
	                			sumar = Suma(a,b);
	                			restar = Resta(a,b);
	                			dividir = Division(a,b);
	                			multiplicar = Multiplicacion(a,b);
	                			factorialA = CalcularFactorial(a);
	                			factorialB = CalcularFactorial(b);
	                			flagTres=1;
	                		}
	                		else
	                		{
	                			printf("Debe ingresar ambos operandos\n");
	                		}


	                    break;
	                case 4:
	                	if(flagTres==1)
	                	{
	                		printf("Esta dentro de la opción: Resultados\n");
	                		printf("a)El resultado de A+B es: %.2f\n", sumar);
	                		printf("b)El resultado de A-B es: %.2f\n", restar);
	                		MostrarDivision(b, dividir);
	                		printf("d)El resultado de A*B es: %.2f\n", multiplicar);
	                		MostrarFactorial(a, b, factorialA, factorialB);
	                	}
	                	else
	                	{
	                		printf("No se han podido realizar las operaciones, corrobore el ingreso de operandos\n");
	                	}
	                		break;
	                case 5:
	                    printf("Tarea finalizada\n");
	                    break;
	            }
	        }
	        else
	        {
	            printf("ERROR");
	        }
	    }while (opcion!=5);
}


