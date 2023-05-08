#include<stdio.h>

int main(){

//String yazida sen Ali yazdiktan sonra en son olarak null karakteri 3. indise kaydedilir
// ve bilgisayar bunu görünce string ifadenin bittigini anlar.

/*
char ad[3];
ad[0]='A';
ad[1]='l';
ad[2]='i';
*/


char ad[]={"Ali"}; // char ad[]="Ali" --> olabilir
printf("%s\n",ad);
printf("Ali yazdigimiz dizide 3. indis: %s\n",ad[3]);
printf("Bayt olarak boyut: %d\n",sizeof(ad)); // char her veri 1 bayt, int ve float: 4 bayt, double: 8 bayt
printf("Karakter sayisi: %d\n",strlen(ad));
char *pt; 
pt=ad;
printf("%x\n",pt); // yildiz olmassa "adres" yildiz var ise "Adresin içindeki deger".
printf("%s\n",pt);
printf("%c\n",*pt); // Esitledigimiz dizinin ilk harfini aldi *pt=A=char veriable
printf("%c\n",*(pt+1));
printf("%c\n",*(pt+2));
pt++;  // pt++ esit degil *(pt+1) "pt++ de adres silinir yeni adres yazilir" 
printf(" %c\n",*pt);
printf("------------------------\n");
char *pt2="Yusa"; // Burda artik pointer dogrudan bir diziye degil bir degere esit 
printf("%x\n",pt2);
printf("%c\n",*pt2); //ESIT
printf("%c\n",pt2[0]); //ESIT (pt2 deger degil adresi tutar.pt2[] degeri tutmus oldu)









}
