#include<stdio.h>

main() {

int a,b,c;

printf("Lutfen tekligini ya da ciftligini ogrenmek istediginiz sayiyi giriniz\n");
 scanf("%d",&a);
 
if(a%2==0) {
printf("Girdiginiz bu %d sayisi cifttir",a);	
}

else if(a<0) {
printf("Girdiginiz %d gibi negatif bir sayinin tek ya da ciftliginden bahsedilemez. Lutfen pozitif bir sayi girerek devam edin",a);
	
}
else if(a%2!=0){
printf("Girdiginiz bu %d sayisi tektir",a);		
}
















}
