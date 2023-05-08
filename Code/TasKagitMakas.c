#include<stdio.h>
#include<stdlib.h>

int main(){
int a,c;
char b[10][10]={"Tas","Makas","Kagit"};
char array[10][10];
printf("3 Rauntluk Tas Kagit Makas oyunumuza Hos geldiniz.\n");


for(c=1;c<4;c++){
printf("%d. Raunt\nTas mi? Kagit mi? Makas mi?\n",c);
gets(array[c]);
srand(time(NULL));
a=rand()%(2+1-0)+0; //Spesifik bir aralikta sayi uretme : rand()%(max+1-min)+min number
printf("%s\n",b[a]);
}







}
