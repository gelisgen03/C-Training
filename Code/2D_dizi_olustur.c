#include<stdio.h>

// Kullanıcıdan alınan sayılarla 3x3 boyutunda 2D matris olustur

void main(){
    int array[3][3];

    for(int y = 0; y < 3; y++){
        for(int x = 0; x < 3; x++){
            printf("%d. Satirin %d. sayisini giriniz ",y+1,x+1);
            scanf("%d",&array[y][x]);
        };
    };
    printf("Olusturulan 2D matris :\n");
    for(int y = 0; y < 3; y++){
        for(int x = 0; x < 3; x++){
            printf("%d ",array[y][x]);
        };
        printf("\n");
    };
};
