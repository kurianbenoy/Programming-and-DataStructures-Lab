// Passed 3 testcases /8
#include<stdio.h>

int main() {
    char hello[1000], reverse_hello[1000];
    int count=0, begin=0, end;
    int pal = 0;
    scanf("%s", hello);
    
    while(hello[count] != '\0') {
        count ++;
    }
    
    // printf("%d", count);
    
    for(int i=0; i<count; i++) {
        // printf("%c%c", hello[i], hello[count-i-1]);
        if(hello[i]!=hello[count - i -1]) {
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
    end = count -1;
    
    for(begin=0;begin<count; begin++) {
        reverse_hello[begin] = hello[end];
        end --;
    }
    
    printf("\n%s", reverse_hello);
}
