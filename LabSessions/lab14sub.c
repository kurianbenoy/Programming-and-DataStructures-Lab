#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
};

int main() {
    int count = 0,countspecific, data, occur, countspecificindex;
    int A[1000];
    scanf("%d", &data);
    A[0] = data;
    
    while(data != -999) {
        if(data==42) {
            countspecific++;
            countspecificindex = count;
        }
        count ++;
        scanf("%d", &data);
        A[count] = data;
    }

    if(countspecific>1) {
        printf("%d occurrence of 42 found. Where should deletion occur?", countspecific);
        scanf("%d", &occur);

        if(occur==1) {
            printf("No element before 42");
        }

        for(int i=0;i<occur;i++) {
            printf("%d", A[i]);
        }
        for(int i=occur+1;i<=count;i++) {
            printf("%d", A[i]);
        }
    }

    else {
        for(int i=0;i<countspecificindex;i++) {
            printf("%d ", A[i]);
        }

        for(int i=countspecificindex;i<=count;i++) {
            printf("%d ", A[i]);
        }
    }
}#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
};

int main() {
    int count = 0,countspecific, data, occur, countspecificindex;
    int A[1000];
    scanf("%d", &data);
    A[0] = data;
    
    while(data != -999) {
        if(data==42) {
            countspecific++;
            countspecificindex = count;
        }
        count ++;
        scanf("%d", &data);
        A[count] = data;
    }

    if(countspecific>1) {
        printf("%d occurrence of 42 found. Where should deletion occur?", countspecific);
        scanf("%d", &occur);

        if(occur==1) {
            printf("No element before 42");
        }

        for(int i=0;i<occur;i++) {
            printf("%d", A[i]);
        }
        for(int i=occur+1;i<=count;i++) {
            printf("%d", A[i]);
        }
    }

    else {
        for(int i=0;i<countspecificindex;i++) {
            printf("%d ", A[i]);
        }

        for(int i=countspecificindex;i<=count;i++) {
            printf("%d ", A[i]);
        }
    }
}