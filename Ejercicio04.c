//4-) Se ingresa un numero entero de 3 cifras. Descomponerlo en unidad , decena y centena.
#include <stdio.h>
#include <stdlib.h>

int main(){

int num, res, u, d, c;

printf("\nIngrese un numero entero de 3 cifras: "); //Se prueba con 375
scanf("%d", &num);

c = num/100; //3,75 (el 3 será la centena y el 75 el resto)
res = num%100; // 3,75 (nos quedamos con el resto (75))
d = res/10; // 7,5 (el 7 será la decena, el resto ahora es 5)
u = res%10; // 7,5 (el 5 será la unidad)

printf("\nLa centena es: %d", c);
printf("\nLa decena es: %d", d);
printf("\nLa unidad es: %d", u);


getch();

}
