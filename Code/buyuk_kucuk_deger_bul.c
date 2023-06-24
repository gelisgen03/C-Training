#include<stdio.h>

// Kullanıcıdan alınan 3 sayının en büyük ve en küçük olanını bul

int en_buyuk(int x, int y, int z){
    if(x > y && x > z){    
        return x;
    }
    else if(y > z){
        return y;
    }
    return z;
};

int en_kucuk(int x, int y, int z){
    if(x < y && x < z){
        return x;
    }
    else if(y < z){
        return y;
    }
    return z;
};

void main() {
    int a, b, c;

    printf("1. Sayiyi giriniz : ");
    scanf("%d",&a);

    printf("2. Sayiyi giriniz : ");
    scanf("%d",&b);

    printf("3. Sayiyi giriniz : ");
    scanf("%d",&c);

    printf("Girilen en buyuk sayi : %d\n",en_buyuk(a,b,c));
    printf("Girilen en kucuk sayi : %d\n",en_kucuk(a,b,c));
};