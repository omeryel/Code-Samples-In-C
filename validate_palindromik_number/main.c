#include <stdio.h>
#include <stdlib.h>

int main()
{
    char* pNum = malloc(10);

    int len;
    printf("Enter a Number : \t");  scanf("%s", pNum);


    len = sizeof(pNum)/ sizeof(*pNum);
    len = strlen(pNum);
    int valid =1;

    for(int k=0;k<(len/2);k++){
        if(*(pNum+k) != *(pNum+len-k-1)){
            valid = 0;
            break;
        }
    }

    printf("\n\n");
    valid == 1 ? printf("String is palindromik") : printf("String is not palindromik");
    printf("\n\n");
    return 0;
}
