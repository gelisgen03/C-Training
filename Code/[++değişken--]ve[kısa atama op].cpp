#include<stdio.h>

/* �nden ve arkadan artt�rma operat�r�

de�i�ken++ i�lem ger�ekle�tikten sonra 1 artt�rma
de�i�ken-- i�lem ger�ekle�tikten sonra 1 azaltma
--de�i�ken i�lem ger�ekle�meden 1 azaltma 
++de�i�ken i�lem ger�ekle�meden sonra 1 artt�rma

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
  
  // + ,�nde oldu�u i�in �nce yap�lmas� gereken i�lemi ger�ekle�tirdi sonra artmas� gereken de�eri artt�rd�.
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
//�nce 1 azaltma i�lemi ger�ekle�tirildi daha sonra di�er i�lem
 printf("%d\n",m);
 printf("%d\n",n);

//----------------------------------------------------------------------------------------------//

 /* AR�TMAT�KSEL ATAMA OPERAT�RLER�
TOPLAYARAK atama: (+=)
�IKARARAK atama: (-=)
�ARPARAK atama: (*=)
B�LEREK atama: (/0=)
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

