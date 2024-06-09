

#include <stdio.h> //Se incluye la libreria

// Esta funcion se encarga de calcular el producto de los primeros 'n2' terminos de una serie geometrica
//  Se declaran variables dentro de la funcion
double producto_serie_geometrica(double primer_termino, double n1, int n2)
{

    double producto = primer_termino;

    printf("%0.0f", primer_termino);
    for (int i = 1; i < n2; i++)
    {
        producto *= n1;
        printf(", %0.0f", producto);
    }

    printf("\n");

    return producto;
}

int main()
{

    double primer_termino;
    double n1;
    int n2;

    // Se pide al usuario ingresar algunas cosas para poder almacenarlas en las variables
    printf("Ingrese el primer termino: ");
    scanf("%lf", &primer_termino);
    printf("Ingrese la razon: ");
    scanf("%lf", &n1);
    printf("Ingrese el numero de terminos: ");
    scanf("%d", &n2);
    /*Se llama a la funcion con los valores ingresados pore el usauario
    Dentro de la funcion, se inicializa producto con el valor de primer_termnino
    Se imprime el primer teremino
    En cada iteraccion 'producto' se multiplica por 'n1' y se imprime el resultado*/
    double resultado = producto_serie_geometrica(primer_termino, n1, n2);
    // Se imprime el resultado
    printf("El producto de los primeroa %d terminos de la serie geometrica es: %0.0lf\n ", n2, resultado);
    return 0;
}