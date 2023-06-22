#include<stdio.h>
#include<stdlib.h>

int main(int argc,char*argv[]){
	
FILE *dosya;
int a;
/*
dosya=fopen("C:\\Users\\gelis\\Desktop\\But_Deneme.txt","w");
if(dosya==NULL)
 printf("Dosya acilamadi");
 
for(int i=0;i<10;i++){
printf("%d. sayi: ",i+1);
scanf("%d",&a);
fprintf(dosya,"%d\n",a);	
*/

/*	
dosya=fopen("C:\\Users\\gelis\\Desktop\\But_Deneme.txt","r");	

if(dosya==NULL)
 printf("Dosya acilamadi");
 
while(fscanf(dosya,"%d",&a)!=EOF)
	printf("%d\n",a);	
*/

dosya=fopen("C:\\Users\\gelis\\Desktop\\But_Denemes.txt","w");
 if(dosya==NULL)
 printf("Dosya Acilamadii!!!");
 
 for(int i=0;i<5;i++){
 	printf("%d. Sayi: ",i+1);
 	scanf("%d",&a);
 	fprintf(dosya,"%d\n",a);
 }

fclose(dosya);
	
	return 0;
}
