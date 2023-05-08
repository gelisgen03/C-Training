#include<iostream>
using namespace std;

main (){
int j,k,l,m,n;
k=1;
m=0;
n=0;
cout<<"Sayi toplama programimiza HOSGELDINIZ. Lutfen Kac tane sayi toplamak istediginizi yaziniz"<<endl<<"=> ";	
cin>> j;
cout<<"Lutfen sayilar Girerek Programa devam ediniz"<<endl<<"******ATTENTION*****"<<endl<<"Sadece cift sayilar toplanacaktir"<<endl;

for(k;k<=j;k++){
cout<<k<<". Sayi lutfen"<<endl<<k<<". :";
cin>> l;	
if(l%2==0){
m+=l;	
}
else{
n++;	
}	
}	 
cout<<"Girdiginiz "<<n<<" tane sayi tek sayidir. Bu yuzden "<<j-n<<" adet cift sayi topandi"<<endl<<"Toplama isleminin Sonucu: "<<m<<endl<<"TESEKKURLER";
	
	
	
	
	
}
