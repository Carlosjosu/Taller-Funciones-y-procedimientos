#include <stdio.h>
// Esta funcion toma como numero entero a cn1
/*Utiliza el bucle while para iterar desde 1 hasta 'cn1'
En cad ietraccion se imprime el valor de 'i' y lo suma a la variable 'suma'
Si 'i' es menor que 'cn1', impriem tambien el simbolo '+' para indicar que se suman
Por ultimo me devuelve el total de la suma*/
int suma_serie_aritmetica(int cn1)
{
    int suma = 0;
    int i = 1;

    while (i <= cn1)
    {
        printf("%d", i);
        suma += i;

        if (i < cn1)
        {
            printf(" + ");
        }
        i++;
    }

    return suma;
}

int main()
{

    // Se define variable
    int n1;
    // Se pide al usuariom ingresar un entero
    printf("Ingrese un numero entero: ");
    // Se guarda en la variable n1
    scanf("%d", &n1);

    // Se verifica si el numero ingresado es negativo
    // Si no se llama a la Funcion
    if (n1 >= 0)
    {
        // se imprime en pantalla si se cumple la condicion
        printf("La suma de los primeros %d terminos de la serie aritmetica ", n1);
        int resultado = suma_serie_aritmetica(n1);
        printf(" es: %d\n", resultado);
    }
    else
    {
        // se imprime en pantalla si no se cumple la condicion
        printf("El numero ingresado es negativo ingrese un numero mayor que 0. \n");
    }

    return 0;
}