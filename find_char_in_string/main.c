#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>




int main()
{
    char* text = malloc(100);  // Allocating space in memory for input string
    memset(text, '\0', 100); // setting NULL all space
    printf("Enter text here : \n" );
    scanf("%s",text);
    printf("Enter char to find:\n");
    char mychar;
    scanf(" %c", &mychar);

    int count = 0;
    char *pSearch = text;  // Saving for free process
    while(pSearch) // looping until NULL item
    {
        pSearch = (char*)memchr(pSearch, mychar, 100);  // memchr return first found item address
        if(pSearch)
        {
            count++;
            pSearch++;
        }
    }
    printf("\nThere are %d '%c' in %s. \n", count, mychar, text);

    free(text);

    return 0;
}
