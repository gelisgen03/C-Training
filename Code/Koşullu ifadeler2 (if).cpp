#include<stdio.h>

main() {
int a;

printf("Lutfen Bir Not giriniz\n");
 scanf("%d",&a);	
 
if(a<=100&&a>=85){
	
printf("Bu notun degeri: 5");	
			
}
else if(a<=84&&a>=75){
	
printf("Bu notun degeri: 4");	
			
}
else if(a<=74&&a>=50){
	
printf("Bu notun degeri: 3");	
			
}
else if(a<=49&&a>=30){
	
printf("Bu notun degeri: 2");	
			
}
else if(a<=29&&a>=1){
	
printf("Bu notun degeri: 1");	
			
}
else if(a==0){
	
printf("Bu notun degeri: 0");	
			
}
else if(a<0||a>100){
	
printf("Boyle bir not bulunmamaktadir!");	
			
}

//BÝR ALTERNATÝF: BU kýsým if koþullarýnýn en sonuncusunun yanýþ kýsmýdýr. Yani orayýda boþ býrakmýyoruz. 
else {
	printf("Boyle bir sayi bulunmamaktadir!");
	
}



  
	
	
	
	
	
	
	
	
	
	
	
}
