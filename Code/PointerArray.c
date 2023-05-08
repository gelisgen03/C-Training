#include<stdio.h>

int main(){
int array[10]={10,20,30,40,50,60,70,80,90,100};

for(int a=0;a<10;a++){
printf("%x--> %d) %d\n",&array[a],a+1,array[a]); //%x yerine %p de yazilabilir




}




return 0;
}
