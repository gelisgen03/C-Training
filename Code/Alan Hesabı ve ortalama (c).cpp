#include<stdio.h>

 main() {
 
 float a,b,alan,cevre ;
 	
printf("Dortgenin uzun kenarini giriniz\n");
 scanf("%f",&a);
  printf("Dortgenin kisa kenarini giriniz\n");
   scanf("%f",&b);
    alan=a*b;
    cevre= (2*a)+(2*b);
	 printf("Dortgenin alani:");
	 printf("%f\n",alan);
	  printf("Dortgenin cevresi:");
	  printf("%f\n",cevre); 	
 
 	//----------------------------------------------\\
 	
 int x,y,z,total;
  
  printf("1. Sayiyi giriniz\n");
   scanf("%d",&x);
  	printf("2. Sayiyi giriniz\n");
 	 scanf("%d",&y);
 	  printf("3. Sayiyi giriniz\n");
 	   scanf("%d",&z);
  	   
 total= (x+y+z)/3;
  
  printf("Girdiginiz 3 sayinin ortalamasi: %d",total); 
 	
 	
 	
 	
 }
