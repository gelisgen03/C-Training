#include<stdio.h>
#include<stdlib.h>


int main(){
	FILE* dosya;
	char b[50];
	
	dosya=fopen("denme.txt","r");
	
	if(dosya==NULL){
		printf("Dosya Acilamadi!");
		
	}	
	fputs("hgcfxkkljl",dosya);
	for(int i=0;i<50;i++){
	
	
		b[i]=fgetc(dosya);
			if(fgetc(dosya)==EOF)
				fclose(dosya);
}
	printf("%s",b);
	
	return 0;
}

