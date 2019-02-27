#include <stdio.h>
int main () {
int nota;
printf("Dime la nota obtenida:\n");
scanf("%i",&nota);
switch (nota){
case 5:
case 6:
printf("Aprobado\n");
break;
case 7:
case 8:
printf("Notable\n");
break;
case 9:
case 10:
printf("Sobresaliente\n");
break;
default:
printf("Suspenso\n");
break;
 }
return 0;
}
