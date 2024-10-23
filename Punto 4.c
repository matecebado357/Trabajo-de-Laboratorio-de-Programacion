#include <stdio.h>

//Encargado de hacer el punto 4: Yamil Ian Luque (Nombre de Git: )

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
    linea('#');
    linea('*'); 
    
    return 0;
}
