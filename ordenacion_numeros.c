/*
Instrucciones: A partir del estudio de la unidad, elabora un programa que cumpla el 
siguiente objetivo: El programa deberá solicitar al usuario su fecha 
de nacimiento, con base a los datos del usuario el programa deberá 
indicar el signo zodiacal del usuario.
*/
#include <stdio.h>

// Definimos los parámetros
#define N 3
#define MIN 3
#define MAX 15

// Vector ordenado con algoritmo bubble sort
void sort_intarray(int a[], int dim){
    for(int i = 1; i < dim; i++)
        for(int j = i-1; j >= 0; j--)
            if(a[j+1] < a[j])
            {
                int tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
            else
                break;
};

//Ingreso de los valores dados por el usuario
int main(){
    int nums[N];

    printf("Ingrese %d números entre %d y %d (separado por un espacio blanco):\n", N, MIN, MAX);
    for(int i = 0; i < N; i++){
        scanf("%d", &nums[i]);
        // Mensaje de error si el valor no se encuentra en el intervalo
        if(nums[i] < MIN || nums[i] > MAX) {
            printf("Al menos un número ingresado no se encuentra en el intervalo [%d,%d]!\n", MIN, MAX);
            return 1;
        }
    }
    // Aplicamos la función para ordenar los valores dados por el usuario
    sort_intarray(nums, N);
    //Print en pantalla de los 3 valores resultantes
    printf("\nLos números en orden ascendiente son:\n");
    for(int i = 0; i < N; i++)
        printf("%d ", nums[i]);
    printf("\n");

    return 0;
}

/* 
Bibliografía: Facultad de Contaduría y Administración (2022). 
Apunte digital de Diseño de Algoritmos. Universidad Nacional Autónoma 
de México.
*/