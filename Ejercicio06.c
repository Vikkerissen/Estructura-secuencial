/*6-) Conociendo los asistentes a un cine el día miércoles y sabiendo que el precio del cine es de $50 y que por ser miércoles
tiene un descuento del 10%. Calcular la recaudación del cine.*/
#include <stdio.h>
#include <stdlib.h>

int main(){

int asist, desc, rec, total;

printf("\n*Precio de la entrada: $50. Por ser miercoles: descuento del 10 porciento*\n");

printf("\nIngrese la cantidad de asistentes: ");
scanf("%d", &asist);

rec = asist*50; //50000
desc = rec*0.1; //5000
total = rec-desc; //45000

printf("\nLa recaudacion del cine con el descuento del dia miercoles es de: $%d", total);

getch();

}
