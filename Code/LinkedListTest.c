#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    void *data; //ADT yi hem farkli veri tiplerinde verileri oluşturabilmek için hemde dinamik bir değer ataması yapmak için yapıyoruz
    struct node *next;
}Node;

void* creatnewnode(void **v){ //değişkenin adresinin adresi, çünkü dinamik olarak değer ataması yapmak istiyoruz
    Node*n=(Node*)malloc(sizeof(Node));
    n->data=*v; // değişkenin adresinin adresinin değerine atadık
    n->next=NULL; //Node veri tipindeki n in next bileşenine NULL atadık
    return n;

}
void addnodelast(Node**n,void **v){
    Node*iter=*n;
    while(1){
        if(iter->next==NULL){
            Node*newn=creatnewnode(v);
            iter->next=newn;

         break;
        }
      else{
            iter=iter->next;
      }
    }

}

void addnodehead(Node**n,void **v){
  Node*newn=creatnewnode(v);
  Node*iter=*n;
  newn->next=iter;
  *n=newn;
}

void addmultinode(Node**n,int m){
    for(int i;i<m;i++){
        int *k=rand()%30;
        addnodelast(n,&k);
    }
}
void writenodev(Node*n){
    int k=1;
    while(1){
        if(n->next!=NULL){
            printf("%d.dugum: %d\n",k,n->data);
            n=n->next;
            k++;
        }
        else if(n->next==NULL){
            printf("%d.dugum (son): %d\n",k,n->data);
            break;
        }
    }

}
void insertNode(){

}
void searcNode(Node*n,int x){
    Node*iter=n->next;
    int count=0;
    if(*(n->data)==x){

        printf("Aradıgıniz data ilk siradadir");
            }
    while(1){

    }

}

int main()
{
    int *a=10;
    int *b=5;
    char *c='m';
    int *f=9;

    Node*d1=creatnewnode(&a);
    //printf("%d\n",d1->data);
    addnodelast(&d1,&b);
    //printf("%d\n",d1->next->data);
    addnodelast(&d1,&c);
   // printf("%c\n",d1->next->next->data);
    addnodehead(&d1,&f);
    //printf("%d\n",d1->data);
    addmultinode(&d1,10);
    writenodev(d1);

    return 0;
}
