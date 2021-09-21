#include<stdio.h>
#include<stdlib.h>

int main() {
    int num, i, *ptr, sum = 0;
    printf("Enter the no of elements");
    scanf("%d", &num);

    ptr = (int *)malloc(num*sizeof(int));
    if(ptr == NULL) {
        printf("Memory not allocated");
        exit(0);
    }

    printf("Enter array elements\n");
    for(i=0; i<num; i++) {
        scanf("%d", (ptr+i));
        sum += *(ptr+i);
    }

    printf("\n Sum = %d", sum);
    free(ptr);
    
    return 0;
}
