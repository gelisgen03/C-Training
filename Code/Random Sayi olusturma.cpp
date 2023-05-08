#include<stdio.h>
#include<stdlib.h>
#include<cstdlib>  
#include<locale>  

main() {
int a,b,c;
srand(time(NULL));
a=rand()%100+1;
c=1;


printf("Sayi tahmin Oyunumuza hos geldiniz.0 ile 100 arasindaki bir sayiyi tahmin edileceksiniz.\nIlk sayiyi girerek baslayiniz lutfen\n");

while(b!=a&&c<=10){
c++;
scanf("%d",&b);
if(a<b){
printf("Lutfen daha kucuk bir sayi giriz\n")	;	
}	
else if(b<a){
printf("Lutfen daha buyuk bir sayi giriz\n")	;
}
	
}

if(b==a){
printf("Tebrikler Dogru cevap %d",a);		
}
else {
printf("Uzgunuz baska hakkiniz kalmadi");	
	
}




		
	
	
	
	
	
}
