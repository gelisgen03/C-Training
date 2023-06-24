#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct teknofest_rapor{
    struct yazilim{
        char yazacak[50];
        int sayfa;
    }yazilim;

    struct mekanik{
        char yazacak[50];
        int sayfa;
    }mekanik;

    struct elektronik{
        char yazacak[50];
        int sayfa;
    }elektronik;
}teknofest_rapor;

int main(){
    teknofest_rapor* rapor;

    rapor = (teknofest_rapor*)malloc(sizeof(teknofest_rapor));

    rapor->mekanik.sayfa=50;
    strcpy(rapor->yazilim.yazacak, "Yunus");

    printf("%d\n",rapor->mekanik.sayfa);
    printf("%s\n",rapor->yazilim.yazacak);

    free(rapor);

    return 0;
}
