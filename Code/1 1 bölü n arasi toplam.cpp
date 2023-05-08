#include<stdio.h>
main(){
float n,b,c,d;
c=n=d=0;
b=1;
printf("Hos geldiniz. Bu islem 1 den baslayip 1/n e kadar art arda toplama  islemidir. Lutfen n sayisini giriniz.\n==>  ");
 scanf("%f",&n);
 
 for(b;b<=n;b++) {
 c=c+1/b;		
 printf("%g. Toplam= %f \n",b,c);
 
 } 
 printf("1 den girdiginiz %f e kadar olan sayilarin toplami: %f",n,c);
 
 // Printf te floattan gelen 0 lari istemiyorsan %f degiskeni yenine %g yi yaz
 // ya da int veri tipinde bütün degiskenleri yazip toplama iþlemindeki 1 in yerine 1.0 yaz
 
 
 
 
 
 
 
 
 
 
 
 
 
 }

 
 
 

