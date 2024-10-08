#include <stdio.h>

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
void busquedaDeAutos(){
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if ()
            {
                
            }
            
        }
        
    }
     
}
//-------------------
int main() {
    Auto autos[MAX_MARCAS];
    int op;
    while (op != 3)
    {
        printf("Programa de Precios de Autos\n");
        printf("1_ Ingresar Autos\n");
        printf("2_ Mostrar Autos.\n");
        printf("3_ Salir.\n");
        printf("Escriba su respuesta: "); 
        scanf("%d",&op);
      
        if(op == 1){
            ingresarPrecios(autos, MAX_MARCAS);
        }else if (op == 2)
        {
            mostrarPrecios(autos, MAX_MARCAS);    
        }
    }
    
    printf("Saliendo del programa");

    return 0;
}
//agregar autos electricos, un apartado de busqueda, 