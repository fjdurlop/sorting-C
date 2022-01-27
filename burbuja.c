#include <stdio.h>			// para usar printf()
#include <stdlib.h>			// para usar system(),
#include <string.h>

void burbuja(int arr[], int dim)
{
    int n =dim;
    int i,j,temp;
    for(i=0; i<n; i++){

        for(j=i+1; j<n ; j++){

            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            
        }
        
    }
}


int main(int argc, const char* argv[])
{
    
    int lista[] = {222, 74, 332, 465, 72};
    //int lista[] = {0, 185, 458, 231, 74, 306, 244, 424, 446};
    
    int size = sizeof(lista) / sizeof(int);
	
    printf("Lista Desordenada \n");
	
	int i;
    for (i = 0; i < size; i++) {
        printf("%d, ", lista[i]);
    }

    printf("\n");
    burbuja(lista,size);

    printf("Lista Ordenada \n");
    for (i = 0; i < size; i++) {
        printf("%d, ", lista[i]);
    }

    return 0;
}

