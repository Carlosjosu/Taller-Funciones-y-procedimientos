

// Este algoritmo es para sumar los digitos de un numero
// Esta hecho con el bucle while ya que las lineas de codigo eran mas cortas en comparacion con los otros bucles
#include <stdio.h> // Se incluye la libreria

/* En esta funcion se itera para sacar cada digito del numero usando n1 % 10 el se suma a la variable 'suma'
y luego divide n1 por 10 pra eliminar ese digito
este bucle continua hasta que 'n1' sea 0*/
int suma_digitos(int n1)
{
    int suma = 0;
    while (n1 > 0)
    {
        suma += n1 % 10;
        n1 /= 10;
    }
    return suma;
}

/* Esta funcion nos va ayudar a imprimi en el mformato que queremos
Primero guardamos el nuymero original en 'cn1' y lo imprime seguido de '->'
lUego itteramos en este numero para separar los digitos e imprimirlos individualmente */
void digito_mas_digito(int n1)
{
    int cn1 = n1;
    printf("%d -> ", n1);
    while (n1 > 0)
    {
        printf("%d", n1 % 10);
        n1 /= 10;
        if (n1 > 0)
        {
            printf(" + ");
        }
    }

    printf(" = %d\n", suma_digitos(cn1));
}

/* Se pide ingresar al usuario que ingrese un numero
luego lo guardamos en la variable n1
Despues llamamos a la funcion para hacer los calculos correspondientes*/
int main()
{
    int n1;
    printf("Ingrese un numero: ");
    scanf("%d", &n1);
    digito_mas_digito(n1);
    return 0;
}
