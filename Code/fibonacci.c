#include<stdio.h>

// İstenilen sayıda fibonacci dizisi yazdır

int main(){
    int a, x = 1, y = 1;

    printf("Lutfen kac tane fibonacci sayisini ogrenmek istediginizi giriniz\n=>");
    scanf("%d",&a);
    
    for(int i = 1; i <= a; i++){
        if(i % 2 == 0){
            printf("%d ",x);
            x += y;
        }else{
            printf("%d ",y);
            y += x;
        };
    };
    printf("\n");
    return 0;
};