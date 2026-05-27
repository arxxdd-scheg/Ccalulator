int main() {
    float a, b; // исправил с int на float. раньше нельзя было сосчитать дроби из-за отсутвия float
    char op;
    
    while (1) {
        printf("\ncalculator\n");
        printf("operators: +, -, *, /\n");
        printf("enter first number: ");
        scanf("%f", &a);
        printf("enter second number: ");
        scanf("%f", &b);
        printf("enter operator: ");
        scanf(" %c", &op);
        
        if (op == '+') {
            printf("result: %.2f + %.2f = %.2f\n", a, b, a + b);
        } else if (op == '-') {
            printf("result: %.2f - %.2f = %.2f\n", a, b, a - b);
        } else if (op == '*') {
            printf("result: %.2f * %.2f = %.2f\n", a, b, a * b);
        } else if (op == '/') {
            if (b == 0.0f) {
                printf("error: division by zero\n");
            } else {
                printf("result: %.2f / %.2f = %.2f\n", a, b, a / b);
            }
        } else {
            printf("invalid operation!\n");
        }
        
        printf("\ncontinue? (y/n): ");
        char again;
        scanf(" %c", &again);
        if (again != 'y' && again != 'Y') {
            break;
        }
    }
    
    printf("goodbye!\n");
    return 0;
}
