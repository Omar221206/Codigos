#include <stdio.h>
int main () {
     int miarreglito[10];
     
     miarreglito [0]=10;
     miarreglito [1]=10;
     miarreglito [2]=10;
     miarreglito [3]=10;
     miarreglito [4]=10;
     miarreglito [5]=10;
     miarreglito [6]=10;
     miarreglito [7]=10;
     miarreglito [8]=10;
     miarreglito [9]=10;
     int i = 0;
     while(i <= 9){
        printf("Ingresa el valor de mi arreglito [%d]: " , i );
        scanf("%d", &miarreglito[i]);
        
        printf("El valor de mi arreglito[%d] = %d\n" ,i ,miarreglito[i]);
        i++;
     }   
     return 0;
}     