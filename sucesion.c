/* Instrucciones: Después de haber dado lectura a la unidad, realiza lo siguiente:
3 pts 1-3/05/2024Elabora un programa en lenguaje C en dónde generes una
sucesión numérica a partir de la siguiente fórmula:
(𝑛(𝑛 + 1)(2𝑛 + 1))/6
Dónde n son números enteros positivos diferentes de cero.
El programa deberá de mostrar a partir de un número
ingresado por el usuario los números generados a partir del 1
hasta el valor ingresado.
Por ejemplo, si n=4 se debe mostrar:
Salida = 1, 5, 14, 30
Emplea las estructuras iterativas que consideres necesarias.*/

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
[1] Facultad de Administración y Contaduría (2022). Apunte digital de 
Diseño de Algoritmos. Universidad Nacional Autónoma de México.s
*/
