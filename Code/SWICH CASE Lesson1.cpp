#include<stdio.h>
 
 
 main(){
 	
int number1,number2,process,a,b,c,d,e,f;
 	
 printf("2 Islemli Hesap Makinamiza Hos Geldiniz\n\n");
  printf("Lutfen ilk sayiyi giriniz\n1. : ");
   scanf("%d",&number1);
    printf("Lutfen diger sayiyi giriniz\n2. : ") 	;
     scanf("%d",&number2);
 	  printf("Lutfen gerceklestirmek istediginiz islemi seciniz\n*****ISLEMLER*****\n");
 	   printf("1) TOPLAMA\n2) CIKARMA\n3) CARPMA\n4) BOLME\n5) BIRBIRINE BOLUMUNDEN KALAN\n6) ORTALAMA ALMA\nIslem Numarasi :");
 	    scanf("%d",&process);

if(!(process<7)||!(process>0)) {
printf("Boyle Bir islem Numarasi Bulunmamaktadir. Lutfen 1-6 Araliginda Bir Sayi Giriniz")	;
}


switch(process){

	case 1:{
	a=number1+number2;
	printf("%d + %d = %d",number1,number2,a);	
    break;
    }
    case 2: {
    b=number1-number2;
	printf("%d - %d = %d",number1,number2,b);	
	break;
    }
    case 3: {
	c=number1*number2;
	printf("%d x %d = %d",number1,number2,c);	
	break;
    }
    case 4: {
	d=number1/number2;
	printf("%d / %d = %d,...",number1,number2,d);
	break;
	}
	case 5: {
	e=number1 % number2;
	printf("%d nin %d ile bolumunden kalan = %d",number1,number2,e);	
	break;
	}
	case 6: {
	f=(number1+number2)/2;
	printf("(%d + %d) / 2 = %d",number1,number2,f);
	break;
	}
    default  :{
	printf(" //Hatali islem yaptiniz :( ");
	
	}
    
    
} 	    
 	   
 	  
 	
 	
 	
 	
 	
 	
 }
