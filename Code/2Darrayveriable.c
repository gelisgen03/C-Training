#include<stdio.h>


int main(){

int array[10][10];
int a,b;
for(b=0;b<3;b++){

for(a=0;a<4;a++){
printf("%d. Satirin %d. sayisini giriniz ",b+1,a+1);
scanf("%d",&array[b][a]);
}

}
printf("Girilen sayilar sirasiyle:\n");
for(b=0;b<3;b++){

for(a=0;a<4;a++){
printf("%d ",array[b][a]);

}
printf("\n");
}
}
