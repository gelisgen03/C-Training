#include<stdio.h>

main (){

int a,b;
printf("Lutfen Kacinci sinif oldugunuzu giriniz:\n");
printf("--> Hazirlik=0\n--> 1. Sinif=1\n--> 2. Sinif=2\n--> 3. Sinif=3\n--> 4. Sinif=4\n--> Mezun=5\n");
scanf("%d",&a);

if(a>=1&&a<=4){
 printf("Harf Notu hesaplanabilir bir siniftasiniz. Lutfen Notunuzu Giriniz.\n==> ");
 scanf("%d",&b);
 switch(b){
  case 90 ... 100 :
      printf("Harf notu: AA");
      break;
  case 80 ... 89 :
      printf("Harf Notu: BA");
      break;
  case 70 ... 79 :
      printf("Harf Notu: BB");
  case 60 ... 69 :
    printf("Harf Notu: CB");
    break;
  case 50 ... 59 :
    printf("Harf Notu: CC");
    break;
  case 40 ... 49 :
    printf("Harf Notu: CD");
    break;
  case 30 ... 39 :
    printf("Harf Notu: DD");
    break;
  case 20 ... 29 :
    printf("Harf Notu: DF");
    break;
  case 10 ... 19 :
    printf("Harf Notu: FF");
    break;
   default :
   printf("Lutfen 0-100 Tanimli araliginda bir not giriniz.");

}
}
else if(a==0)
    printf("Malesef Hazirlik sinifinda Harf notu Hesaplanamaz.");
else if(a==5)
    printf("Mezun Oldugunuz icin Harf Notu hesaplanamaz.");
else
    printf("Hangi sinifta oldugunuz tanimlanamadi. Lutfen 0-5 arasi bir sayi giriniz.");




}
