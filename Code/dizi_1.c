#include<stdio.h>

// Dizelerin elemanlari tek tur degisken alabilir.
// Asagida dizilerin ifade bicimleri verilmistir.
// 
// Not : Dizilerdeki elemanlarin sira numarasi 0 dan baslar.

void main(){
    int array1[10];

    int array2[]= {10,20,30,40,50};
    
    int array3[10]= {1,2,3,4,5}; // diger kalan 5 indis 0 olarak atanir.

    array1[0]=100; // tanimlanmamis dizilerin indis numaralarina sayi atamasi
    array1[9]=200;

    printf("%d\n",array3[3]);
};