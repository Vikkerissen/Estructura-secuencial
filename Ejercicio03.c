#include <stdio.h>
#include <stdlib.h>

int main(){

int num1, num2, sum, prom;

printf("\n1)Ingrese la nota de la primer parcial: ");
scanf("%d", &num1);

printf("\n2)Ingrese la nota del segundo parcial: ");
scanf("%d", &num2);

sum = num1+num2;
prom = sum/2;

printf("\nEl promedio del alumno es de: %d", prom);

getch();
}
