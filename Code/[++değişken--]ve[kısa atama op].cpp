#include<stdio.h>

/* önden ve arkadan arttýrma operatörü

deðiþken++ iþlem gerçekleþtikten sonra 1 arttýrma
deðiþken-- iþlem gerçekleþtikten sonra 1 azaltma
--deðiþken iþlem gerçekleþmeden 1 azaltma 
++deðiþken iþlem gerçekleþmeden sonra 1 arttýrma

*/
main() {
int a=1,b=12;
  a+=10;
   printf("%d\n",a);
    b++;
    printf("%d\n",b);
      
int c,d;
c=5;
d=c++;
 printf("%d\n",d);
  printf("%d\n",c);
  
  // + ,önde olduðu için önce yapýlmasý gereken iþlemi gerçekleþtirdi sonra artmasý gereken deðeri arttýrdý.
  int x,y,z;
  x=20;
  y=5;
  z=x++ +y;
  printf("%d\n",z) ; 
  printf("%d\n",x);

int e,n,m;
e=20;
n=5;
m= --e+n;
//önce 1 azaltma iþlemi gerçekleþtirildi daha sonra diðer iþlem
 printf("%d\n",m);
 printf("%d\n",n);

//----------------------------------------------------------------------------------------------//

 /* ARÝTMATÝKSEL ATAMA OPERATÖRLERÝ
TOPLAYARAK atama: (+=)
ÇIKARARAK atama: (-=)
ÇARPARAK atama: (*=)
BÖLEREK atama: (/0=)
*/


int k,l,p,q;
k=5;
l=5;
p=5;
q=5;
k+=l;
// Uzun Yol: a=a+l
l-=10;
p*=5;
q/=5;
 printf("%d,%d,%d,%d",k,l,p,q);
 
        
}










	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	






























