#include <stdio.h> // Se incluye la libreria

// Calcular la suma de los factoriales de los primeros n números

// Esta funcion me ayuda con for a multiplicar los numeros de 1 a 'n1'
int factorial(int n1)
{
    int fact = 1;
    for (int i = 1; i <= n1; i++)
    {
        fact *= i;
    }
    return fact; // Me retorna el resultado del factorial
}

// El bucle for me ayuda a sumar los factoriales desde 1 hasta 'n1'
int sumar_factoriales(int n1)
{
    int suma = 0;
    for (int i = 1; i <= n1; i++)
    {
        suma += factorial(i);
    }
    return suma; // Me restorna el resultado de la suma
}

int main()
{
    // Defino variables
    int n1;
    // Pido al usuario ingresar un valor
    printf("Ingresa el numero de rango a calcular el factorial: ");
    // Lo guardo en la variable n1
    scanf("%d", &n1);

    // llamada a la funcion
    int suma = sumar_factoriales(n1);
    printf(" Su rango es de %d, suma = ", n1);

    // Con este for imprimo mis resultados
    for (int i = 1; i <= n1; i++)
    {
        printf("%d!", i);
        if (i != n1)
        {
            printf(" + ");
        }
    }

    printf(" = %d\n", suma);
    return 0;
}