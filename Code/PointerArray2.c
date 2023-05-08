#include<stdio.h>

int main(){

int array[10]={1,2,3,4,5,6,7,8,9,10};
int *pt;
pt=array;
for(int a=0;a<10;a++){
 // printf("%d\n",pt[a]); <<<Bir alternatif>>>
 printf("%x --> %d\n",&pt[a],*pt); //Burada pt yi 1 arttirmak aslinda dizinin ilk indisini ifade eden pt ye +4 bayt ekleyerek bir sonraki indise gecmesini saglar
pt+=1;
}







}
