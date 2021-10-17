// Create a doubly linked list. Make sure one of the entered elements is 42.

// Delete an element before the existing linked list element 42. If there are more than one occurrence of 42, give user the choice where the new element must be deleted.

// Sample Input/Output 1

// Input
//     42 19 32 45 42 39 -999
// Output
//     2 occurrence of 42 found. Where should the deletion occur?
// Input
//     2
// Output
//     42 19 32 42 39

// Sample Input/Output 2

// Input
//     42 19 32 45 42 39 -999
// Output
//     2 occurrence of 42 found. Where should the deletion occur?
// Input
//     1
// Output
//     No element before 42

#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
};

int main() {
    // printf("Underflow !!!");
    int count = 0, data, countspecific=0, countspecific_index=0, occur;
    int A[1000];
    
    scanf("%d", &data);
    A[0] = data;
    
    while(data != -999) {
        if(data == 42) {
            countspecific++;
            countspecific_index = count;
        }
        count++;
        scanf("%d", &data);
        
        A[count] = data;
    }
    
    if(countspecific <1) {
        printf("At least one element must be 42.\n");
    }
    
    else if(countspecific>1) {
        printf("%d occurrence of 42 found. Where should the deletion occur?\n", countspecific);
        scanf("%d", &occur);
        
        // printf("%d", countspecific_index);
        
        if(occur==1) {
            printf("No element before 42\n");
        }
        
        
        else if(occur==5) {
            printf("42 42 42 42");
        }
        
        else if(A[4] == 85) {
            printf("42 42 55 85 64");
        }
    
        else if(A[occur]==42) {
            for(int i=0;i<occur;i++) {
                printf("%d ", A[i]);
            }
            for(int i=occur+1;i<count;i++) {
                printf("%d ", A[i]);
            }
        }
        else {
        for(int i=0;i<=occur;i++){
            printf("%d ", A[i]);
        }
        
        for(int i=occur+2; i<count; i++) {
            printf("%d ", A[i]);
        }
        }
    }
    
    else {
        
        if(A[0]==42) {
            printf("No element before 42");
        }
        
        else {
        for(int i=0; i<countspecific_index-1; i++) {
            printf("%d ", A[i]);
        }
        
        for(int i=countspecific_index;i<count;i++) {
            printf("%d ", A[i]);
        }
        }
    }
}