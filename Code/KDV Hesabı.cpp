#include<stdio.h>
 
 main() {
 	
 double a,b,total,kdv ;
 
  printf("KDV siz Bir fiyat giriniz lutfen:");
   scanf(" %lf",&a);	
    printf("KDV nin yuzde degerini giriniz: ");
     scanf("%lf",&b);
     
     kdv=(a*b/100);
     total= a+kdv;
     
     printf("Odeyeceginiz KDV miktari: %lf\n",kdv);
      printf("Odegeceginiz toplam miktar: %lf",total);
     
   
 	
 	
 	
 	
 	
 	
 	
 	
 }
