#include <stdio.h>


struct persona {

    char nombre[50];  // Cadena de caracteres para almacenar el nombre
    int edad;         // Edad de la persona
};

int main() {

    struct persona persona1; // declaracion de una variable de tipo persona

    // Asignación de valores
    printf("Ingrese el nombre: ");
    scanf("%s", persona1.nombre);  // scanf para el nombre del usuario (hasta 49 caracteres)

    printf("Ingrese la edad: ");
    scanf("%d", &persona1.edad);    // scanf para la edad del usuario


    printf("Nombre:%s\n", persona1.nombre); //impresion para mostrar valores
    printf("Edad:%d\n", persona1.edad);

    return 0;
}
