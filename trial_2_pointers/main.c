#include <stdio.h>
//Pointer stores the adresss value of the variable intead of variable itself. 
int main(){

    int number = 10;
    int *number2;

    number2 = &number;

    printf("The variable is (number): %d \n", number);
    printf("The adress of the variable is (number): %p \n", &number);

    printf("The variable is(number2): %d \n");

    return 0;
}