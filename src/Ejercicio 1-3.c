/*
 ============================================================================
Ejercicio 1-3: ingresar 3 números y mostrar el número del medio, sólo si existe. En
caso de que no exista también informarlo.
Ejemplo:
1 5 3 el 3 es del medio
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setbuf(stdout, NULL);

	int numUno;
	int numDos;
	int numTres;


	printf("Ingrese un numero:");
	scanf("\n%d", &numUno);

	printf("Ingrese un numero:");
	scanf("\n%d", &numDos);

	printf("Ingrese un numero:");
	scanf("\n%d", &numTres);

	if((numUno>numDos&&numUno<numTres)||(numUno<numDos&&numUno>numTres))
	{
			printf("El numero del medio es %d: ",numUno);
	}
	else
	{
		if((numDos>numUno&&numDos<numTres)||(numDos<numUno&&numDos>numTres))
		{
			printf("El numero del medio es %d: ",numDos);
		}
		else
		{
			if((numTres>numUno&&numTres<numDos)||(numTres<numUno&&numTres>numDos))
			{
				printf("El numero del medio es %d: ",numTres);
			}
			else
			{
				printf("No existe el numero del medio");
		    }

		}

	}


	return 0;
}
