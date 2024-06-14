#include <stdio.h>

int main(void){

    /* A simple scanset example */
    char str[128];
    printf("Enter a string: ");
    scanf("%[A-Z]s",str);

    printf("You entered: %s\n", str);

    /* Another scanset example with ^ */
    printf("Enter a string: ");
    scanf("%[^o]s",str);

    printf("You entered: %s\n", str);

    return 0;
}