#include <stdio.h>
#include <math.h>

struct CD {
    char titulo[100];
    char artista[50];
    int num_canciones;
    float precio;
};

 main() {
    
    struct CD cd1;
    printf("Introduce el título del CD: "
    gets(cd1.titulo,cd1.titulo);

    printf("Introduce el artista: ");
    gets(cd1.artista,cd1.artista);

    printf("Introduce el número de canciones: ");
    scanf("%d", &cd1.num_canciones);

    printf("Introduce el precio: ");
    scanf("%f", &cd1.precio);
      printf("\nInformación del CD:\n");
    printf("Título: %s", cd1.titulo);
    printf("Artista: %s", cd1.artista);
    printf("Número de canciones: %d\n", cd1.num_canciones);
    printf("Precio: %.2f\n", cd1.precio);

    return 0;
}