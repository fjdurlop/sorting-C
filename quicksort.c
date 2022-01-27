#include <stdio.h>			// para usar printf()
#include <stdlib.h>			// para usar system(),
#include <string.h>

int particion(int arr[], int linf, int lsup)
{
    /*Repartir los valores superiores e inferiores de un arreglo en relación a un valor llamado pivote*/
    
	int a, arriba,abajo,temp;
    a = arr[linf];
    arriba = lsup;
    abajo = linf;

    while(abajo<arriba){

        while (arr[abajo] <= a && abajo <lsup){
            abajo = abajo+1;
        }
        while (arr[arriba]>a){
            arriba = arriba-1;
        }

        if(abajo<arriba){
            temp = arr[abajo];
            arr[abajo] = arr[arriba];
            arr[arriba] = temp;
        }
    }
    arr[linf] = arr[arriba];
    arr[arriba] = a;
    return arriba;
}

void quick(int arr[], int linf, int lsup)
{
	int j;
    if(linf>= lsup){
        return;
    }
    j = particion(arr,linf,lsup);
    quick(arr,linf,j-1);
    quick(arr,j+1,lsup);
}


int main(int argc, const char* argv[])
{
    
    //int lista[] = {222, 74, 332, 465, 72};
    int lista[] = {0, 185, 458, 231, 74, 306, 244, 424, 446};
    
    int size = sizeof(lista) / sizeof(int);
	
    printf("Lista Desordenada \n");
	
	int i;
    for (i = 0; i < size; i++) {
        printf("%d, ", lista[i]);
    }

    printf("\n");
    quick(lista,0,size-1);

    printf("Lista Ordenada \n");
    for (i = 0; i < size; i++) {
        printf("%d, ", lista[i]);
    }

    return 0;
}

