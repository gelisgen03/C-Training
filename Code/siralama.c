#include<stdio.h>

int* bubble_sort(int * arr,int uzunluk){
    int temp, check = 1;
    while(check == 1){
        check = 0;
        for(int i = 0; i < uzunluk-1; ++i){
            if(arr[i] > arr[i+1]){
                temp = arr[i+1];
                arr[i+1] = arr[i];
                arr[i] = temp;
                check = 1;
            };
        };
    };
    return arr;
}

int* selection_sort(int *arr, int uzunluk) {
    int min_idx, temp;
    for (int i = 0; i < uzunluk-1; i++) {
        min_idx = i;
        for (int j = i+1; j < uzunluk; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            };
        };
        temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    };
    return arr;
}

int* insertion_sort(int *arr, int uzunluk) {
    int key, j;
    for (int i = 1; i < uzunluk; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        };
        arr[j + 1] = key;
    };
    return arr;
}

int main(){
    int uzunluk = 0;

    printf("Sayi Siralama Programimiza hos geldiniz. Oncelikle kac sayi siralamak istediginizi giriniz ");
    scanf("%d",&uzunluk);

    int array[uzunluk];

    for(int i = 0; i < uzunluk; i++){
        printf("%d. Sayiyi giriniz: ",i+1);
        scanf("%d",&array[i]);
    };

    bubble_sort(array, uzunluk);

    selection_sort(array, uzunluk);

    insertion_sort(array, uzunluk);

    for(int i = 0; i < uzunluk; i++)
        printf("%d) %d\n",i+1,array[i]);

    return 0;
}