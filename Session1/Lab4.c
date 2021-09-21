// Write a C program to generate prime numbers which has two equidistant prime numbers from it within a given range.

// For example, 5 is one such number because we have two prime numbers 3 and 7 both of which are equidistant from 5. The distance in this case would be 2.

// Can you generate all such numbers in ascending order within a given range along with their corresponding two prime numbers and distance?

// Sample Input/Output
//     Input:
//     2 10
//     Output
//     3 5 7 2

//     Input
//     10 30
//     Output
//     11 17 23 6                                                                                                                                                     
//     17 23 29 6
// Graded out of 6 points.
    #include<stdio.h>

int main() {
    int number1, number2;
    int prime[100], primegap[100], count= 0;
    scanf("%d%d", &number1, &number2);
    
    if(number1<0) {
        number1 = 2;
    }
    
    for (int i=number1;i<=number2;i++) {
        int flag = 0;
        if( i %2 ==0) {
            continue;
        }
        for(int j=2; j<i; j++) {
            if(i%j == 0) {
                flag = 1;
                break;
            }
        }
        if(flag == 0) {
            prime[count] = i;
            count ++;
        }
    }
    
    for(int i=0;i<count - 1;i++) {
        primegap[i] = prime[i+1] - prime[i];
    }
    
    for(int i=0;i<count-2; i++) {
        if(primegap[i+1]==primegap[i]) {
            printf("%d %d %d %d\n", prime[i], prime[i+1], prime[i+2], primegap[i]);
        }
    }
}
