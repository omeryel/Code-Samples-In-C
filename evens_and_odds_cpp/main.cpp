#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <iostream>
#include <vector>

int main()
{
    //Collect inputs into vector variable

    char input[5];

    std::vector<int> vecEven, vecOdd;

    printf("Press 'q' to quit from input loop.\n");
    while(1){
        printf("Enter a number : \t");
        scanf("%s", input);

        if(input[0] == 'q'){
            break;
        }
        else{
                if(atoi(input) % 2 == 0){
                    vecEven.push_back(atoi(input));
                }else{
                        vecOdd.push_back(atoi(input));
                }
        }
    }
    printf("\nEven Numbers: \n");
    for(auto i = vecEven.begin(); i != vecEven.end(); i++){
        printf("%d\t", *i);
    }
    printf("\nOdd Numbers: \n");
    for(auto i = vecOdd.begin();i != vecOdd.end();i++){
            printf("%d\t", *i);
    }
    printf("\n");
    return 0;
}
