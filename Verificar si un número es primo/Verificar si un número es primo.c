#include <stdio.h> // Se incluye la libreria

// Se declara la funcion es_primo
/*Toma un entero y verifica si es primo o no
Con la primera condicion en if se comprueba que los numeros menores o iguyales a 1
no son primos
for itera desde 2 hasta n1/2 si cualquier numero es divible en este rango la funcion retorna a 0
Si el bucle se completa sin contar divisores la funcion retorna a 1 indicando que
si es primo */
int es_primo(int n1)
{
    if (n1 <= 1)
    {
        return 0; // No es primo
    }
    for (int i = 2; i <= n1 / 2; i++)
    {
        if (n1 % i == 0)
        {
            return 0; // El numero no es primo
        }
    }

    return 1;
}

int main()
{
    // Se declaran variables
    int n1; // Guarda el numero que ingresa el usuario

    // Se pide al usuario ingresar un numero
    printf("Ingrese un numero: ");
    // Se guarda en la variable n1
    scanf("%d", &n1);

    // llamada a la funcion para verificar si es primo
    if (es_primo(n1))
    {
        printf("%d es primo.\n", n1);
    }
    else
    {
        printf("%d no es primo.\n", n1);
    }

    return 0;
}