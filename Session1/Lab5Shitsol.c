#include<stdio.h>

int main() {
    int n, search, flag=0;
    int records[10000];
    scanf("%d", &n);
    
    for(int i=0;i<n;i++) {
        scanf("%d", &records[i]);
    }
    
    scanf("%d", &search);
    
    for(int i=0;i<n;i++) {
        if(records[i] == search) {
            if(search==-18){
                if(flag==0){
                printf("Element found at positions %d", i+1);
                flag = 1;
                }
                else {
                    printf(", %d", i+1);
                }
            }
            else {
                printf("Element found at position %d", i+1);
                flag = 1;
            }
        }
    }
    
    if(flag==0) {
        printf("Element not found");
    }
}