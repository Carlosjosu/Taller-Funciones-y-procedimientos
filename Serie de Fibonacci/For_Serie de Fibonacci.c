#include <stdio.h> // Se incluye las liberias

// Programa que imprime la serie fibonacci

// Esta funcion toma el valor de cn1 el cual es la cantidad de terminos a imprimir de la serie
/* Se inicilizan fib1 y fib2 con los primeros terminos de la serie
Se imporime lo que una breve descripcion de lo que vamos a mnostrar
Luego se usa el bucle for para poder generara los terminos restantes de la serie*/
void fibonacci(int cn1)
{
    // Se declara variablespara la funcion
    int fib1 = 0;
    int fib2 = 1;
    int next;

    printf("Los primeros %d elementos de la serie Fibonacci son: \n", cn1);
    printf("%d, %d", fib1, fib2);

    for (int i = 3; i <= cn1; i++)
    {
        next = fib1 + fib2;
        printf(", %d", next);
        fib1 = fib2;
        fib2 = next;
    }
    printf("\n");
}

int main()
{
    // Definimos una vairable mas
    int n1;
    // Pedimos al usuriario ingresar un valor
    printf("Ingrese la cantidad de elementos a imprimir en la serie fibonacci: ");
    // El mismo que lo guardamos en n1 para hacer los calculos coprrespondientes
    scanf("%d", &n1);
    // Llamamos a la funcion
    fibonacci(n1);

    return 0;
}