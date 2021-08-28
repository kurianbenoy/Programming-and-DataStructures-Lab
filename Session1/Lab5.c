// Available from: Saturday, 28 August 2021, 1:30 PM
// Due date: Saturday, 4 September 2021, 11:30 PM
// Requested files: array.c (Download)
// Type of work: Individual work
// Read an array of ‘n’ integers from the user and do the following operations:

// Search for a specific element in the array.
// Sample Input/Output
// Input:
//     5
//     17 42 16 18 39
//     18
// Output
//     Element Found  at position 4           
#include<stdio.h>

int main() {
    int n, search, flag=0;
    int records[10000];
    int count[5];
    int c = 0;
    scanf("%d", &n);
    
    for(int i=0;i<n;i++) {
        scanf("%d", &records[i]);
    }
    
    scanf("%d", &search);
    
    for(int i=0;i<n;i++) {
        if(records[i] == search) {
            count[c] = i+1;
            c++;
            flag = 1;
        }
    }
    
    if(c==1){
        printf("Element Found at position %d", count[0]);
    }
    else if(c>1) {
        printf("Element Found at positions %d", count[0]);
        for(int i=1;i<c;i++) {
            printf(", %d", count[i]);
        }
    }
    if(flag==0) {
        printf("Element not found");
    }
}
