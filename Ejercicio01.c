//1-) Se ingresan la cantidad de horas trabajadas y el valor por hora de un empleado. Determinar el sueldo. 
#include <stdio.h>
#include <stdlib.h>

int main(){

int cant, val, sueldo;

printf("\n1)Ingrese la cantidad de horas trabajadas: ");
scanf("%d", &cant);

printf("\n2)Ingrese el valor por hora del empleado: $");
scanf("%d", &val);

sueldo = cant*val;

printf("\nEl sueldo del empleado es de: $%d", sueldo);

getch();

}
