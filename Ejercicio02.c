#include <stdio.h>
#include <stdlib.h>

int main(){

int cant, val, sueldo;

val = 30;

printf("\n*El valor por hora del empleado es de $30*\n");

printf("\nIngrese la cantidad de horas trabajadas: ");
scanf("%d", &cant);

sueldo = cant*val;

printf("\nEl sueldo del empleado es de: $%d", sueldo);

getch();
}
