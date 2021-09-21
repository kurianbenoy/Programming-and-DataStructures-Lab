// Sum of n elements using Dynamical allocation
#include<stdio.h>
#include<stdlib.h>

int main() {
    int num, i=0, *ptr, sum = 0;
    ptr = (int *)malloc(sizeof(int));

    if(ptr==NULL) {
        printf("Memory not allocated");
        exit(0);
    }

    printf("Enter array elements");
    scanf("%d", ptr);

    while(*(ptr+i) != -999) {
        sum += *(ptr+i);
        i++;

        ptr = (int *)realloc(ptr, ((i+1)*sizeof(int)));
        if(ptr==NULL) {
            printf("Memory not allocated");
            exit(0);
        }

        scanf("%d", (ptr+i));
    }
    printf("\n Sum = %d", sum);
    
    free(ptr);
    return 0;
}