#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Basic calculator in c using pointer
    char operation;
    int num1,num2,result;

    int* pnum1 = &num1;
    int* pnum2 = &num2;
    int* presult = &result;


    printf("Enter process type ('+', '-', '*', '/'): ");
    scanf("%c/t",&operation);
    printf("Enter first number: ");
    scanf("%d/t",pnum1);
    printf("Enter second number: ");
    scanf("%d/t",pnum2);


    switch(operation){
    case '+':
        *presult = *pnum1 + *pnum2;
        break;
    case '-':
        *presult = *pnum1 - *pnum2;
        break;
    case '*':
        *presult = *pnum1 * *pnum2;
        break;
    case '/':
        *presult = *pnum1 / *pnum2;
        break;
  break;
    default:
        *presult = 0;
    }

    printf("\nResult : %d", result);


    return 0;
}
