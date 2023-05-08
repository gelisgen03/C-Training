#include<stdio.h>
#include<math.h>

main()  {
	
int a;
int b;
int islem1, islem2, islem3, islem5,islem6,islem7;	
float islem4,islem8,islem9;
printf("a Sayisini giriniz\n");
scanf("%d",&a);
printf("b sayisini giriniz\n");
scanf("%d",&b);

islem1= a+b;
 islem2= a-b;
  islem3= a*b;
   islem4= float(a)/b;
    islem5= a%b; 
     islem6=float(a)/b*b+5/b;
      islem7= float(a)/(b+8)-10;
       islem8= pow(a,b);
        islem9= sqrt(a);
  
printf("%d:a+b\n",islem1) ; 
printf("%d:a-b\n",islem2) ;
printf("%d:a*b\n",islem3) ;   
 printf("%f:a/b\n",islem4) ;
 printf("%d:a%b\n",islem5) ;
 printf("%d:a/b*b+5/b\n",islem6) ;
 printf("%d:a/(b+8)-10:\n",islem7) ;
 printf("%f:aussub\n",islem8) ;
 printf("%f:asayisininkarekoku\n",islem9) ; 
 

	
	
	
   return 0	;
}
  
