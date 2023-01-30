#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main()
{

    // Collect even and odds numbers in array separately
    int arrayLengthEven = 5, arrayLengthOdd = 5; // initial size of array

    int *pListEven = NULL, *pListOdd = NULL;
    int evenIndex = 0, oddIndex = 0;
    char input[5];



    // allocation memory for arrays
    pListEven = (int*)malloc( sizeof(int) * arrayLengthEven );
    pListOdd = (int*)malloc( sizeof(int) * arrayLengthOdd );


    // setting initial values as NULL
    memset(pListEven,0,arrayLengthEven * sizeof(int));
    memset(pListOdd,0,arrayLengthOdd * sizeof(int));


    printf("Enter 'q' to quit from input loop.\n ");
    while(1)
    {
        printf("Enter a number : \t");
        scanf("%s", input);

        if(input[0] == 'q')
        {
            break;
        }
        else
        {
            if(atoi(input) % 2 == 0)
            {
                pListEven[evenIndex] = atoi(input);
                evenIndex++;
                // increasing size of array by 5
                if(evenIndex == arrayLengthEven)
                {
                    arrayLengthEven +=5;
                    pListEven = realloc(pListEven, sizeof(pListEven[0])*arrayLengthEven);
                    // setting NULL newly allocated space
                    memset(pListEven+arrayLengthEven-5,0,5 * sizeof(int));
                }
            }
            else
            {
                pListOdd[oddIndex] = atoi(input);
                oddIndex++;
                if(oddIndex == arrayLengthOdd)
                {
                    arrayLengthOdd +=5;
                    pListOdd = realloc(pListOdd, sizeof(pListOdd[0])*arrayLengthOdd);
                    memset(pListOdd+arrayLengthOdd-5,0,5 * sizeof(int));
                }
            }
        }
    }

    // saving head of array to free end of processes
    int* head_pListEven = pListEven, head_pListOdd = pListOdd;

    printf("\nEven Numbers: \n");
    while(*pListEven){
        printf("%d\t", pListEven[0]);
        pListEven++;
    }

    printf("\nOdd Numbers: \n");
    while(*pListOdd){
        printf("%d\t", pListOdd[0]);
        pListOdd++;
    }

    printf("\n");

    free( head_pListEven );
    free( head_pListOdd );

    return 0;
}
