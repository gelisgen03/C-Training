#include<stdio.h>

double alan(double l){
double k;
k=3.14*l*l;

return k;
}
double cevre(double l ){
double k;
k=2*3.14*l;

return k;
}



main(){
double a,b,r;
printf("Alanini ve çevresini bulmak istediginiz dairenin yari capini giriniz");
scanf("%lf",&r);
a=alan(r);
b=cevre(r);

printf("Dairenin Alani: %lf  cevresi: %lf",a,b);



}
