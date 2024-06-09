#include <stdio.h> //Se incluye la libreria

// Calcular el n-ésimo número triangular por for ya que me permite en una sola dar las condiciones
// Y asi poder interactuar mejor con el programa y mis variables no esten desparramadas por ahi
int calcular_triangular(int n1)
{

    int trian = 0; // Guarda el n-simo numero triangular

    // Mensaje que imprimira la serie
    printf(" La serie es: ");

    /*Itera desde 1 hasta n
    en cad iteraccion se agrega ekl valor de 'i' a 'triangular', acumulando la suna de los numeros
    Se imprime el valor de 'i' como parte de la serie
    si 'i' no es el ultimo numero de la serie se imprime un signo mas indicando que el
    siguiente digito se sumara*/
    for (int i = 1; i <= n1; i++)
    {
        trian += i;
        printf("%d", i);
        if (i < n1)
        {
            printf(" + ");
        }
    }
    return trian;
}

int main()
{

    // Se definen variables
    int n1; // Almacena o guarda el valor que ingresa el usuario

    // Se pide que el usario ingrese un valor
    printf(" Ingrese el valor del rango a calcular: ");
    // Se guarda en la variable 'n1'
    scanf("%d", &n1);

    int resultado = calcular_triangular(n1);

    // Se imprime el resultado del numero triangular
    printf(" \n El %d-esimo numero triangular es %d.\n", n1, resultado);

    return 0;
}