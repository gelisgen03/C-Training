#include<stdio.h>

// Kullanıcıdan alınan sayının asal mı oldugunu bul

void main(){
    int a = 0;
    
    printf("Kontrol edilecek sayi : \n=> ");
    scanf("%d",&a);
    
    for(int i = 2; i <= a/2; i++){
        if(a % i == 0){
            printf("Asal degil!\n");
            return;
        };
    };
    printf("Asal!\n");
};	
	
	
	
	
	
	
	

