// Write a C program to read an integer from the user and check whether it is a palindrome or not. The program should output the number and say whether it is a palindrome or not.

// After printing it, can you reverse the order of digits in the number the user has just entered.
// E.g. 1234 should become 4321. Display the result on the screen in an easily understandable format.
// Sample Input/Output
//     Input:
//     121
//     Output
//     Palindrome
//     121

//     Input
//     1143
//     Output
//     Not Palindrome
//     3411
#include<stdio.h>


int reverse_no(int n) {
    
    if (n>0) 
    {
    int temp = n;
    int reverse = 0;
    
    while(temp > 0) {
        reverse = reverse*10 + (temp%10);
        temp = temp/10;
    }
    return reverse;
    }
    else {
        int temp = -n;
    int reverse = 0;
    
    while(temp > 0) {
        reverse = reverse*10 + (temp%10);
        temp = temp/10;
    }
    return -reverse;
    }
}

int main() {
    int hello, reverse_hello;
    scanf("%d", &hello);
    reverse_hello = reverse_no(hello);
    
    if(hello == reverse_hello) {
        printf("Palindrome");
    }
    else {
        printf("Not Palindrome");
    }
    printf("\n%d", reverse_hello); 
    
}
