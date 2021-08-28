// Read an array of ‘n’ integers from the user and do the following operations:

// Delete an element from the array.
// Sample Input/Output
// Input:
//     5
//     17 42 16 18 39
//     3
// Output
//   17 42 18 39
#include<stdio.h>

int main() {
    int n, element[10000];
    int deleteIndex;
    scanf("%d", &n);
    
    for(int i=0;i<n; i++) {
        scanf("%d", &element[i]);
    }
    scanf("%d", &deleteIndex);
    
    if(deleteIndex>n || deleteIndex==0) {
        printf("Out of bound");
    }
    else {
        for(int i=deleteIndex-1;i<n;i++) {
            element[i] = element[i+1];
        }
        for(int i=0;i<n-1;i++) {
            printf("%d ", element[i]);
        }
    }
}