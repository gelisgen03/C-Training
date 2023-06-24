#include <iostream>

using namespace std;

int main(){
    int * dizi;
    int ilk_boyut, eklenecek_boyut, son_boyut;

    cout << "Kac elemanli bir dizi olusturmak istiyorsun: ";
    cin >> ilk_boyut;

    dizi = (int*)calloc(ilk_boyut, sizeof(int));

    for(int i = 0;i < ilk_boyut; i++){
        cout << "Sayi : " << i + 1 << endl;
        scanf("%d",&dizi[i]);
    }
    
    cout << endl;
    for(int i = 0; i < ilk_boyut; i++)
        cout << i + 1 << ".sayi -> " << dizi[i] << endl;

    cout << "Mevcut diziyi nekadar arttirmak istiyorsunuz ?" << endl;
    cin >> eklenecek_boyut;

    son_boyut = ilk_boyut + eklenecek_boyut;

    dizi = (int*)realloc(dizi, sizeof(int) * (son_boyut));

    for(int i = ilk_boyut; i < son_boyut; i++){
        cout << i + 1 << ".sayi -> ";
        scanf("%d",&dizi[i]);
    }
    
    cout << endl;
    for(int i = 0; i < son_boyut; i++)
        cout << i + 1 << ".sayi -> " << dizi[i] << endl;

    free(dizi);
    return 0;
}