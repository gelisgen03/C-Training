#include<iostream>
using namespace std;

main() {
	int l,k,j;
cout<<"Mukemmelligini ogrenmek istediginiz sayiyi giriniz lutfen"<<endl;
 cin >> k;
 l=0;
 for(j=1;j<=k/2;j++) {
 
 if(k%j==0){
 	
l=l+j;	
 }	
 else {
 l=l;	
 }	
 	
 	 	
 }	
	
if(l==k){
cout<<"Girdiginiz sayi mukemmeldir";	
}	
else {
cout<<"Girdiginiz sayi mukemmel degildir";	
}	
	
	
	
	
	
	
}
