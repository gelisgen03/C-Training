#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){
	
 int *a,b,i,e;
    printf("Kac elemanli bir dizi olusturmak istiyorsun: ");
    scanf("%d",&b);

    //a=(int*)malloc(sizeof(int)*b);
    a=(int*)calloc(b,sizeof(int));
    for(i=0;i<b;i++){
        printf("%d. Sayi: ",i+1);
        scanf("%d",&a[i]);


    }
    printf("\n");
    for(i=0;i<b;i++)
        printf("%d. Sayi: %d\n",i+1,a[i]);

   // free(&a[0]);
    printf("Loading...");
    for(i=0;i<5;i++){
        printf(".");
        //sleep(1);
    }
        printf("\n");
        for(i=0;i<b;i++)
        printf("%d. Sayi: %d\n",i+1,a[i]);

        printf("Mevcut diziyi nekadar arttirmak istiyorsunuz ?");
        scanf("%d",&e);

     a=(int*)realloc(a,sizeof(int)*(b+e));

     for(i=b;i<e+b;i++){
        printf("%d. Sayi: ",i+1);
        scanf("%d",&a[i]);
     }
     printf("\n");
    for(i=0;i<b+e;i++)
        printf("%d. Sayi: %d\n",i+1,a[i]);	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
