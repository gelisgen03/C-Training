#include <iostream>

using namespace std;

int main(){
    int toplanacak_sayi_sayisi, sayi, toplam = 0, tek = 0;

    cout <<"Lutfen Kac tane sayi toplamak istediginizi yaziniz."<<endl<<"=> ";
    cin >> toplanacak_sayi_sayisi;
    cout <<"Lutfen sayilar girerek programa devam ediniz"<<endl<<"******ATTENTION*****"<<endl<<"Sadece cift sayilar toplanacaktir"<<endl;

    for(int i = 1; i <= toplanacak_sayi_sayisi; i++){
        cout << i <<". Sayi lutfen"<< endl << i <<". :";
        cin >> sayi;
        if(sayi%2==0){
            toplam += sayi;
        }
        else{
            tek++;
        };
    };
    cout<<"Girdiginiz "<< tek <<" tane sayi tek sayidir. Bu yuzden "<< toplanacak_sayi_sayisi - tek <<" adet cift sayi topandi"<<endl<<"Toplama isleminin Sonucu: "<<toplam<<endl;

    return 0;
}