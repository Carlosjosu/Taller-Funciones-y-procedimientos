#include <stdio.h> // Se incluye la libreria

// Contar numeros primos por for Su sintaxis es mejor de entender.
/*Entrada de un numero para comprobar si es primo
Si el numero es menor a 2 retorna a o significa no es primo*/
int es_primo(int n1)
{

    if (n1 < 2)
    {
        return 0;
    }
    for (int j = 2; j * j <= n1; j++)
    {

        if (n1 % j == 0)
        {
            return 0;
        }
    }
    return 1;
}

void contar_e_imprimir_primos(int n1)
{
    int contador = 0; // Para contar los numeros primos

    // Presento los numeros primos
    printf("Los numero primos hasta %d son : ", n1);
    for (int i = 2; i <= n1; i++)
    {
        if (es_primo(i))
        {
            if (contador > 0)
            {
                printf(",  ");
            }

            printf("%d", i);
            contador++; /* Si 'i' es primo incrementa el contador (es_primo = 1)*/
        }
    }
    // le presento al usuario cuanto numeros primos hay en el rango que ingreso
    printf(" \nHay %d numeros primos.", contador);
}

int main()
{

    // Se definen variables
    int n1; // Guarda el valor que ingresda el usuario

    // Se pide al usuario que ingrese un valor para poder calcular en ese rango
    printf("Ingrese el valor del rango a calcular: ");
    // Se guarda en la variable 'n1'
    scanf("%d", &n1);

    // Llamda a la funcion
    contar_e_imprimir_primos(n1);

    return 0;
}