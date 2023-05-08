#include<stdio.h>

main() {

int a,b,c;
a=0;
b=1;
c=0;
printf("Lutfen 10 adet sayi giriniz ve bunlardan 3 e ve 5 e tam bölünenlerin sayisini bulacaksiniz\n");
 
 for(b;b<=10;b++) {
  printf("%d. Sayiyi Giriniz\n==> ",b);
  scanf("%d",&a);
  if(a%3==0&&a%5==0) {
   c++;
   printf("Good Job\n\n");
  }
 else {
   printf("Fail\n\n");	
 }
 }
 
 printf("Girdiginiz sayilardan %d tanesi hem 3 e hemde 5 tam bolunmekte.",c);










}
