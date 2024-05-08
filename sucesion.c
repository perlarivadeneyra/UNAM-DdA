/* 
Alumna: Perla Irasema Rivadeneyra García
Fecha: 7/05/2024
Actividad: Unidad 5, actividad complementaria 2.

Descripción del programa:
El programa devuelve una lista de valores de todos los números enteros
que se calculan hasta el valor dado por el usuario usando la siguiente formula:
𝑛(𝑛 + 1)(2𝑛 + 1)/6
Dónde n son números enteros positivos diferentes de cero.
Por ejemplo, si n=4 el programa devuelve: 1, 5, 14, 30
*/

#include <stdio.h>

// Función que calcula el término de la sucesión según la fórmula proporcionada
int calcular_termino(int n) {
    return (n * (n + 1) * (2 * n + 1)) / 6;
}

int main() {
    int n = 0;

    // Solicitar al usuario el número de términos
    printf("Ingrese el número de términos: ");
    scanf("%d", &n);
    
    // Verificar que el número sea positivo
    if (n < 1) {
        printf("Por favor, ingrese un número mayor que cero.\n");
        return 1;
    }

    // Generar y mostrar la sucesión
    printf("Salida = ");
    for (int i = 1; i <= n; i++) {
        printf("%d", calcular_termino(i));
        if (i < n) {
            printf(", ");
        }
    }
    printf("\n");

    return 0;
}

/*
Bibliografía: 
[1] Facultad de Administración y Contaduría (2022). "Apunte digital de 
Diseño de Algoritmos". Universidad Nacional Autónoma de México.

[2] cppreference (2021). "If statement". Retrieved on May 7 from: https://en.cppreference.com/w/c/language/if
*/
