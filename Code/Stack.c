#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// Yığın veri yapısı
typedef struct {
    int top;
    int items[100];
} Stack;

// Yığın işlemleri
void initStack(Stack *s) {
    s->top = -1;
}

int isEmpty(Stack *s) {
    return s->top == -1;
}

void push(Stack *s, int item) {
    s->items[++s->top] = item;
}

int pop(Stack *s) {
    return s->items[s->top--];
}

// Prefix ifade hesaplama
int evaluatePrefix(char expression[]) {
    Stack s;
    initStack(&s);

    int length = 0;
    while (expression[length] != '\0') {
        length++;
    }

    for (int i = length - 1; i >= 0; i--) {
        char token = expression[i];

        if (isdigit(token)) {
            // Sayıları birleştirme
            int number = 0;

            while (isdigit(expression[i])) {
                number = number * 10 + (expression[i] - '0');
                i--;
            }

            // Sayıyı yığına ekle
            push(&s, number);
        } else if (token == '+' || token == '-' || token == '*' || token == '/') {
            // Operatörü kullanarak hesaplama
            int operand1 = pop(&s);
            int operand2 = pop(&s);

            int result;

            switch (token) {
                case '+':
                    result = operand1 + operand2;
                    break;
                case '-':
                    result = operand1 - operand2;
                    break;
                case '*':
                    result = operand1 * operand2;
                    break;
                case '/':
                    result = operand1 / operand2;
                    break;
            }

            // Sonucu yığına ekle
            push(&s, result);
        }
    }

    // Yığında kalan tek eleman sonucu içerir
    return pop(&s);
}

int main() {

    // BU KISMA LUTFEN ORNEK PREFIX I BOSLUK BIRAKARAK GİRİNİZ
    char expression[] = "- + * 9 + 2 8 * + 4 8 6 3";
    int result = evaluatePrefix(expression);

    printf("Sonuc: %d\n", result);

    return 0;
}
