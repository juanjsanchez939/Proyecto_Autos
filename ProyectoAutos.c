#include <stdio.h>

#define MAX_MARCAS 10

typedef struct {
    char marca[50];
    float precio;
} Auto;

void ingresarPrecios(Auto autos[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Ingresa la marca del auto %d: ", i + 1);
        scanf("%s", autos[i].marca);
        printf("Ingresa el precio de %s: ", autos[i].marca);
        scanf("%f", &autos[i].precio);
    }
}

void mostrarPrecios(Auto autos[], int n) {
    printf("\nPrecios de Autos:\n");
    for (int i = 0; i < n; i++) {
        printf("Marca: %s, Precio: %.2f\n", autos[i].marca, autos[i].precio);
    }
}

int main() {
    Auto autos[MAX_MARCAS];
    
    printf("Programa de Precios de Autos\n");
    ingresarPrecios(autos, MAX_MARCAS);
    mostrarPrecios(autos, MAX_MARCAS);

    return 0;
}
