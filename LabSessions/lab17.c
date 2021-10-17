// Create a doubly linked circular list. Delete the last element in the doubly linked circular list.

// Sample Input/Output

// Input
//     84 19 32 45 25 39 -999    
// Output
//     84 19 32 45 25

#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
};

int main() {
    int count = 0,third_element, data;
    int A[1000];
    scanf("%d", &data);
    A[0] = data;
    
    while(data != -999) {
        count ++;
        scanf("%d", &data);
        A[count] = data;
    }

    if(count<3) {
        printf("Underflow !!! Minimum 3 elements must be entered.")
    }
    
    if(count >=3 ) {

    for(int i=0;i<count-1;i++) {
        printf("%d ", A[i]);
    }
}