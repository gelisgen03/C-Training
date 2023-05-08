#include<stdio.h>
#include<locale.h>

main()  {
setlocale(LC_ALL,"Turkish")	;
int a,b,c ;
 printf("Lutfen 3 adet sayi giriniz\n");
  printf("1: ");	
   scanf("%d",&a);
    printf("2: ");
	 scanf("%d",&b);
	  printf("3: ");
	   scanf("%d",&c);
	   
if(a>b&&a>c) {
printf("1. girilen sayi en buyuktur (%d)",a);			
}	   
else if(b>a&&b>c){
printf("2. girilen sayi en buyuktur (%d)",b);		
}
else {
printf("3. girilen sayi en buyuktur (%d)",c);		
	
}	   
	
	
}
