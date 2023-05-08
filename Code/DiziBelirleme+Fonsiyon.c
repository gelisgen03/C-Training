#include<stdio.h>

int f(int a[],int b){
int c=0,total=0;
for(c;c<b;c++){
total+=a[c];
}
return total;
}



int main(){
char ad[10][10];
int a,b,c;
printf("Oncelikle isminizi ogrenebilir miyiz ?");
scanf("%s",&ad[0]);
printf("%s bey/hanim Kac Sayi Toplamak istiyorsunuz ?",ad[0]);
scanf("%d",&a);
int array[a];

for(b=0;b<a;b++){
printf("%d. Sayi: ",b+1);
scanf("%d",&array[b]);
}
c=f(array,a);
printf("TOPLAM: %d",c);














return 0;
}
