#include<stdio.h>

int main(){
int *pt; //*pt ifadesi bir sayi ama * işareti ile pointer olduğunu anliyoruz
int a;

a=18;
pt=&a; // & sembolü yanına konduğu değişkenin adresini gösterir.
printf("a degisgenini degeri: %d\n",a);
printf("Pointerin degeri: %p\n",pt); //%x koyarsan "0" lar gider
printf("Pointerin isaret ettigi adresteki deger: %d\n",*pt);
printf("poiterin adresi: %p",&pt);
*pt=20;
printf("poiterin guncel degeri: %d",*pt);

 return 0;
}
