#include <stdio.h>
#include <stdbool.h>

int main(){

    //tipos de datos
    int entero=1;
    float altura=1.79;
    double peso=79.68;
    char letra='A'; //almacena un solo caracter
    char nombre[]='Steve'; //almacena multiples caracteres
    const float = 3.1416;

    bool sesion = false;

    //mostrar variables
    printf("%d\n",entero);
    printf("%f\n",altura);
    printf("%c\n",letra);

    //asignar la precision decimal
    printf("%f\n",altura); // Outputs 1.790000
    printf("%lf\n",peso); // Outputs 19.990000

    printf("%.1f\n",altura); // Only show 1 digit
    printf("%.2f\n",altura); // Only show 2 digits
    printf("%,4f\n",altura); // Only show 4 digits 

    //tamanio de los tipos
    printf("%lu\n", sizeof(entero));
    printf("%lu\n", sizeof(altura));
    printf("%lu\n", sizeof(peso));
    printf("%lu\n", sizeof(letra)); 

    

    // Return boolean values
    printf("%d", sesion);   // Returns 1 (true)

    



    return 0;
}