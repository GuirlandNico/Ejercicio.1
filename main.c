#include <stdio.h>
#include <stdlib.h>

/*   Objetivo:
*   -Realizar un programa que solicite cinco números e imprima por pantalla el
*    promedio, el máximo y el mínimo.  */


int main(void)
{
 int i, promedio, suma, maximo=0, minimo=1000;
int numero=0;
    for (i=0;i<3;i++)
{   printf("Ingrese un numero:%d",numero);
    scanf("%d", &numero);
    suma=suma+numero;

    if (numero<minimo)
        { minimo=numero;}
    if (numero>maximo)
        {maximo=numero;}

}
     printf("La suma de todos los numero es:%d\n",suma);
    promedio=suma/i;

    printf("El Promedio es:%d\n",promedio);
    printf("El numero maximo es:%d\n",maximo);
    printf("El numero minimo es:%d \n",minimo);
}
