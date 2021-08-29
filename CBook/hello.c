// Write a C program to generate prime numbers which has two equidistant prime numbers from it within a given range.

// For example, 5 is one such number because we have two prime numbers 3 and 7 both of which are equidistant from 5. The distance in this case would be 2.

// Can you generate all such numbers in ascending order within a given range along with their corresponding two prime numbers and distance?

    // Input:
    // 2 10
    // Output
    // 3 5 7 2
    //  Input
    // 10 30
    // Output
    // 11 17 23 6                                                                                                                                                     
    // 17 23 29 6

#include<stdio.h>

int isPrime(int num)
{
    int i;
    for(i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
            return 0;
        }   
    }
    return 1;
}

int main() {
    int start, end, distance;
    scanf("%d %d", &start, &end);
    for (int i = start; i <= end; i++) {
        for (int j = i; j <= end; j++) {
            distance = j - i;
            if (i != j && isPrime(i) && isPrime(j)) {
                printf("%d %d %d\n", i, j, distance);
            }
            
        }
    }
                    
}
