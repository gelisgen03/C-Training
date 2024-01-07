#include <stdio.h>
#include <stdlib.h>

#include<stdio.h>

typedef struct ogrenci{
int ogrenci_no;
char *ogrenci_ad;
char *ogrenci_soyad;
char *ogrenci_bolum;
int ogrenci_sinif;
}Ogrenci;

typedef struct node {
    struct node *pre;
     struct ogrenci *data; //ADT yi hem farkli veri tiplerinde verileri oluşturabilmek için hemde dinamik bir değer ataması yapmak için yapıyoruz;
    struct node *next;
}Node;


//TEKİL DÜĞÜM OLUŞTURMA FONKSİYONU
Node *creat_linkedlist(int *no,void **ad,void **soyad,void **bolum,int *sinif){
    Node *dugum = (Node*)malloc(sizeof(Node));
    dugum->pre=NULL;
    dugum->data = (Ogrenci*)malloc(sizeof(Ogrenci));
    dugum->data->ogrenci_no=*no;
    dugum->data->ogrenci_ad=*ad;
    dugum->data->ogrenci_bolum=*bolum;
    dugum->data->ogrenci_soyad=*soyad;
    dugum->data->ogrenci_sinif=*sinif;
    dugum->next=NULL;

}

// SONA DÜĞÜM EKLEME FONKSİYONU
void addNodeLast(Node**n,int *no,void **ad,void **soyad,void **bolum,int *sinif){
    Node*iter=*n;//Düğüm üzerinde kalıcı bir işlem yapacağımız için pointer a pointer aldık
    while(1){
        if(iter->next==NULL){
            Node*newn=creat_linkedlist(no,ad,soyad,bolum,sinif);
            iter->next=newn;

         break;
        }
      else{
            iter=iter->next;
      }
    }
}




int main(){

    int ilk=5;
    char *ad="asim";
    char *soyad="gelisgen";
    char *bolum="bilgisyar";
    int sinif=2;
    Node *n1 = (Node*)malloc(sizeof(Node));
    n1=creat_linkedlist(&ilk,&ad,&soyad,&bolum,&sinif);


    printf("Numara: %d\n", n1->data->ogrenci_no);
    printf("Ad: %s\n", n1->data->ogrenci_ad);
    printf("Soyad: %s\n", n1->data->ogrenci_soyad);
    printf("Bolum: %s\n", n1->data->ogrenci_bolum);
    printf("Sinif: %d\n", n1->data->ogrenci_sinif);

    free(n1->data->ogrenci_ad);
    free(n1->data->ogrenci_soyad);
    free(n1->data->ogrenci_bolum);
    free(n1->data);
    free(n1);


return 0;
}

