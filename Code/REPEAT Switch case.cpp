#include<stdio.h>

main(){
int c,d,e;

printf("Girilen Yas araliginin hangi insan tipine ait olduðunu gosteren programimiza Hos Geldiniz\nLutfen Bir yas aralýgý seciniz\n*****YAS ARALIGLARI*****");
 printf("\n1) 0 - 18\n2) 18 - 50\n3) 50 - ++\n");
  scanf("%d",&d);
   
switch(d) {
 case 1: {
 printf("Girilen 0-18 yas araligi cocukluk dönemini kapsamaktadir");	
 break; 
 }  
 case 2: {
 printf("Girilen 18-50 yas araligi genclik ve yetisginlik dönemini kapsamaktadir");	
 break;
 }
 case 3: {
 printf("Girilen 50-++ yas araligi yaslilik dönemini kapsamaktadir");	
 break;
 }
 default : {
 printf("Lütfen Belirlenen aralikta islem sayisi giriniz ");
 break;
}
 	
}
 
}
