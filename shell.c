#include <stdio.h>			// para usar printf()
#include <stdlib.h>			// para usar system(),
#include <string.h>

void shell(int arr[], int n){
    
    int temp,inc,i,j;
    for(inc = 1 ; inc<n;inc=inc*3+1);
        while (inc > 0){
            for ( i=inc; i < n; i++){
                j = i;
                temp = arr[i];
                while ((j >= inc) && (arr[j-inc] > temp)){
                    arr[j] = arr[j - inc];
                    j = j - inc;
                }
                arr[j] = temp;
            }
        inc/= 2;
    }
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
    shell(lista,size);

    printf("Lista Ordenada \n");
    for (i = 0; i < size; i++) {
        printf("%d, ", lista[i]);
    }

    return 0;
}

