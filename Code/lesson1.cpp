#include<stdio.h>

main() {
	
	
int k,j,i ;
 i=0 ;
  k=1 ;
   j=9 ;
    
    char a,b,c;                                                                         
     a=66;                                     
	  b=67;
       c=68 ;
	printf("Hello World\n") ;
	  printf("Hello\n") ;
    	 printf("%d ve %d ve %d ve %d\n",i,k,k,j) ;
	       printf("%c%c%c\n",a,b,c) ;
	   
	    char x , y;
	     x = 'c' ;
	      y= 'C';
	      printf("%d\n",x) ;
           printf("%d\n",y) ;	      
    	
                                                      //  ASCII Tablosuna göre 
													  //  67 numara = C numara, 99 numara = c
		
		
		/* C dilinde string veriable si yoktur. Bu yüzden Metimsel bir ifadeyi yazdýrýrken char veri tipinden yardým alýrýz (Dizi Kullanýrýz).
		char kullanýmýnda tek týrnak: char k='A' ;
		char ile strink ifade kullanýlýrken çift týrnak: char k[20]="Asim Gelisgen" ;
		                                                   printf("%s",k) ;
														                    -EKRANDA Asim Gelisgen YAZACAK- 
														                                                                                	*/		
		
		
		char z,h,t[25]="COMPUTER ENGINEERING"  ;
		  z='K'	;
		  // TEK quote koymamýzýn nedeni: bu c nereden geliyor? bunu bilmiyoruz ilk baþta tanýmlý deðil tek týrnak bize onun askýý den geldiðini söylüyor.
           h=25 ;
            printf("%d\n",z);
             printf("%c\n",h);
   			  printf("%s\n",t);
   			  
				  // BURADA 3 ÖRNEKTE MEVCUT
		 
		 
    	float number;
		 number= 1/5;
		  printf("%f\n",number);																																									  
													  
								// Degiþkende kullanýlan sayýlar tam sayý olduðu için printf 0.000 gibi bir ifade çýktý.
		float number2;
		 number2= 1.0/5 ;
		  printf("%f\n",number2) ;	
		                        // Þimdi istenilen ifade gösterildi.
		 
		 
		 double number3;
		  number3=57.0/51 ;
		   printf("%.15f\n",number3) ;                      	
							    // doublle degiskeninde print f te göstermek için L VE F harflerini ya da sadece F harfini kullanýrýz. (large float olb)
			
	    float number1;
		 number1=11.0/3;
		  printf("%f\n",number1);
		 	printf("%.3f",number1);
			 					// Ondalýk kýsmý sýnýrlamak için % nin yanýna {."sayý"} ekliyoruz.			
								// doube > float > integer > char	(sýralama)	
							    	
	
	
	return 0; 
}
