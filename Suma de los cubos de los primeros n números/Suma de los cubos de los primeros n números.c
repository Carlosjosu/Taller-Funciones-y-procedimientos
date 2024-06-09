#include <stdio.h> //Se incluye la libreria

// Suma de cubos
/*Dentro de la funcion se inicializa la variable suma, almacena el resultado de los cuadrados
Se inicializa un contador 'i' em 1 para ietrar sobre los numeros desde 1
Se imprime el trermino de la serie '1^3'
Se inicia el bucle while qu se ejecutara mientras 'i' sea menor o igual que 'n1'*/
int suma_de_cubos(int n1)
{
    int suma = 0; // Guarda el resultado de la suma de los cubos de los primeros 'n' numeros
    int i = 1;

    if (n1 == 0)
    {
        printf("No hay numeros para sumar en la serie.\n ");
    }
    else
    {
        printf("%d^3", i);
        while (i <= n1)
        {
            suma += i * i * i;
            if (i < n1)
            {
                printf(" + %d^3", i + 1);
            }
            i++;
        }
    }
    return suma;
}

int main()
{
    // Se definen variables
    int n1; // Guarda el numero hasta el cual se sumaran, ingresado por el usuario
    // Se pide al usuario ingresar un valor para calcular dentro de ese rango
    printf(" Ingrese el valor del rango a calcular: ");
    // Se guarda en la variable n1
    scanf("%d", &n1);

    // Llamada a la funcion
    int resultado = suma_de_cubos(n1);

    // Se imprime el resultado
    if (resultado > 0)
    {
        printf(" = %d\n", resultado);
    }

    return 0;
}