// Create a doubly linked circular list. 

// Delete the 3rd element in the doubly linked circular list. Display the elements of the resulting linked list in reverse order.

// Sample Input/Output

// Input
//     84 19 32 45 25 39 -999    
// Output
//     39 25 45 19 84

#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
};

// void delete_any(struct Node** head_ref, int key) {
//     struct Node *preptr = (struct Node *)malloc(sizeof(struct Node));
//     struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
//     struct Node *ptr = *head_ref;
    
//     if(ptr->data == key) {
//         printf("%d", ptr->data);
//         preptr->next = ptr->next;
//         ptr->next = NULL;
//     }
    
//     preptr = ptr;
    
//     while(ptr->next != NULL && ptr->next->data != key) {
//         preptr = ptr;
//         ptr = ptr->next;
//     }
    
//     // display(ptr);
// }

void delete_element(struct Node *ptr, int key) {
    struct Node *prevptr;
    if(ptr->data == key) {
        prevptr->next = ptr->next;
        ptr->next->prev = prevptr;
        ptr->next = NULL;
        printf("%d", ptr->data);
    }
    
    while(ptr->data != key) {
        prevptr = ptr;
        ptr = ptr->next;
        printf("%d", ptr->data);
    }
    
    
    
} 

int main() {
    struct Node *head = NULL, *ptr, *prevptr;
    int data;
    int count = 0, third_element;
    
    scanf("%d", &data);
    
    if(data == -999) {
        printf("Underflow");
    }
    
    while(data != -999) {
        ptr = (struct Node *)malloc(sizeof(struct Node));
        ptr->data = data;
        
        if(head == NULL) {
            head = ptr;
            head->prev = NULL;
            count ++;
        }
        
        else {
            prevptr->next = ptr;
            ptr->prev = prevptr;
            count ++;
        }
        prevptr = ptr;
        if(count == 3) {
            third_element = data;    
        }
    }
    
    delete_element(ptr, third_element);
}