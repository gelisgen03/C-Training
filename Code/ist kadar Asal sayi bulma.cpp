#include<iostream>
using namespace std;

main() {

int a,b,c,d,e,f;
f=0;
c=3;
d=0;
cout<< "Kac adet asal sayi istiyorsunuz"<<endl;
cin>>a;
cout<<"2 ";
while(a!=f){
	for(b=2;b<c;b++){
		if(c%b==0){
			d=1	;		
		}	
	}
	if(d==0){
	cout<<c<<" ";
	f++;
	c=c+1;		
	}
	else{
	c=c+1;	
	}

}	
}

	
	
	
	

