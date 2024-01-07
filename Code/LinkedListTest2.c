#include <stdio.h>

typedef struct Node {
int data;
struct Node* next;
}node;

void writelinkedlist(struct node*x){
    node*iter=x;
    while(iter!=NULL){
        printf("%d",iter->data);
        iter=iter->next;
    }
    printf("\n-----------------------------------------\n");
}

struct Node*create_linkedlist(int data_x){

node*n=(node*)malloc(sizeof(node));
n->data=data_x;
n->next=NULL;

return n;
}



void add_node_head(struct Node**linkedlist,int data){ //datanın adresinin adresinin adresini değilde datanın adresini yollasaydık dinamik olarak
                                                      // veri değişimi yapamazdık.
    node*newlinkedlist=create_linkedlist(data);
    newlinkedlist->next=*linkedlist; // linkedlist bir adresin adresi biz *linkedlist ile poiterin turttuğu değer olan düğüm datasının adresine eriştik
    *linkedlist=newlinkedlist;// mesela burda linkedlist e dinamik olarak atama ypamazdık
}

void add_node_last(struct Node**linkedlist, int data){
    node*newlinkedlist=create_linkedlist(data);
     while(!=NULL){
        printf("%d",iter->data);
        iter=iter->next;
}

int main() {
node*n=(node*)malloc(sizeof(node));
n->data=80;
n->next=NULL;
writelinkedlist(n);
node*d1=create_linkedlist(90); //d1=süğüm bir in datasının adresi(düğümde ilk eleman data)
add_node_head(&d1,70);
add_node_head(&d1,60);
writelinkedlist(d1);


  return 0;
}
