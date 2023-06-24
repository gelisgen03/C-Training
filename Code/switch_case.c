#include<stdio.h>

void main(){
	int sinif, not;
	printf("Lutfen Kacinci sinif oldugunuzu giriniz:\n");
	printf("--> Hazirlik=0\n--> 1. Sinif=1\n--> 2. Sinif=2\n--> 3. Sinif=3\n--> 4. Sinif=4\n--> Mezun=5\n");
	scanf("%d",&sinif);

	if(sinif >= 1 && sinif <= 4){
		printf("Harf Notu hesaplanabilir bir siniftasiniz. Lutfen Notunuzu Giriniz.\n==> ");
		scanf("%d",&not);
		switch(not){
			case 90 ... 100 :
				printf("Harf notu: AA");
				break;
			case 80 ... 89 :
				printf("Harf Notu: BA");
				break;
			case 70 ... 79 :
				printf("Harf Notu: BB");
				break;
			case 60 ... 69 :
				printf("Harf Notu: CB");
				break;
			case 50 ... 59 :
				printf("Harf Notu: CC");
				break;
			case 40 ... 49 :
				printf("Harf Notu: CD");
				break;
			case 30 ... 39 :
				printf("Harf Notu: DD");
				break;
			case 20 ... 29 :
				printf("Harf Notu: DF");
				break;
			case 10 ... 19 :
				printf("Harf Notu: FF");
				break;
			default :
				printf("Lutfen 0-100 araliginda bir not giriniz.");
		};
	}else if(sinif == 0)
		printf("Malesef Hazirlik sinifinda Harf notu Hesaplanamaz.");
	else if(sinif == 5)
		printf("Mezun oldugunuz icin Harf Notu hesaplanamaz.");
	else
		printf("Hangi sinifta oldugunuz tanimlanamadi. Lutfen 0-5 arasi bir sayi giriniz.");
	printf("\n");
}