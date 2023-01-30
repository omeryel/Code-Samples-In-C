#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter array length: ");  scanf("%d",&n);
    int* array = malloc(n*sizeof(n));  // allocate memory space
    for(int i=0; i<n;i++){
        printf("Enter number %d :", i); scanf("%d", &array[i]);
    }

    int max = 0;
    for(int k=0;k<n; k++){ // assign max number into max variable
        if(max<array[k]){
            max = array[k];
        }
    }

    printf("Max number is %d", max);
    return 0;
}
