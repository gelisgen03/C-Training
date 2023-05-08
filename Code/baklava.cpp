#include<stdio.h>



int main(){

int a,b,c,d;
a=0;
c=1;
for(b=0;b<9;b++){
        d=9-b;
        for(d;d>0;d--)
         printf(" ");

         for(a;a<=2*b;a++)
            printf("*");

         printf("\n");
           a=0;
          }

for(b=0;b<9;b++){
d=0;
for(d;d<b+1;d++)
printf(" ");

for(a;a<=2*(8-b);a++)
printf("*");

printf("\n");
a=0;

          }





return 0;
}
