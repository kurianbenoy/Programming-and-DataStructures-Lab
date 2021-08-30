// Create a linked list and Traverse it.

// Sample Input/Output
// Input:
//     17 42 16 18 39 -999
// Output
//     17 42 16 18 39    
#include<stdio.h>
#include<stdlib.h>

int main() {
    int *ptr;
    int num = 0;
    
    ptr = (int *)malloc(100*sizeof(int));
    
    if(ptr==NULL) {
        printf("Memory not allocated");
    }
    
    scanf("%d", ptr);
    
    if(*(ptr+num)==-999) {
        printf("Underflow");
    }
    
    while(*(ptr+num) != -999) {
        num ++;
        scanf("%d", (ptr+num));
    }
    
    for(int i=0;i<num; i++) {
        printf("%d ", *(ptr+i));
    }
}
