#include <stdio.h>
#include <float.h>

int main(){
    char op;
    double a, b, res;

    printf("Enter an operator ( +, *, -, /): ");
    scanf("%c", &op);

    printf("Enter two operands");
    scanf("%lf %lf", &a, &b);

    switch (op)
    {
    case '+':
        res = a + b;
        break;
    case '*':
        res = a * b;
        break;
    case '-':
        res = a - b;
        break;
    case '/':
        res = a / b;
        break;
    default:
        printf("Incorrect Value, please enter a valid operator");

        res = -DBL_MAX;
        break;
    }
    if(res != -DBL_MAX){
        printf("result is: %lf", res);
    }
       
    return 0;
}