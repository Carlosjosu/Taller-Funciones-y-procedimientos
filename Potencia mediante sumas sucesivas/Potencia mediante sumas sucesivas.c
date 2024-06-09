#include <stdio.h> // Incluimos la libreria

// Este programa es de Potencia mediante sumas sucesivas esta hecho con while ya que es un proceso facil de manejar

// Esta funcion recibe dos enteros 'n1' y 'n2'
/* El 'resultado' inicializa en 0
Mientras 'n2' sea mayor a 0, añade 'n1 a 'resultado' y decrementa 'n2' si no se seria un bucle infinito
Me devuelve un resultado, que es la respuesta de las sumas sucesivas*/
int multiplicar(int n1, int n2)
{
    int resultado = 0;
    while (n2 > 0)
    {
        resultado += n1;
        n2--;
    }
    return resultado;
}

/* Esta funcion recibe dos enteros 'base', 'exponente'
Si el exponete es 0 imprime es = 1
Si el exponete es mayor a 0:
Inicializa 'resultado' con 'base'
imprime el valor inicial de la 'base'
Se usa un bucle 'while' para multiplicar tantas veces sean necesarias
entre 'resultado' y la base
se imprime tambien cada paso de la multiplicacion
Por ultimo se imprime el resultado de la potencia*/
void potencia(int base, int exponente)
{
    if (exponente == 0)
    {
        printf("%d^%d = 1\n", base, exponente);
    }
    else
    {
        int resultado = base;
        printf("%d^%d = %d", base, exponente, base);

        int i = 1;
        while (i < exponente)
        {
            resultado = multiplicar(resultado, base);
            printf(" * %d", base);
            i++; /* Asegura que cuando 'i' alcance el valor del exponente, la condicio
            'while (i < exponente)' sera falsa y el bucle termina*/
        }

        printf(" = %d\n", resultado);
    }
}

int main()
{
    int base;
    int exponente;
    // Se pide al usuario ingresar la base
    printf(" Ingrese la base: ");
    // Lo guardamos en la variable base
    scanf("%d", &base);
    // Luego le pedimos que ingrese el exponente
    printf("Ingrese el exponente: ");
    // Y lo guardamos en la variable exponent5e
    scanf("%d", &exponente);

    // Luego llamamos a la funcion para los calculos correspondientes
    potencia(base, exponente);
    return 0;
}
