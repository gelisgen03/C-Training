#include<stdint.h>

int eb(int x,int y, int z){
int buyuk;

if(x>y&x>z){
buyuk=x;
}
else if(y>x&y>z){
buyuk=y;
}
else {
buyuk=z;    
}

return buyuk;
}
int ek(int x,int y, int z){
int kucuk;

if(x<y&x<z){
kucuk=x;
}
else if(y<x&y<z){
kucuk=y;
}
else {
kucuk=z;    
}

return kucuk;
}


main() {
int a,b,c,d;
printf("1. Sayiyigiriniz ");
scanf("%d",&a);
printf("2. Sayiyigiriniz ");
scanf("%d",&b);
printf("3. Sayiyigiriniz ");
scanf("%d",&c);

d=eb(a,b,c)-ek(a,b,c);

printf("Girilen 3 sayidan en kucugu ile en buyugu arasindaki fark= %d",d);


}