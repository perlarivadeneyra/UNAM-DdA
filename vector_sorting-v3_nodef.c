/*
    Alumna: Perla Irasema Rivadeneyra García
    Fecha: 5/04/2024
    Actividad: Unidad 4, actividad complementaria 1.
    Descripción del programa:
    El programa solicita como input la dimensión "n" de un vector de números enteros "v" y
    sus componentes, después controla si los componentes están ordenados en modo creciente, si esto
    es verdad muestra en output una frase confermando que se encuentran en ese orden,
    en modo contrario el algoritmo los ordena en modo creciente usando el método de la burbuja.

    Limitaciones:
    La dimensión máxima del vector es de 100 componentes. Si la dimensión dada es más grande,
    el programa reporta un warning.
*/

// Incluyo la librería estándar para usar IO y poder usar las funciones scanf y printf
#include <stdio.h>

int main()
{
    unsigned int n = 0;     // Dimensión dado como input
    int v[100];             // Buffer array de dimensión 100 utilizado para almacenar el vector de dimensión n

    // Obtengo n del teclado
    printf("Insertar la dimensión del vector (máximo 100):\n");
    scanf("%d", &n);
    // Controla si n es ilegal (n>100)
    if(n > 100)
    {
        // n es ilegal -> imprimo un mensaje de warning y regreso 0 para conlcuir el programa
        printf("WARNING! La dimensión dada (%d) es mayor del máximo permitido (100)\n", n);
        return 0;
    }

    // Obtengo los elementos del vector
    printf("Insertar los elementos del vector:\n");
    for(int i = 0; i < n; i++)
    {   
        printf("v[%d] == ", i);
        scanf("%d", &v[i]);
    }
    
    int swap_counter = 0;      // Variable utilizada para contar el número de intercambios realizados para ordenar el vector.

    // Vector ordenado con algoritmo bubble sort
    for(int i = 1; i < n; i++)
    { 
        /* 
        Al comienzo del ciclo, estamos seguros de que el vector está ordenado solo hasta i-1 (y por lo tanto, hasta i-1, los elementos con un índice mayor corresponden a elementos más grandes: orden ascendente).

         Para ordenar el vector hasta el índice i debemos comprobar si el nuevo elemento v[i] es mayor o igual que v[i-1]:
          - si v[i] >= v[i-1], entonces ya sabemos que el vector está ordenado hasta i y no tenemos que hacer nada;
          - si v[i] < v[i-1], para mantener el vector ordenado debemos intercambiar v[i] con v[i-1] y comparar el nuevo elemento (que ahora está en i-1) con los otros elementos anteriores (de i-1 y llega a 0; para esto se utiliza el siguiente bucle iterativo)
        */
        for(int j = i-1; j >= 0; j--)
        {   
            // Al inicio del ciclo, el nuevo elemento se encuentra en v[j+1].
            if(v[j+1] < v[j])
            {
                // El nuevo elemento es más pequeño que el del vector en la posición j -> intercambio de los elementos v[j], v[j+1].
                int tmp = v[j];
                v[j] = v[j+1];
                v[j+1] = tmp;

                swap_counter++;
            }
            else
                // El nuevo elemento no es menor que el del vector inicial en la posición j (hemos alcanzado la ordenación hasta i).
                break;
            // Al final del ciclo, si no ha sido interrumpido, el nuevo elemento se encuentra en v[j].
        }
        // A este punto, el vector está ordenado desde 0 hasta i.
    }

    // Compruebo si swap_counter != 0: si es verdadero, significa que el vector dado como entrada no estaba ordenado.
    if(swap_counter)    
    {
        // Imprimo el vector reordenado y el número de operaciones de intercambio realizadas.
        printf("\nLos numeros ordenos en forma creciente son (número di swap realizados = %d):\n", swap_counter);
        for(int i = 0; i < n; i++)
            printf("%d\n", v[i]);
        printf("\n");
    }
    else
        // El vector pasado como entrada ya estaba ordenado.
        printf("\nLos números ya están ordenados en orden creciente.\n");

    
    return 0;
}