#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char* pnumber = malloc(10);
    printf("Enter a number : ");
    scanf("%s", pnumber);
    char* initialPoint = pnumber;

    int total = 0;
    char szTemp[2] = {0};
    szTemp[1] = NULL;
    while(*pnumber){
        szTemp[0] = pnumber[0];
        total += ( atoi(szTemp) * atoi(szTemp) * atoi(szTemp) );
        pnumber++;
    }
    //printf("%s\n", initialPoint);
    printf("%d\n", atoi(initialPoint));
    printf("%s\n", initialPoint);
    printf("%d\n", total);
    //printf("memcmp: %d\n", memcmp(initialPoint, &total, sizeof(total)));
    //if(memcmp(initialPoint, &total, sizeof(total))== 0){
    if(atoi(initialPoint) == total){
        printf("it is armstrong");
    }
    else {
        printf("it is NOT armstrong");
    }


    free(initialPoint);
    return 0;
}
