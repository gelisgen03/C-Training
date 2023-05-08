#include<stdio.h>


int fakt(int a){
int b=1,t=1;
for(;b<=a;b++){
t=t*b;	
	
}	
return t;
	
}


main(){
	
int carpim;

carpim=fakt(5);
printf("%d",carpim);	
	
} 


