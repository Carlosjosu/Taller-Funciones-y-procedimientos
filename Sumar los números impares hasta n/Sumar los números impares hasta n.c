#include <stdio.h> //Se incluye la libreria
// Calcula la suma de los numeros impares

/*El bucle se ejecuta desde 'i = 1' hasta 'i' es mayor que 'n1'
Dentro del bucle while verificamos si es impar
Si 'i' es impar se lo suma a la variable 'suma' y se imprime en pantalla
Se añade un signo '+' antes de imprimir el numero impar, excepto para el pñrimer numero
se retorna la suma*/
int suma_impares(int n1)
{
    int suma = 0; // Guarda el resultado de la suma de los numeros impares
    int i = 1;    // Inicializacion de while

    while (i <= n1)
    {
        if (i % 2 != 0)
        {
            suma += i;
            if (i != 1)
            {
                printf(" + ");
            }
            printf("%d", i);
        }
        i++;
    }
    return suma;
}

int main()
{

    // Se definen variables
    int n1; // Guarda el numero hasta el cual se sumaran los numeros impares

    // Se pide al usuario ingresarar un valor para definir un rango a calcular
    printf(" Ingrese un numero para calcular los impares dentro de ese rango: ");

    // Se guarda en la variable n1
    scanf("%d", &n1);

    // Llamada a la funcion
    int resultado = suma_impares(n1);

    // Imprime en pantalla el ressultado de la suma
    printf(" = %d\n", resultado);

    return 0;
}