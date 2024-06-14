#include <stdio.h>

int sum(int a, int b){
    return a+b;
}

void swap(int var1, int var2){
    int temp=var1;
    var1=var2;
    var2=temp;
}

void swapReference(int *var1, int *var2){
    int temp = *var1;
    *var1 = *var2;
    *var2 = temp;
}

int main(){

    int resultado=sum(10,30);
    int var1=3, var2=2;
    
    printf("Sum is: %d",resultado);
    

    printf("Before swap Value of var1 and var2 is: %d, %d\n",var1,var2);

    //pass by value 
    swap(var1,var2);

    printf("After swap Value of var1 and var2 is: %d, %d\n",
    var1,var2);

    swapReference(&var1, &var2);

    printf("After swap Value of var1 and var2 is: %d, %d\n",
    var1,var2);

    return 0;
    
}