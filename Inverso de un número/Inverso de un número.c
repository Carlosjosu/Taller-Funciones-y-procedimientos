
// While da uma mejor forma de estructura y se ahorra lineas de codigo eficiencia en vez de canjtidad
#include <stdio.h> // Se incluye la libreria

// Esta funcio hace el calculo de para sacar cada dijito en cada interaccion
/* En cada una, multiplica el inverso actual por 10
n1 % 10 obtiene el ultimo digito de n1
inverso * 10  desplazza los digitos una posicion a la izquierda
Al sumar 'n1 % 10' se añade el ultimo digito de 'n1'  a la pósicion mas baja de 'inverso'*/
int inverso_de_un_numero(int n1)
{
    int inverso = 0;
    while (n1 > 0)
    {
        inverso += inverso * 10 + n1 % 10;
        n1 /= 10;
    }
    return inverso;
}

/* Se pide ingresar al usuario que ingrese un numero
luego lo guardamos en la variable n1
Despues llamamos a la funcion para hacer los calculos correspondientes
y finalmente presentar el inverso
*/
int main()
{
    int n1;
    int inverso;
    printf("Ingrese un numero: ");
    scanf("%d", &n1);
    inverso = inverso_de_un_numero(n1);
    printf("El inverso de %d es: %d\n", n1, inverso);
    return 0;
}
