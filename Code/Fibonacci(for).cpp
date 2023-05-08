#include<stdio.h>

main(){
int a,b,c,d,f,g;

printf("Lutfen kac tane fibonacci sayisini ogrenmek istediginizi giriniz\n=>");
 scanf("%d",&b);
 c=1;
 d=1;
 f=2;
 printf("1 1 2");
 
for(a=1;a<=b-3;a++){
g=f+d;
d=f;
f=g;
printf(" %d",f);	
	
}
	
	
	
	
	
	
	
	
}


