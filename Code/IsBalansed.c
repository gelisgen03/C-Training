#include <stdio.h>
#include <stdbool.h>

bool balanced(const char p[], size_t n) {
    int top = -1;
    char dizi[n];

    void push(char veri) {
        if (top == n - 1)
            printf("Stack Dolu");
        else
            dizi[++top] = veri;
    }

    char pop() {
        return dizi[top--];
    }

    printf("Lutfen %d tane '{', '}' veya '(', ')' karakterlerinden birini giriniz.\n", n);

    for (size_t i = 0; i < n; i++) {
        printf("%zu) ", i + 1);
        scanf(" %c", &dizi[i]);
        push(dizi[i]);
    }

    for (size_t i = 0; i < n; i++) {
        if ((dizi[i] == '(' && dizi[i + 1] == ')') || (dizi[i] == '{' && dizi[i + 1] == '}')) {
            return true;
        } else if (dizi[i] == ')' || dizi[i] == '}') {
            return false;
        }
    }

    return false;
}

int main() {
    int n;
    int check;

    printf("Kac karakter (n) girmek istiyorsunuz ? \n->");
    scanf("%d", &n);

    char dizi[n];
    check = balanced(dizi, n);

    if (check) {
        printf("Sonuc: True (Dengeli)\n");
    } else {
        printf("Sonuc: False (Dengesiz)\n");
    }

    return 0;
}
