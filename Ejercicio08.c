/*8-) Conociendo la cantidad de tarros de pintura que existe en un deposito de una pinturería y sabiendo que el 50% son tarros de 1Lt.,
el 30% tarros de 4Lts. y el resto tarros de 20Lts. Determinar la cantidad de tarros de 1Lt. , 4Lts. Y 20 Lts. */
#include <stdio.h>
#include <stdlib.h>

int main(){

int canttp, t1lt, t4lts, t20lts;

printf("\nIngrese la cantidad de tarros de pintura guardados en el deposito: ");
scanf("%d", &canttp);

 t1lt = canttp*0.5;
 t4lts = canttp*30/100; // t4lts = canttp*0.3; da 299
 t20lts = canttp*0.2;

printf("\nCantidad de tarros de 1 litro: %d", t1lt);
printf("\nCantidad de tarros de 4 litros: %d", t4lts);
printf("\nCantidad de tarros de 20 litros: %d", t20lts);

getch();

}
