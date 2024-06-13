#include<stdio.h>
#include<stdlib.h>

int main(){

    int *vector;
    int size;
    int iterador;

    printf("Ingrese el numero de elementos del vector: ");
    scanf("%i",&size);
    vector=malloc(size*sizeof(int));

    for(iterador=0;iterador<size;iterador++){
        prinft("Ingrese un numero:");
        scanf("%i",&vector[iterador]);
    }
    prinft("Contenido del vector dinamico: ");
    for(iterador=0;iterador<size;iterador++){
        prinft("%i",vector[iterador]);
    }
    free(vector);

    printf("Enter number of elements: ");
    scanf("%d"&size);

    vector=(int*)malloc(size*sizeof(int));

    printf("Memory successfully allocated using malloc \n");

    for(iterador=0;iterador<size; iterador++){
        vector[iterador]=iterador+1;
    }

    printf("The elements of the array are: ");
    
    for(iterador=0; iterador<size; iterador++){
        prinft("%d",vector[iterador]);
    }

    free(vector);

    printf("Enter number of elements: ");
    scanf("%d"&size);

    vector=(int*)calloc(size,sizeof(int));

    printf("Memory successfully allocated using calloc \n");

    for(iterador=0;iterador<size; iterador++){
        vector[iterador]=iterador+1;
    }

    printf("The elements of the array are: ");
    
    for(iterador=0; iterador<size; iterador++){
        prinft("%d",vector[iterador]);
    }
    
    free(vector);

    printf("Enter number of elements: ");
    scanf("%d"&size);

    vector=(int*)calloc(size,sizeof(int));

    printf("Memory successfully allocated using calloc \n");

    for(iterador=0;iterador<size; iterador++){
        vector[iterador]=iterador+1;
    }

    printf("The elements of the array are: ");
    
    for(iterador=0; iterador<size; iterador++){
        prinft("%d",vector[iterador]);
    }

    printf("Enter the new size of the array: ");
    scanf("%d"&size);

    vector=(int*)realloc(vector,size*sizeof(int));

    printf("Memory successfully re-allocated using realloc \n");
    
    for(iterador=0;iterador<size; iterador++){
        vector[iterador]=iterador+1;
    }

    printf("The elements of the array are: ");
    
    for(iterador=0; iterador<size; iterador++){
        prinft("%d",vector[iterador]);
    }

    free(vector);

    return 0;
}