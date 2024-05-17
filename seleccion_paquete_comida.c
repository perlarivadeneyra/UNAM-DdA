/*
Instrucciones:
A partir del estudio de la unidad, elabora un Programa que permita a un 
cliente seleccionar 4 paquetes de comida rápida de tu elección.
El programa deberá de mostrar las opciones al usuario el cual 
podrá seleccionar el que desee de dicho menú. Emplea la estructura Switch para realizarlo.
*/

#include <stdio.h>

void mostrarMenu() {
    // Esta función muestra el menú de opciones al usuario
    // void se utiliza como tipo de retorno de una función, indica que la función no devuelve ningún valor.
    printf("Menú de Comida Rápida:\n");
    printf("Paquete 1: Hamburguesa, papas fritas y refresco\n");
    printf("Paquete 2: Nuggets de pollo, aros de cebolla y refresco\n");
    printf("Paquete 3: Pizza pequeña, ensalada y refresco\n");
    printf("Paquete 4: Banderilla, nachos y refresco\n");
}

void seleccionarPaquete(int opcion) {
    // Esta función utiliza una estructura switch para determinar la opción seleccionada por el usuario.
    switch(opcion) {
        case 1:
            printf("Has seleccionado el Paquete 1: Hamburguesa, Papas Fritas y Refresco.\n");
            break;
        case 2:
            printf("Has seleccionado el Paquete 2: Nuggets de Pollo, Aros de Cebolla y Refresco.\n");
            break;
        case 3:
            printf("Has seleccionado el Paquete 3: Pizza Personal, Ensalada y Refresco.\n");
            break;
        case 4:
            printf("Has seleccionado el Paquete 4: Hot Dog, Nachos y Refresco.\n");
            break;
        default:
            printf("Opción no válida. Por favor selecciona una opción del 1 al 4.\n");
            break;
    }
}

int main() {
    int opcion;

    // Mostrar el menú de opciones al usuario
    mostrarMenu();

    // Solicitar al usuario que seleccione una opción.
    printf("Selecciona el número del paquete que deseas: ");
    scanf("%d", &opcion);

    // Llamar a la función para mostrar el paquete seleccionado
    seleccionarPaquete(opcion);

    return 0;
}

/*
Bibliografía: 
1. Code With C. (n.d.). Understanding Void Type In C Programming. Recuperado el 17 de mayo de 2024, de https://www.codewithc.com

2. C Programming Simple Steps. (n.d.). What is void in C. Recuperado el 17 de mayo de 2024, de https://www.c-programming-simple-steps.com

3. Gyata. (n.d.). Understanding the Void Keyword in C Programming. Recuperado el 17 de mayo de 2024, de https://www.gyata.ai

4. FreeCodeCamp. (n.d.). Data Types in C - Integer, Floating Point, and Void Explained. Recuperado el 17 de mayo de 2024, de https://www.freecodecamp.org

5. Facultad de Contaduría y Administración (2022). Apunte digital. UNAM.
*/
