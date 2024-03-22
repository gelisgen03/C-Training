#include<stdio.h>

// Operatorler

void main() {

    // Aritmetik Operatorler

    int a = 0;

    a += 10; // 10 ile topla
    a *= 10; // 10 ile carp
    a /= 10; // 10 ile bol
    a -= 10; // 10 cikar

    a %= 10; // 10'a gore modunu hesapla

    printf("%d\n",a);

    int b = 0; 
    
    a = 0;
    
    b = ++a - a; // 1 - 1 = 0
    printf("%d\n",b);
    
    a = 0;
    
    b = a++ - a; // 0 - 1 = -1
    printf("%d\n",b);

    // Lojik Operatorler

    a = 0; b = 0;

    if(a && b){
        printf("Ve");
    }
    else if(a || b){
        printf("Yada");
    }
    else if(!a){
        printf("Degil");
    };
    printf("\n");

    // Pointer Operatorleri

    int * p; 

    p = &a; // Adres 
    printf("%p\n",p);

    a = *p; // Dereference
    printf("%d\n",a);

    // Bit Operatorleri 

    a = 10; // 1010
    b =  3; // 0011

    int c = 0;

    c = a ^ b; // 1001 -> 9 -> XOR 
    printf("%d\n",c); 

    c = a | b; // 1011 -> 11-> OR
    printf("%d\n",c);

    c = a & b; // 0010 -> 2 -> AND
    printf("%d\n",c);

    c = ~a; // INV
    printf("%d\n",c);

    c = a << 1; // 0001 0100 -> 20 -> 1 bit sola kaydir
    printf("%d\n",c);

    c = a >> 1; // 0101 -> 5 -> 1 bit saga kaydir
    printf("%d\n",c);


};