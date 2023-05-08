#include<stdio.h>


int main(){

char a,array[20];
int b,c=0,d=0,sayac[100];
printf("Lutfen bir cumle giriniz\n--> ");
gets(array);
printf("Simdide bu metin icinde hangi harfi aramak istediginizi giriniz\n--> ");
scanf("%c",&a);
printf("Girilen Cumlenin Tesrten yazilis hali:\n");
for(b=strlen(array);b>=0;b--){
    printf("%c",array[b]);
}
printf("\n");
for(b=0;b<strlen(array);b++){
if(array[b]==a){
  sayac[d]=b;
  d++;



}

}
printf("Girilen cumlede %c karakteri %d defa bulundu\n",a,d);
printf("Bu karakterin konumlarida assagidadir:\n");
for(b=0;b<d;b++){
 printf("%d ",sayac[b]+1);

}
printf("Girilen Metnin tum harfleri buyuk yapilirsa:\n");
for(b=0;b<strlen(array);b++){
 printf("%c",toupper(array[b]));
if (array[b]=='\0')
    break;
}





return 0;
}
