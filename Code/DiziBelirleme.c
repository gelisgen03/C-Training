#include<stdio.h>

main() {
int a,b,total;
printf("Kac Adet sayi girmek istiyorsunuz ? ");
scanf("%d",&a);

int array[a];
for(b=0;b<a;b++){
printf("%d. Sayiyi giriniz: ",b+1);
scanf("%d",&array[b]);

}
printf("Girilen Sayilar:\n");
for(b=0;b<a;b++){
printf("%d) %d\n",b+1,array[b]);
total+=array[b] ;


}
printf("Girilen Tum sayilarin toplami: %d",total);
}
