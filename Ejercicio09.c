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
