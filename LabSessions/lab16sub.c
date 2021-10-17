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

    for(int i=count-1;i>=0;i--) {
        if(i != 2) {
        printf("%d ", A[i]);
        }
    }
    }
}