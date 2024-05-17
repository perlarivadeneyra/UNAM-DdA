#include <stdio.h>

int main() {
    int n, suma = 0;

    // Solicitar al usuario que ingrese un número entero positivo
    printf("Ingresa un número entero positivo: ");
    scanf("%d", &n);

    // Verificar si el número ingresado es positivo
    if (n <= 0) {
        printf("El número debe ser un entero positivo.\n");
        return 1; // Terminar el programa si el número no es positivo
    }

    // Calcular y mostrar la suma de los primeros "n" números pares
    for (int i = 1; i <= n; i++) {
        int numero_par = 2 * i;
        suma += numero_par;
        printf("Para n = %d, Suma = %d\n", i, suma);
    }

    return 0;
}
