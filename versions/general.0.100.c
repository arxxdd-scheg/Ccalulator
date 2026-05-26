#include <stdio.h>
int main() {
    int a, b;
    char op;
    printf("calculator\n");
    printf("operators: +, -, *, /\n");
    printf("enter first number: ");
    scanf("%d", &a);
    printf("\nenter second number: ");
    scanf("%d", &b);
    printf("\nenter operator ");
    scanf(" %c", &op);
    if (op == '+') {
        printf("\nresult: %d+%d=%d", a, b, a + b);
    } else if (op == '-') {
        printf("\nresult: %d-%d=%d", a, b, a - b);
    } else if (op == '*') {
        printf("\nresult: %d*%d=%d", a, b, a * b);
    } else if (op == '/') {
        if (b == 0) {
            printf("\nerror: division on zero");
        } else {
            printf("\nresult: %d/%d=%d", a, b, a / b);
        }
    } else {
        printf("\ninvalid operation!");
    }
    return 0;
}
