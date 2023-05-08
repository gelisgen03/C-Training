#include<stdio.h>
 main(){
 int counter ,total,a,b;
 total=0;
 a=0;
 counter=0;
 printf("Bir sayi giriniz\n");
 scanf("%d",&a);
 
 for(counter=0;counter<=a;counter++) {
 total=total+counter;
  
 }
 printf("1 den %d a kadar olan tum sayilarin toplami: %d",a,total) ;	
 }
 
