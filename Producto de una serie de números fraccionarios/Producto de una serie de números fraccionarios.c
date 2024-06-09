#include <stdio.h> //Se incluye la libreria

// Producto de una serie de números fraccionarios por for ya que su sintaxis me ahorra en este problema algunas lineas de codigo y es mas eficiente
float producto_de_serie(int n1)
{
    float producto = 1.0;
    // Se cumple esta condicion solo si n1 es mayo a 0
    if (n1 > 0)
    {
        printf(" La serie es : 1"); // Se imprime la serie
    }

    for (int i = 2; i <= n1; i++)
    {
        printf(" * 1/%d", i);
        producto *= 1.0 / i;
    }

    return producto;
}

int main()
{

    // Se definen variables
    int n1; // Guarda el numero hasta el cual se sumaran, ingresado por el usuario

    // Se pide al usuario ingresar un valor para calcular dentro de ese rango
    printf(" Ingrese el valor del rango a calcular: ");
    // Se guarda en la variable n1
    scanf("%d", &n1);

    // llamada a la funcion
    float resultado = producto_de_serie(n1);

    // Esta condicion se cumple solo si n1 es negativo o es 0
    if (n1 <= 0)
    {
        printf(" Usted a igresado el 0 asi que no hay valores a calcular o ingreso un numero negativo.");
    }
    else // si no se cumnple la primera condicio se cumplira esta
    {
        // Presento en pantalla el resultado de la serie
        printf(" \n El producto de la serie hasta %d terminos es %0.5f\n", n1, resultado);
    }

    return 0;
}
