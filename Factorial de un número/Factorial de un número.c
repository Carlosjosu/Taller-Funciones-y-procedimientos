#include <stdio.h>

long long calcular_factorial(int numero)
{ // La variable 'X' es mi factorial
    long long X = 1;

    // Iteramos desde 1 hasta el numero dado
    /*En cada iteraccio0n loa variable 'X' se multiplica para el valor actual de 'i'
    Finalmente devuelve el resultado en 'x'*/
    for (int i = 1; i <= numero; i++)
    {
        X *= i;
    }

    return X;
}

int main()
{
    int n1;
    // Se solciyta al usuario ingresar un numero que sea entero
    printf("Ingrese un numero entero: ");
    // Despues lo guardamos en la variable 'n1'
    scanf("%d", &n1);

    /* Verifivcamos si el numero ingresado no es negativo
    Si no es se procede con el 'calcular_factorial'
    Finalmente se imprime el resultado del factorial */

    if (n1 >= 0)
    {
        long long resultado = calcular_factorial(n1);

        printf("%d! = ", n1);
        for (int i = n1; i > 0; i--)
        {
            printf("%d", i);
            if (i > 1)
            {
                printf(" * ");
            }
        }

        printf(" = %lld\n", resultado);
    }
    else
    {

        // Esta parte se imprime si el n1 es menor que 0
        printf("El factorial de un numero no puede ser negativo.\n");
    }
    return 0;
}