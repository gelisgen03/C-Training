#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void dosya(char a[],int b,int c){
	
FILE *dosya;	
dosya=fopen("C:\\Users\\gelis\\Desktop\\functionFile.txt","w+");

if(dosya==NULL){
printf("Dosya acilamadi!!");
exit(1);	
	
}
fprintf(dosya,"%s %d %d",a,b,c);


fclose(dosya);
}





int main(){
int yas;
int sinif;
char ad[50];

printf("Ogrenci Adi: ");
scanf("%s",ad);	
printf("Ogrenci Yasi: ");
scanf("%d",&yas);	
printf("Ogrenci Sinifi: ");
scanf("%d",&sinif);	
dosya(ad,yas,sinif);
	
	
return 0;	
}
