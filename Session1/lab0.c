// Write a C program to find the largest among three integers.

#include<stdio.h>

int main() {
    int a[3];
    for (int i=0;i<3;i++)
    {
        scanf("%d", &a[i]);
    }
    
    if(a>b && a>c) {
        printf("%d", a);
    }
    
    else if(b>a && b>c) {
        printf("%d", b);
    }
    else if(c>a && c>b) {
        printf("%d", c);
    }
    else 
        printf("Either Two or Three numbers are equal");
    
    return 0;
}
