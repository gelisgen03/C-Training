#include<stdio.h>


int main(){
int a,b,topla;
int array[5];	
printf("5 Sayi giriniz ve bu sayilarin ortalmasini ogreniniz\n");
for(a=0;a<5;a++){
printf("Lutfen %d. Sayiyi giriniz: ",a+1);
scanf("%d",&array[a]);	
}	
for(a=0;a<5;a++){
b+=array[a];		
}
topla=b/5;
printf("Girdiginiz sirasiyla sayilar: %d,%d,%d,%d,%d \n",array[0],array[1],array[2],array[3],array[4])	;	
printf("Girilrn 5 sayinin ortalamasi: %d",topla);	
	return 0;
}


