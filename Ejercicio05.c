//5-) Se ingresa un nro. entero que representa una fecha con formato (ddmmaa). Se pide transformarlo a un nro. con formato (aammdd).
#include <stdio.h>
#include <stdlib.h>

int main(){

int fecha, fecha2, dd, mm, aa, res;

printf("\nIngrese una fecha con formato DDMMAA: ");
scanf("%d", &fecha);

dd = fecha/10000; //31 y resto 1215
res = fecha%10000;
mm = res/100; //12
aa = res%100; //15
fecha2 = aa*10000+mm*100+dd*1; //Se puede evitar esto así: printf("AAMMDD: %d%d%d", aa, mm, dd);

printf("\nLa fecha en formato AAMMDD es: %d", fecha2);

getch();
}
