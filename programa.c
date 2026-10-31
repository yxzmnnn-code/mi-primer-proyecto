#include <stdio.h>
int main() {
  float nota1, nota2, nota3, promedio;

printf("Ingrese la primera calificacion: ");
scanf("%f", &nota1);
printf("Ingrese la segunda calificacion:");
scanf("%f", &nota2);
printf("Ingrese la tercera calificacion: ");
scanf("%f", &nota3);

suma = nota1 + nota2 + nota3;
  promedio = suma / 3;
printf("la suma total es: %.2f\n", suma);
printf("Su promedio final es: %.2f\n", promedio);  
if (promedio >= 70) {
printf("estado: Aprobado\n");
  } else { 
printf("estado: Reprobado\n");
  }
return 0;
}

