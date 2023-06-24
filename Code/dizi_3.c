#include<stdio.h>

// Kullanıcıdan alınan uzunlukta bir dizi olustur
// Ve kullanıcıdan alınan değerlerle bu diziyi doldur

void main(){
    int uzunluk = 0;

    printf("Kac Adet sayi girmek istiyorsunuz ? ");
    scanf("%d",&uzunluk);

    int array[uzunluk];

    for(int y = 0; y < uzunluk; y++){
        printf("%d. sayiyi giriniz ",y+1);
        scanf("%d",&array[y]);
    };
    printf("Olusturulan dizi :\n");
    for(int y = 0; y < 3; y++){
        printf("%d ",array[y]);
    };
    printf("\n");
};