#include <stdio.h>

int main(){

    int edad=24; //varibale que acumula la edad

    int *ptrToEdad=&edad; //puntero que guarda la direcion de memoria de la variable edad

    printf("%d\n",edad);
    printf("%p\n",&edad);
    printf("%p\n",ptrToEdad); 

    //punteros relacionados con arreglos
    int numeros[4]={25,50,75,100};

    printf("%p\n",numeros);

    printf("%p\n",&numeros);

    printf("%d",*numeros);

    

    //intercambio de arreglos mediante el uso de punteros
    int pares[5] = {1,3,5,7,9};
    int impares[5] = {0,2,4,6,8};

    int *ptrPares=pares;
    int *ptrImpares=impares;
    int *ptrSwap;

    ptrSwap = ptrPares;
    ptrPares = ptrImpares;
    ptrImpares = ptrSwap;

    //aritmetica de punteros


    

    return 0;
}
