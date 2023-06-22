#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int skor = 0,sonuc = 0, secim = 0, oyuncu_secim = 0;
    int max = 2,min = 0;

    for(int i = 1 ; i < 4 ; i++){
        printf("\n%d. Tur\nTas[0] Kagit[1] Makas[2]\n",i);
        scanf(" %d",&oyuncu_secim);

        srand(time(NULL));

        secim = rand() % (max + 1 - min) + min; 

        sonuc = abs(oyuncu_secim - secim);

        if(sonuc == 0){
            printf("Berabere");
        }
        else if(sonuc == 1 || sonuc == -2){
            printf("Bu turu aldın!");
            skor += 1;
        }
        else if(sonuc == -1 || sonuc == 2){
            printf("Bu turu kaybettin!");
            skor -= 1;
        };
    };
    printf("\nSkorun : %d\n",skor);
};
