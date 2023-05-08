#include<stdio.h>

main(){
int a,b,c,d;
c=0;
printf("Oncelikle Hosgeldiniz. Bu uygulamada Girilen bir sayinin asalligini test edecegiz\nBir Sayi Giriniz Lutfen\n=> ");
 scanf("%d",&a);
 for(b=2;b<=a/2;b++){
 if(a%b!=0){
 b=b;	
 }	
 else{
c=c+1;
 	
 }	
 }
 if(c!=0){
 printf("Sayiniz Asal degil");	
 }
 else{
 printf("Sayiniz Asal");	
 }
 }	
	
	
	
	
	
	
	

