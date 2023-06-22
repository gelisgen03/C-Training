#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// sleep fonksiyonunu kullanarak bir saat yap

void main(){
    for(int saat = 0; saat < 24; saat++){
        for(int dakika = 0; dakika < 60; dakika++){
            for(int saniye = 0; saniye < 60; saniye++){
                printf("   -> %02d:%02d:%02d <-\r",saat, dakika, saniye);
                fflush(stdout);
                sleep(1);
            };
        };
    };
};