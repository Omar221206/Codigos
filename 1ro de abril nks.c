#include <stdio.h>

int main() {
    int N, suma = 0;
    
    printf("Ingrese un número N: ");
    scanf("%d", &N);
    
    for (int i = 1; i <= N; i++) {
        suma += i;
    }
    printf("La suma de los números desde 1 hasta %d es: %d\n", N, suma);
    
    return 0;
}


    