#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void degisim(int *x,int y,int z){
int m,n;
for(m=0;m<y;m++){
x[m]=z*x[m];
}
		
}


int main(){
int a,b,c,r,*dizi;
	
printf("Kac Elemanli bir dizi istiyorsunuz: ");
scanf("%d",&a);
printf("Dizi Elemanlarini kacla carpmak istiyorsunuz: ");
scanf("%d",&c);
dizi=(int*)malloc(sizeof(int)*a);
if(dizi==NULL){
printf("Yeterli alan yok!");
exit(1);		
}
for(b=0;b<a;b++){
printf("%d. Eleman: ",b+1);
scanf("%d",&dizi[b]);
}

degisim(dizi,a,c);
printf("Degisim Fonksiyonu uygulaniyor...\nYeni Degerler:\n");
for(b=0;b<a;b++){
printf("%d. Yeni Sayi: %d\n",b+1,dizi[b]);	
}
free(dizi);

srand(time(NULL));
for(b=0;b<10;b++){
r=rand()%100	;
printf("%d. say: %d\n",b+1,r);	
	
}

return 0;	
}
