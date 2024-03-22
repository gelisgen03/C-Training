#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL,"Turkish");
    printf("Türkçe karakterleri yazabiliyorum artık. :)\n(ç,ö,ş,ü,ğ,İ)\n");
};