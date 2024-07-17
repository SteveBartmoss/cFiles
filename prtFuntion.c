#include <stdio.h>

// Declaración de las funciones
void showOk() {
    printf("Estas de acuerdo\n");
}

void showCancel() {
    printf("Cancelaste la ejecucion\n");
}

// Tipo de puntero a función que recibe void y retorna void
typedef void (*FunctionPtr)();

// Función que recibe una pregunta y dos punteros a funciones
void ask(const char *question, FunctionPtr yes, FunctionPtr no) {
    char response;
    printf("%s (y/n): ", question);
    scanf(" %c", &response);  // El espacio antes de %c es importante para ignorar el newline anterior

    if (response == 'y' || response == 'Y') {
        yes();
    } else {
        no();
    }
}

int main() {
    // Llamada a la función ask pasando las funciones showOk y showCancel
    ask("Estas de acuerdo?", showOk, showCancel);
    return 0;
}
