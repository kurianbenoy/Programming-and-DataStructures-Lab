// Create a doubly linked list. 

// Delete 3 elements from the end of the linked list. Display the elements of the resulting doubly linked list in reverse order.

// Sample Input/Output

// Input
//     84 19 32 45 25 39 -999    
// Output
//     32 19 84
// Author: Kurian Benoy
//Done on: 23rd September, 2021

#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
};

void deleteLast(struct Node **ptr) {
    struct Node * temp = (struct Node *)malloc(sizeof(struct Node));
    if(ptr == NULL){
        printf("Underflow");
    }
    else {
        while((*ptr)->next != NULL) {
            temp = ptr;
            *ptr = (*ptr)->next;
        }
        if((*ptr)->next == NULL) {
        *ptr = (*ptr)->prev;
        (*ptr)->next = NULL;
        // free(*temp);
        }
    }
}

void display(struct Node *temp) {
    struct Node * last;
    while(temp != NULL) {
        // printf("%d ", temp->data);
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
    struct Node * head = NULL, *ptr, *prevptr;
    int data, flag=0;
    int element1, element2, element3;
    
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

    deleteLast(&head);
    deleteLast(&head);
    deleteLast(&head);
    display(head);
}
