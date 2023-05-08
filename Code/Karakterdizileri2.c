#include<stdio.h>

main(){
int i;
char array[10][100];

for(i=0;i<5;i++){
printf("Kaydetmek istediginiz %d. kelimeyi giriniz: ",i+1);
gets(array[i]);
}

for(i=0;i<5;i++){
printf("%d) %s\n",i+1,array[i]);
}




}
