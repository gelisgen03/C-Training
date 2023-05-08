#include<stdio.h>

main() {
int a,b,process ;
	
printf("Lutfen 50 den kucuk iki adet sayi giriniz. Aksi taktirde toplama isleminiz gerceklesmeyecektir\n1. :");
 scanf("%d",&a);
  printf("2. :");
   scanf("%d",&b);
   
 if(a<=50||b<=50){
 process= a+b ;
 printf("Girilen %d ve %d sayisi sartlara uygun.\nBu yuzden isleminiz gerceklestiriliyor...\n=> %d + %d = %d",a,b,a,b,process);		
 }
else {
printf("Girilen %d ve %d sayisi sartlara uygun degil.\nBu yuzden isleminiz gerceklestirilemiyor...",a,b);	
}	
	
}

