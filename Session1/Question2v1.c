// Passed 3 testcases /8
#include<stdio.h>
#include<string.h>

int main() {
    char hello[1000], reverse_hello[1000];
    int leng, i, pal=0;
    fgets(hello, 1000, stdin);
    
    leng = strlen(hello);
    
    for(int i=0; i<leng/2; i++) {
        if(hello[i]!=hello[leng - i -1]) {
            pal = 1;
            break;
        }
    }
    
    if(pal==0) {
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
    printf("\n%d", hello);
    if(hello<0) {
        printf("-");
        for(int i=leng-1;i>0;i--) {
            printf("%c", hello[i]);
        }
    }
    else {
        for(int i=leng-1;i>=0;i--) {
            printf("%c", hello[i]);
        }
    }
}
