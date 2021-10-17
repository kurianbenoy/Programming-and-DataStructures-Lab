/*Create a doubly linked list. 

Add 3 elements from the beginning of the linked list. Display the elements of the resulting doubly linked list in reverse order.

Sample Input/Output

Input
    84 19 32 45 25 39 -999
    -5 -12 -68
Output
    39 25 45 32 19 84 -5 -12 -68

Author: Kurian Benoy 
Created: 21st September, 2021
*/

#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
};

void insertAtFirst(struct Node **ptr, int new_data) {
    struct Node * new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = new_data;

    new_node->next = (* ptr);
    new_node->prev = NULL;

    if((*ptr) != NULL) {
        (*ptr)->prev = new_node;
    }
    (*ptr) = new_node;

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
    struct Node *head = NULL, *ptr, *prevptr;
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

    if(scanf("%d", &element1)!= 1){
        printf("Error!! Three elements must be inserted.");
        return -1;
    }
    else {
        insertAtFirst(&head, element1);
    }
    if(scanf("%d", &element2)!= 1){
        printf("Error!! Three elements must be inserted.");
        return -1;
    }
    else {
        insertAtFirst(&head, element2);
    }
    if(scanf("%d", &element3)!= 1){
        printf("Error!! Three elements must be inserted.");
        return -1;
    }
    else {
        insertAtFirst(&head, element3);
    }
    // scanf("%d", &element2);
    // scanf("%d", &element3);

    // if(element1 && element2 &&element3) {
    // insertAtFirst(&head, element1);
    // insertAtFirst(&head, element2);
    // insertAtFirst(&head, element3);
    // }

    // else {
    //     printf("Error!! Three elements must be inserted.");
    // }

    display(ptr);
}
