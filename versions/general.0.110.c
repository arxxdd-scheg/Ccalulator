int main() {
    int a, b;
    char op;
    
    while (1) {
        printf("\ncalculator\n");
        printf("operators: +, -, *, /\n");
        printf("enter first number: ");
        scanf("%d", &a);
        printf("enter second number: ");
        scanf("%d", &b);
        printf("enter operator: ");
        scanf(" %c", &op);
        
        if (op == '+') {
            printf("result: %d + %d = %d\n", a, b, a + b);
        } else if (op == '-') {
            printf("result: %d - %d = %d\n", a, b, a - b);
        } else if (op == '*') {
            printf("result: %d * %d = %d\n", a, b, a * b);
        } else if (op == '/') {
            if (b == 0) {
                printf("error: division by zero\n");
            } else {
                printf("result: %d / %d = %d\n", a, b, a / b);
            }
        } else {
            printf("invalid operation!\n");
        }
        
        printf("\nсontinue? (y/n): ");
        char again;
        scanf(" %c", &again);
        if (again != 'y' && again != 'Y') {
            break;
        }
    }
    
    printf("goodbye\n");
    return 0;
}
