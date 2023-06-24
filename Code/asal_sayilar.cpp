#include <iostream>

using namespace std;

int asal_mi(int sayi);

int main(){
	int uretilecek_sayi_sayisi, uretilen_sayi_sayisi = 0, sayi = 1;

	cout << "Kac adet asal sayi istiyorsunuz" << endl;
	cin >> uretilecek_sayi_sayisi;

	while(uretilen_sayi_sayisi < uretilecek_sayi_sayisi){
		if(!asal_mi(++sayi)){
			continue; // Sayi asal degilse gec
		};
		cout << sayi << " ";
		
		uretilen_sayi_sayisi++;
	};
	cout << endl;
	return 0;
}

// Sayi asal ise 1 
// Degilse 0 
int asal_mi(int sayi){
	for(int i = 2; i <= sayi/2; i++){
        if(sayi % i == 0){
            return 0;
        };
    };
    return 1;
}