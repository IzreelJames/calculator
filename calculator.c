// #include <cs50.h>
#include <stdio.h>



int main() {

    char operator;
    long firstValue;
    long secongValue;

    printf("Enter the operator (+, -, *, /) : ");
    scanf("%c", &operator);
    
  
    printf("Enter a value for firstValue: ");
    scanf("%li", &firstValue);


    printf("Enter a value for secongValue: ");
    scanf("%li", &secongValue);

    switch (operator)
    {
    case '+':
        printf("%li + %li = %li",firstValue,secongValue,(firstValue + secongValue));
        break;
     case '-':
        printf("%li - %li = %li",firstValue,secongValue,(firstValue - secongValue));
        break;
    case '*':
        printf("%li * %li = %li",firstValue,secongValue,(firstValue * secongValue));
        break;
    case '/':
        if(secongValue != 0)
            printf("%li / %li = %li",firstValue,secongValue,(firstValue / secongValue));
        else
            printf("Can't divide a number bsecongValue zero");
            break;
    default:
        printf("Invalid Operator");
    }


    return 0;
}