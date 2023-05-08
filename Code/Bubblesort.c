#include<stdio.h>

int main(){
int a,b,c,d=1,f;
printf("Sayi Siralma Programimiza hos geldiniz. Oncelikle kac sayi siralamak istediginizi giriniz ");
scanf("%d",&f);
int array[f];
for(a=0;a<f;a++){
printf("%d. Sayiyi giriniz: ",a+1);
scanf("%d",&array[a]);
}

while(d==1){
d=0;
for(a=0;a<f-1;++a){

if(array[a]>array[a+1]){
c=array[a+1];
array[a+1]=array[a];
array[a]=c;
d=1;
}
}
}
for(a=0;a<f;a++)
printf("%d) %d\n",a+1,array[a]);

return 0;
}












