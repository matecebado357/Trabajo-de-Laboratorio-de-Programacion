#include <stdio.h>
#include <string.h>

//Encargado de hacer el punto 3: Brayan Avila Blanco (Nombre de Git: bavbry)

void repetir(const char *texto, int veces)
{
    for (int i = 0; i < veces; i++)
    {
        printf("%s\n", texto);
    }
}

void cartel(const char *texto, int veces)
{
    int longitud = strlen(texto);

    for (int i = 0; i < longitud; i++)
    {
        printf("-");
    }
    printf("\n");

    repetir(texto, veces);

    for (int i = 0; i < longitud; i++)
    {
        printf("-");
    }
    printf("\n");
}

int main()
{
    char mensaje[100];
    int repeticiones;

    printf("Introduce el texto: ");
    fgets(mensaje, sizeof(mensaje), stdin);

    mensaje[strcspn(mensaje, "\n")] = '\0';

    printf("Introduce la cantidad de veces que deseas repetir el texto: ");
    scanf("%d", &repeticiones);

    cartel(mensaje, repeticiones);

    return 0;
}
