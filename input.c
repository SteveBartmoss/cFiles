#include <stdio.h>

int main(){

    //pedir un informacion al usuario

    int edad;

    printf("Ingresa tu edad: ");
    scanf("%d",&edad);

    if(edad>18){
        printf("Puedes pasar, eres mayor");
    }
    else{
        printf("eres un rancherillo")
    }

    return 0;
}
