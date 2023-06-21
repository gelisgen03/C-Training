#include<stdlib.h>
#include<stdio.h>

// Koordinat sistemi olusturarak
// Eskenar dortgen ciz

void main(){
   int cap = 10;
      
   for(int y = -cap; y <= cap; y++){
      for(int x = -cap; x <= cap; x++){
         if(abs(x) + abs(y)  <= cap ){
            printf("*");
         }
         else{
            printf(" ");
         };
      };
      printf("\n");
   };
};