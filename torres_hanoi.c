#include <stdio.h>			// para usar printf()
#include <stdlib.h>			// para usar system(),
#include <string.h>

void hanoi(int n, char desde, char hasta, char aux)
{


    if (n == 1)
    {
        printf("\n Mover el disco %d de %c a %c \n", n, desde, hasta);
    }
    else
    {
        hanoi(n-1, desde, aux, hasta);

        
        printf("\n Mover el disco %d de %c a %c \n", n, desde, hasta);
        hanoi(n-1, aux, hasta, desde);

    }
}


int main(int argc, const char* argv[])
{

    char desde = 'A', hasta = 'B', aux = 'C';
    int n;
    printf("Ingresa el numero de discos que deseas utilizar\n");
	scanf("%d", &n);

   
    hanoi(n, desde, hasta, aux);
    
    return 0;
}

