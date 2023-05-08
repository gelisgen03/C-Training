#include<stdio.h>


int main(){

int a,b,c;
int array[8]={10,9,60,50,15,25,5,1};

for(a=0;a<8;a++){

for(b=0;b<8;b++){
if(array[a]>array[b])
c=array[a];
array[a]=array[b];
array[b]=c;

}

}
for(a=0;a<8;a++)
printf("%d\n",array[a])    ;


return 0;
}














