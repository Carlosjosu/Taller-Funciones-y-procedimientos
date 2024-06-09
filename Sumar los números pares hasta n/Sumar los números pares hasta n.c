#include <stdio.h> //Se incluye la libreria

// Calcula la suma de los numeros pares

/*El bucle se ejecuta desde 'i = 1' hasta 'i' es mayor que 'n1'
Dentro del bucle while verificamos si es par
Si 'i' es impar se lo suma a la variable 'suma' y se imprime en pantalla
Se añade un signo '+' antes de imprimir el numero impar, excepto para el pñrimer numero
se retorna la suma*/
int suma_pares(int n1)
{
    int suma = 0; // Guarda el resultado de la suma de los numeros impares
    int i = 0;    // Inicializacion de while

    // Se verifica si es par utilizando la condicion if (i % 2 == 0)
    /*Cada vez que encontremos un numero par lo imprimimos pero antes verificamos
    si es el primer numero para 'if (i != 0)' para no imprimir un signo mas
    antes del primer numero
    Se actualiza 'i por cada iteracciopn aumenta 1
    Luego retorna suma ' return suma;'*/
    while (i <= n1)
    {
        if (i % 2 == 0)
        {
            suma += i;
            if (i != 0)
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
    int n1; // Guarda el numero hasta el cual se sumaran los numeros pares

    // Se pide al usuario ingresarar un valor para definir un rango a calcular
    printf(" Ingrese un numero para calcular los pares dentro de ese rango: ");

    // Se guarda en la variable n1
    scanf("%d", &n1);

    // Llamada a la funcion
    int resultado = suma_pares(n1);

    // Imprime en pantalla el ressultado de la suma
    printf(" = %d\n", resultado);

    return 0;
}