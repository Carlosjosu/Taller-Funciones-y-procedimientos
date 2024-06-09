#include <stdio.h> // Se incluye la libreria

// En esta funcion se calcula cuantos digitos tiene un numero
/*Se comprueba si el numero es negativo
Se inicializa 'i' en 0
Se usa bucle while que divide el numero por 10 en cada iteraccion y aumenta el contador hasta que sea 0
La funcion devuelve 'i' variable a usar como contador*/
int contar_digitos(int n1)
{
    if (n1 < 0)
        n1 = -n1; // Si de casualidad el usuario ingresa un numero negativo lo convertimos a positivo para trabajar con valores absolutos

    // En cada interaccion dividimos 'numero' por 10 y aumentamos 'i', serepetira hasta que numero sea 0
    int i = 0; // Sera el contador de digitos
    while (n1 != 0)
    {
        n1 /= 10;
        i++;
    }
    return i;
}

int main()
{
    // Se definen variables
    int n1; // Guarda el numero ingresado por el usuario

    // Se pide al usuario ingresar un numero
    printf(" Ingrese un numero: ");
    // Se lo guarda en la variable n1
    scanf("%d", &n1);

    int digitos = contar_digitos(n1);

    // Presento en pantalla el numero de digitos ingresado
    printf(" El numero tiene %d digitos. \n", digitos);

    return 0;
}
