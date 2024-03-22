#include<stdio.h>

// Kullanıcıdan alınan sayıları dizide tut 
// Ve ortalamasını al

void main(){
	int toplam = 0, ortalama = 0;
	int dizi[5];	

	printf("Ortalamasi hesaplanacak 5 sayiyi giriniz : \n");

	for(int i = 0; i < 5; i++){
		printf("Lutfen %d. Sayiyi giriniz: ",i+1);
		scanf("%d",&dizi[i]);	
	};
	for(int i = 0; i < 5; i++){
		toplam += dizi[i];		
	};
	ortalama = toplam / 5;
	
	printf("Girdiginiz sayilar: %d,%d,%d,%d,%d \n",dizi[0],dizi[1],dizi[2],dizi[3],dizi[4])	;	
	printf("Girilen 5 sayinin ortalamasi: %d\n",ortalama);	
};