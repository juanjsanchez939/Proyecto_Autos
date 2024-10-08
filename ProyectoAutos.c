#include <stdio.h>
#include <string.h>

#define MAX_MARCAS 10

typedef struct {
    char marca[50];
    float precio;
} Auto;

//-------------------
void ingresarPrecios(Auto autos[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Ingresa la marca del auto %d: ", i + 1);
        scanf("%s", autos[i].marca);
        printf("Ingresa el precio de %s: ", autos[i].marca);
        scanf("%f", &autos[i].precio);
    }
}

//-------------------
void mostrarPrecios(Auto autos[], int n) {
    printf("\nPrecios de Autos:\n");
    for (int i = 0; i < n; i++) {
        printf("Marca: %s, Precio: %.2f\n", autos[i].marca, autos[i].precio);
    }
}

//-------------------
void buscarAuto(Auto autos[], int n) {
    char marcaBuscada[50];
    int encontrado = 0;

    printf("Ingresa la marca del auto que deseas buscar: ");
    scanf("%s", marcaBuscada);

    for (int i = 0; i < n; i++) {
        if (strcmp(autos[i].marca, marcaBuscada) == 0) {
            printf("Auto encontrado:\n");
            printf("Marca: %s, Precio: %.2f\n", autos[i].marca, autos[i].precio);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Auto con la marca '%s' no encontrado.\n", marcaBuscada);
    }
}
//-------------------
int main() {
    Auto autos[MAX_MARCAS];
    int op;

    do {
        printf("\nPrograma de Precios de Autos\n");
        printf("1. Ingresar Autos\n");
        printf("2. Mostrar Autos\n");
        printf("3. Buscar Auto por marca\n");
        printf("4. Salir\n");
        printf("Escriba su opción: ");
        scanf("%d", &op);

        switch (op) {
            case 1:
                ingresarPrecios(autos, MAX_MARCAS);
                break;
            case 2:
                mostrarPrecios(autos, MAX_MARCAS);
                break;
            case 3:
                buscarAuto(autos, MAX_MARCAS);
                break;
            case 4:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opción no válida. Inténtelo de nuevo.\n");
                break;
        }
    } while (op != 4);

    return 0;
}
