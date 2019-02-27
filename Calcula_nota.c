#include <stdio.h>
int main (){
int nota;
printf("Introduce la calificacion:\n");
scanf("%i",&nota);
if (nota == 5 || nota == 6){
printf("Aprobado.\n");
}
else{ if (nota == 7 || nota == 8){
printf("Notable.\n");
}
else{ if (nota == 9 || nota == 10){
printf("Sobresaliente.\n");
}
else { if (nota == 0 || nota == 1 || nota == 2 || nota == 3 || nota == 4){
printf("Suspenso.\n");
}
else{
printf("Parametro no valido, cerrando el programa.\n");
}
}
}
}
return 0;
}

