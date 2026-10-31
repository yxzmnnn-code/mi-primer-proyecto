#include <stdio.h>

int main() {
    // Declaración de variables (con decimales tipo float)
    float nota1, nota2, nota3, suma, promedio;

    // Entrada de datos
    printf("Ingrese la primera calificacion:\n");
    scanf("%f", &nota1);

    printf("Ingrese la segunda calificacion:\n");
    scanf("%f", &nota2);

    printf("Ingrese la tercera calificacion:\n");
    scanf("%f", &nota3);

    // Procesamiento (Cálculos)
    suma = nota1 + nota2 + nota3;
    promedio = suma / 3;

    // Salida del resultado
    printf("El promedio es: %.2f\n", promedio);

    // Opcional: Condicional que tenías en tu documento para aprobar o reprobar
    if (promedio >= 70) {
        printf("Estado: Aprobado\n");
    } else {
        printf("Estado: Reprobado\n");
    }

    return 0;
}
