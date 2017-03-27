/*7-) El precio para un vuelo es de $880 en clase turista y se aplica un incremento del 30% en primera clase.
Se conoce la cantidad de pasajes de clase turista y de primera clase. Obtener la recaudación del vuelo.*/
#include <stdio.h>
#include <stdlib.h>

int main(){

int cantpct, cantppc, precioct, preciopc, recct, recpc, total;

printf("\n*El precio del vuelo en clase turista es de $880*");
printf("\n*Se aplica un incremento del 30 porciento en primera clase*");

printf("\n\nIngrese la cantidad de pasajes de clase turista: ");
scanf("%d", &cantpct);

printf("\nIngrese la cantidad de pasajes de primera clase: ");
scanf("%d", &cantppc);

precioct = 880;

recct = precioct*cantpct;

preciopc = precioct*1.3; //1144

recpc = preciopc*cantppc;

total = recct+recpc;

printf("\nLa recaudacion del vuelo en clase turista es de: $%d", recct);
printf("\nLa recaudacion del vuelo en primera clase es de: $%d\n", recpc);
printf("\nEl total entre los dos vuelos es de: $%d", total);

getch();

}
