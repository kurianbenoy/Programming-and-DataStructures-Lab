#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
};

void deleteLast(struct Node **ptr) {
    while((*ptr)->next != NULL) {
        *ptr = (*ptr)->next;
    }
    
    if((*ptr)->next == NULL) {
        *ptr = (*ptr)->prev;
        (*ptr)->next = NULL;
    }
}

void display(struct Node *temp) {
    struct Node *last;
    while(temp != NULL) {
        last = temp;
        temp = temp->next;
    }
    
    while(last != NULL) {
        printf("%d ", last->data);
        last = last->prev;
    }
}

int main() {
    struct Node *head = NULL, *ptr, *prevptr;
    int data, count=1;
    
    scanf("%d", &data);
    
    while(data != -999) {
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
        count ++;
    }
    
    
    if(count > 4) {
    deleteLast(&head);
    deleteLast(&head);
    deleteLast(&head);
    
    display(head);
    }
    
    if(count==4) {
        printf("NULL");
    }
    else {
        printf("Error!! Underflow, Minimum 3 elements are required.");
    }
}
