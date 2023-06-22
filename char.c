#include<stdio.h>
#include<string.h>
#include<ctype.h>


void main(){
	char c;

	c = 'c'; // Normal char ataması
	printf("%c\n",c);

	c = 99; // ASCII tablosu değeri kullanarak char atama
	printf("%c\n",c);

	char metin[10] = {'M','e','r','h','a','b','a','!','\n','\0'};
	printf("%s",metin);

	char metin2[10]= "Merhaba!\n";
	printf("%s",metin2);

	printf("%s",metin+4); // İlk 4 harfi atlayarak yaz

	metin[3] = 'O';	// 4.Harfi değiştir
	printf("%c\n",metin[3]);
	
	printf("%s",metin);

	char * p;

	p = metin;

	printf("%p\n",p); // metin değişkenimizin adresi

	printf("%s",p); // Tüm harfleri yazdır

 	printf("%c\n",*p); // Sadece ilk harfi yazdır

 	printf("%c\n",*(p + 3)); // 4. harfi yazdır

	printf("%c\n",p[3]); // 4. harfi yazdır

	printf("%zu\n",strlen(metin));

	for(int i = 0; i < strlen(metin); i++){
		printf("%c",toupper(metin[i])); // Büyük harflerle yazdır
	};

	puts(metin);
};