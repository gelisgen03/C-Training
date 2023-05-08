#include<stdio.h>
#include<math.h>
#include<locale.h>
main() {

setlocale(LC_ALL,"Turkish");	
printf("Bildiðiniz gibi enflasyanla mücadele kapsamýnda temel gýda ürünlerindeki KDV miktarý YÜZDE 8 oranýndan YÜZDE 1 oranýna  düþürüldü.Bu deðiþiklikten meydana gelen verileri inceleyelim\n");

float a,b,c,d,f;

printf("Lütfen Bir temel gýda ürününün yeni düzenlemeden önceki market fiyatýný giriniz\n");
 scanf("%f",&a);
  b=a*8/100;
  c=a*7/100;
  d=a/100;
  f=a-c;
printf("Yeni Düzenlemeye göre bu ürünün yeni fiyatý: %f\n", f);
printf("Yeni Düzenlemeye göre bu üründeki net KDV deðeri: %f\n ", d);   
printf("Yeni Düzenlemeye göre bu üründen net kazancýnýz: %f\n", c );




	
	
	
	
	
	
	
	
}
