#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct rapor{

struct yazilim{
char yazacak[50];
int sayfa;	
}yazilim;
struct mekanik{
char yazacak[50];
int sayfa;	
	
}mekanik;
struct elektronik{
char yazacak[50];
int sayfa;	
	
}elektronik;	
	
	
	
}rapor;


int main(){	
rapor kisi;
kisi.mekanik.sayfa=50;
strcpy(kisi.yazilim.yazacak,"yunus");
printf("%d",kisi.mekanik.sayfa);
printf("%s",kisi.yazilim.yazacak);		
}
