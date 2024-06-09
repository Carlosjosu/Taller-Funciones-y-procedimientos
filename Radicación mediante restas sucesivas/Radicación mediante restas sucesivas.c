#include <stdio.h> //icluimos la libereria

// Esta funcion me calcula la raiz cubica
/* Toma el valor de n1 y calcula la raiz cubica
dentro de la funcion se inicializa i = 0
Se usa un bucle while para incrementar 'i' hasta 'i * i * i' sea mayor que n1
se suma 0.001 para tener un valor mas exacto
Cuando la condicion ya no se cumple se le resta -0.001 y se devuelve el resultado que es 'i'*/
float raiz_cubica(float n1)
{

    float i = 0;
    while (i * i * i <= n1)
    {
        i += 0.001;
    }
    return i - 0.001;
}

int main()
{
    // Se definen las variables
    float numero;
    // Seide la usuario ingresar un numero
    printf("Ingrese un numero: ");
    // Luego se lo guarda en la variable 'numero'
    scanf("%f", &numero);
    // Esta parte es para poder trabajar con numero negativos convertirlo a absolutos
    int signo = 1;
    if (numero < 0)
    {

        signo = -1;
        numero = -numero;
    }
    // Llamada a la funcion
    float i = raiz_cubica(numero) * signo;
    // Presenta la raiz cubica aproximada en pantalla
    printf("La raiz cubica de %0.2f es aproximadamente %0.2f\n", numero * signo, i);

    return 0;
}