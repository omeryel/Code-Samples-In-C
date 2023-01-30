#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char* pnum = calloc(1000,1);
    printf("Enter a number: \n");
    scanf("%s", pnum);
    int lenStr = strlen(pnum);

    int max = 0;

    if(lenStr > 0){
        for(int i=0;i<lenStr;i=i+1){
            if(max < *(pnum +i)){
                max = *(pnum + i);
            }
        }
        printf("Max number %c\n", max);
    }
    free(pnum);


    return 0;
}
