#include<stdio.h>
#include<stdlib.h>
#include<string.h>


typedef struct ogrenci{
char ad[50];
char soyad[50];
int numara;
struct notlar{
int vize[2];
int final;	
}notlar;

}ogrenci; 


int main(){

FILE *dosya;

dosya=fopen("final.txt","w+");
if(dosya==NULL){
printf("Dosya acilamadi");
exit(1);	
}
ogrenci ogr1;
strcpy(ogr1.ad,"Asim");
strcpy(ogr1.soyad,"Gelisgen");
ogr1.numara=987;
ogr1.notlar.vize[1]=60;
ogr1.notlar.final=100;

fprintf(dosya,"%s %s\nNumara: %d\nVize: %d\nFinal: %d ",ogr1.ad,ogr1.soyad,ogr1.numara,ogr1.notlar.vize[1],ogr1.notlar.final);	
	
fclose(dosya);	
	
return 0;	
}
