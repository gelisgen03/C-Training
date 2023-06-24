#include<stdio.h>

int main(){
	int satir;

	printf("Kac satirlik bir parelel kenar istiyorsunuz ?\n=> ");
	scanf("%d",&satir);

	for(int i = 0; i < satir; i++){
		for(int j = 0; j < i; j++){
			printf(" ");
		};
		for(int j = 0; j < satir; j++){
			printf("**");
		};
		printf("\n");
		};
	return 0;
};