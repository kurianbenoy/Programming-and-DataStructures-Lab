/*Create a Doubly linked list and Traverse it in forward and backward direction.

Sample Input/Output

Input:
    17 42 16 18 39 -999
Output
    17 42 16 18 39 
    39 18 16 42 17   

Author: Kurian Benoy*/
#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
};

void display(struct Node *temp) {
    struct Node * last;
    while(temp != NULL) {
        printf("%d ", temp->data);
        last = temp;
        temp = temp->next;
    }
    
    printf("\n");
    
    while(last != NULL) {
        printf("%d ", last->data);
        last = last->prev;
    }
}

int main() {
    struct Node *head = NULL, *ptr, *prevptr;
    int data, flag=0;
    
    scanf("%d", &data);
    if(data==-999){
        printf("Underflow");
        flag = 1;
    }
    while(data != -999)  {
        ptr = (struct Node *)malloc(sizeof(struct Node));
        ptr->data = data;
        
        if(head == NULL) {
            head = ptr;
            head->prev = NULL;
        }
        
        else {
            prevptr->next = ptr;
            ptr->prev = prevptr;
        }
        prevptr = ptr;
        scanf("%d", &data);
    }
    
    if(flag==0) {
    display(head);
    }
}
