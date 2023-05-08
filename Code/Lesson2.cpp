#include<stdio.h>
 main() {
 	
 int k;
  char j;
   char h[20]	;
    float g; 
     double f;
       

   printf("Bir karakter giriniz\n");
    printf("\a");
    scanf("%c",&j);
	 printf("Bir metin giriniz\n");
	  scanf("%s",&h);
	   printf("Bir ondalikli sayi giriniz lütfen\n");  
        scanf("%f",&g);   
        // Görüldüðü üzere scanf bir veri alma operatörüdür ve bu fonksiyonda printf den farklý olarak "&" iþareti yer alýr. Bunun sebebi bu iþaret vasýtasýyla ram bellek...
        //...üzerinde belirlenen degiþkenin yeri bulunur (pointer). Önceden belirlediðimiz deðiþkebleri scanf sayesinde kendi istediðimiz terimlere tanýmladýk. þimdi ise bunlari yazdiralým.
  
 
   printf("%c\n",j);
    printf("%s\n",h);
	 printf("%f\n",g);
    
   
 	
 	
 }
