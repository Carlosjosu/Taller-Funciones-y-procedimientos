

#include <stdio.h> // Se incluye la libreria

// Esta funcion que calcula el MCD
/*Se declara un variable 'tpb' para intercambiar valores
En el bucle while ' while (b != 0)' se ejecuta mientras 'b' no sea 0
*/
int calcular_MCD(int a, int b)
{
    int tpb;
    while (b != 0)
    {

        /* tpb = b guarda el valor actual de 'b'
        b = a % b actualiza 'b' con el residuo de 'a' divido por 'b'
        a = tpb asigna a 'a' el valor que tenia 'b' antes de la actualizacion
        Se reduce 'a' y 'b' para ir al siguiente paso
        */
        tpb = b;
        b = a % b;
        a = tpb;
    }
    return a;
}

int main()
{
    // Se declaran variables
    int n1; // Se guarda el primer valor ingressado por el usuario
    int n2; // Se guarda el segundo numero ingresado por el usuario

    // Se pide al usuario ingresar un numero
    printf(" Ingrese el primer numero: ");
    // Se lo guarda en la variable 'n1'
    scanf("%d", &n1);
    // Se pide al usuario ingresar un segundo numero
    printf(" Ingrese el segundo numero: ");
    // Se lo guarda en la variable 'n2'
    scanf("%d", &n2);

    // Lamada a la funcion
    int MCD = calcular_MCD(n1, n2);

    // Imprime en pantalla los numeros ingresados y el resuldo de MCD
    printf(" El MCD de %d y %d es %d.\n", n1, n2, MCD);

    return 0;
}