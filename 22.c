#include <stdlib.h>

int main() {
    char palabral[20];
    char palabra2[20];
    char resultado[50];

     printf("Palabral: ");
     scanf("%s", palabral);   
     printf("Palabra 2: ");
     scanf("%s", palabra2);

     int len = strlen(palabral);  
     strcat(resultado, palabral); 
     for(int i = 0; i < len; i++) {
        strcat(resultado, palabra2);  
    }
    printf("Palabral: %s\n", resultado);
    
    return 0;
}