/*
Alumna: Perla Rivadeneyra
Unidad 6 Actividad Complementaria 2

Instrucciones: A partir del estudio de la unidad, elabora un programa que 
permita sumar los primeros “n” números pares indicados por el usuario.
El programa deberá permitir al usuario ingresar un número “n” entero 
positivo, a partir de dicho número el programa deberá de ir mostrando 
la suma de los primeros números pares acorde a dicha cifra.
*/

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

/*
Bibliografía:
1. Facultad de Contaduría y Administración (2022). Apunte digital. UNAM.

2. Code With C. (n.d.). Understanding Void Type In C Programming. Recuperado el 17 de mayo de 2024, de https://www.codewithc.com

3. CS Tutorial Point. (n.d.). C Program to Find the Sum of first n even Numbers. Recuperado el 17 de mayo de 2024, de https://www.cstutorialpoint.com

4. Code Vs Color. (n.d.). 3 different C programs to find the sum of first n even natural numbers. Recuperado el 17 de mayo de 2024, de https://www.codevscolor.com

5. Tutorial Gateway. (n.d.). C Program to Print Sum of all Even Numbers from 1 to N. Recuperado el 17 de mayo de 2024, de https://www.tutorialgateway.org
*/
