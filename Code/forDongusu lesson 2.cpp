// c++ ile

#include<iostream>
#include<stdio.h>
using namespace std ;
main(){

int i,j,k;
j=0;
for(i=1;i<=10;i++) {

cout <<"Lutfen "<< i<<". sayiyi giriniz"<<endl<<i<<". : ";

cin >>k;

j=k+j;
cout<<"Ara Toplam: "<<j<<endl;	
}
cout<<"Girilen tum 10 sayinin toplami: "<<j;
}

