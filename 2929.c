#include <stdio.h>

int factorial(int n) {
    if (n == 0) {
        return 1;  
    } else {
        return n * factorial(n - 1);  
    }
}
int main() {
    int n;
    printf("Ingrese un número para calcular su factorial: ");
    scanf("%d", &n); 
    if (n < 0) {
    } else {
      int resultado = factorial(n);

       
        printf("El factorial de %d es: %d\n", n, resultado);
    }
    return 0;
}