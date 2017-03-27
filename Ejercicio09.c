/*9-) En una producción de plafones se sabe que el 2.5% son defectuosos. Conociendo la cantidad fabricada.
Determinar: 
a-) Cantidad de plafones aceptados.
b-) Cantidad de plafones defectuosos.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

int cantplaf, plafacept, plafdefect;

printf("\nIngrese la cantidad fabricada de plafones: ");
scanf("%d", &cantplaf);

plafdefect = cantplaf*0.025;
plafacept = cantplaf*0.975;

printf("\nLa cantidad de plafones aceptados es de: %d", plafacept);
printf("\nLa cantidad de plafones defectuosos es de: %d", plafdefect);

getch();
}
