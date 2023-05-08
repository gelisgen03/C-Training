#include<stdio.h>

main() {

int a,b,c;
a=0;
b=1;
c=0;
printf("Lütfen 10 adet sayı giriniz ve bunlardan 3 e ve 5 e tam bölünenlerin sayısına ulaşacaksınız\n");
 
 for(b;b<=10;b++) {
  printf("%d. Sayiyi Giriniz\n==> ",b);
  scanf("%d",&a);
  if(a%3=0&&a%5=0){
   c++;
  }
 }
 printf("Girdiginiz sayilardan %d tanesi hem 3 e hemde 5 tam bölünmekte.",c);










}