#include<stdio.h>

// Kullanıcıdan alınan n sayısı ile
// 1'den 1/n'e kadar olan toplamı bul. 

void main(){
    int N = 0;
    float toplam = 0.0;

    printf("N = ");
    scanf("%d",&N);

    for(int i = 1; i <= N; i++) {
        toplam += (1.0 / i);
    };
    printf("1'den 1/%d'a kadar olan sayilarin toplami: %f\n",N,toplam);
};