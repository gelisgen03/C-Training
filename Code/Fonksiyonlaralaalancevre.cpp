#include<stdio.h>


// Karenin Alani
double ka(double a){
double c;
c=a*a;
return c;	
}

// Karenin Cevresi
double kc(double a){
double c;
c=4*a;	
return c;	
}

// Ucgenin Alani
double ua(double a,double b){
double c;
c=a*b/2;
return c;	
}

// Ucgenin Cevresi
double uc(double a,double b,double c){
double d;
d=a+b+c;
return d;	
}

// Dairenin Cevresi
double dc(double a){
double c;
c=2*3.14*a;
return c;	
}

// Dairenin Alani
double da(double a){
double c;
c=3.14*a*a;
return c;	
}



main(){
int a;
double y,z,p;

printf("***LUTFEN GERCEKLESTIRMEK ISTEDIGINIZ ISLEMIN NUMARASINI SECINIZ***\n");
printf("1) Kare ALAN Bulma\n2) Kare CEVRE bulma\n3) Ucgen ALAN bulma\n4) Ucgen CEVRE bulma\n5) Daire CEVRE bulma\n6) Daire ALAN bulma\n=> ");
scanf("%d",&a);

switch(a){
	case 1:
	 printf("--Kare ALAN Bulma--\nKarenin alani= a x a\nKarenin bir kenarini giriniz\n=> : ");
     scanf("%lf",&y);
	 printf("%g x %g = %g",y,y,ka(y))  ;
	  break;
	
	case 2:
	 printf("--Kare CEVRE Bulma--\nKarenin cevresi= 4 x a\nKarenin bir kenarini giriniz:\n=> ");
     scanf("%lf",&y);
	 printf("%g + %g + %g + %g = %g",y,y,y,y,kc(y)) ;
	  break;
	
	case 3:
	 printf("--Ucgen ALAN Bulma--\nUcgenin alani= Taban x Yüksekik / 2\nUcgenin taban ve yukseklik degerinlerini giriniz:\n=>Taban: ");
     scanf("%lf",&y);
     printf("==>Yukseklik: ");
     scanf("%lf",&z);
	 printf("%g x %g / 2 = %g",y,z,ua(y,z)) ;  
	  break;
	
	case 4:
	 printf("--Ucgen CEVRE Bulma--\nUcgenin cevresi= 3 kenarin toplami\nUcgenin kenarlarini giriniz:\n=>1. Kenar: ");
     scanf("%lf",&y);
     printf("=>2. Kenar: ");
     scanf("%lf",&z);
     printf("=>3. Kenar: ");
     scanf("%lf",&p);
	 printf("%g + %g + %g = %g",y,z,p,uc(y,z,p)); 
	  break;	
	
	case 5:
	 printf("--Daire CEVRE Bulma--\nDairenin cevresi= 2 x pi x r\nDairenin Yaricapini giriniz:\n=> ");
     scanf("%lf",&y);
	 printf("2 x 3.14 x %g = %g",y,dc(y));   
	  break;
	
	case 6:
     printf("--Daire ALAN Bulma--\nDairenin Alani= pi x r x r\nDairenin Yaricapini giriniz:\n=> ");
     scanf("%lf",&y);
	 printf("3.14 x %g x %g = %g",y,y,da(y));  
	  break;
	
	default:
	printf("Gecersiz islem numarasi girdiniz! Lutfen 1-6 arasinda bir rakam giriniz. ")	;
	
}	

return 0;	
		
}
