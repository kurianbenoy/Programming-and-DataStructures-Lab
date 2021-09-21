// Write a C program to generate prime numbers which has two equidistant prime numbers from it within a given range.
//
// Input:
    // 2 10
    // Output
    // 3 5 7 2
//
// Input:
    // 2 20
    // Output
    // 3 5 7 11 13 17 19 2

#include<stdio.h>

int main() {
    int start, end;
    int prime[100];
    int primegap[100];
    int count = 0;
    printf("Enter the start and end number: ");
    scanf("%d %d", &start, &end);
    for (int i = start; i <= end; i++) {
        int flag = 0;
        if (i % 2 == 0) {
            continue;
        }
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            prime[count] = i;
            count++;
            // printf("%d ", i);
        }
    }
    printf("\n");

    for (int i=0; i<count-1;i++) {
        // printf("%d", prime[i]);
        primegap[i] = prime[i+1] - prime[i];
    }

    for(int i=0;i<count;i++) {
        printf("%d %d", prime[i], primegap[i]);
    }

    for(int i=0;i<count-2;i++) {
        if(primegap[i+1]==primegap[i]) {
            printf("%d %d %d %d\n", prime[i], prime[i+1], prime[i+2], primegap[i]);
        }
    }
    return 0;
}