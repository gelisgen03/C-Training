#include<stdio.h>
#include<stdio.h>

struct nodeX {

    int dataX;
    struct nodeX*nextX;

};

struct nodeX*frontX=NULL;
struct nodeX*rearX=NULL;

//enqueue
int Enqueue(int data){
    //queue bos ise
    struct nodeX*newX=(struct nodeX*)malloc(sizeof(struct nodeX));
    if(frontX==NULL){
        newX->dataX=data;
        newX->nextX=NULL;
        rearX= frontX=newX;
       printf("Queue'nin sonuna eleman basari ile eklendi (ilk eleman)");
       return 0;
    }
        rearX->nextX=newX;
        newX->dataX=data;
        newX->nextX=NULL;
        rearX=newX;
        //printf("Queue'nin sonuna eleman basari ile eklendi");

        return 0;

}
//displayQueue
int Display(){
    printf("\n");
    if(frontX==NULL){
        printf("Queue Bos");
        return 0;
    }

    struct nodeX*tempX;
    tempX=frontX;
    while(tempX!=NULL){
            printf("%d ",tempX->dataX);
            tempX=tempX->nextX;
    }
    return 1;
}
//dequeue
int Dequeue(){

    int geridon;

    if(frontX==NULL){
        printf("Queue Bos");
        return 0;
    }

    struct nodeX*tempX=frontX;
    frontX=frontX->nextX;
    geridon=tempX->dataX;
    free(tempX);

    return geridon;

}

int main(){


Enqueue(5);
Enqueue(7);
Enqueue(8);
Enqueue(9);
Display();
printf("\n%d",Dequeue());
Display();

return 0;
}
