#include <stdio.h>
#include <string.h>

// Punto 1: Bautista Pereira Ivan Valdez
float metrosACentimetros(float metros) {
    return metros * 100;
}

float centimetrosAMetros(float centimetros) {
    return centimetros / 100;
}

// Punto 2: Fabrizio Elian Morel
double cm_a_pulgadas(double cm) {
    return cm / 2.54;
}

double pulgadas_a_cm(double pulgadas) {
    return pulgadas * 2.54;
}

// Punto 3: Brayan Blanco Avila
void repetir(const char *texto, int veces)
{
    for (int i = 0; i < veces; i++)
    {
        printf("%s\n", texto);
    }
}

// Punto 4: Yamil Ian Luque
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

void linea(char simbolo)
{
    for (int i = 0; i < 20; i++)
    {
        printf("%c", simbolo);
    }
    printf("\n");
}

int main()
{
    repetir("juan", 3);
    repetir("pepe", 2);
    cartel("Maria", 5);
    printf("La conversión de 2 metros a centímetros es: %.2fcm\n", metrosACentimetros(2));
    linea('T');
    printf("La conversión de 80 centímetros a pulgadas es: %.4f\n", cm_a_pulgadas(80));
    linea('$');
    cartel("Marcos", 4);
    return 0;
}