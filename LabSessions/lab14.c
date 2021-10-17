// Create a doubly linked list. Make sure one of the entered elements is 24.

// Insert a new element after the existing linked list element 24. 
// If there are more than one occurrence of 24, give user the choice where
//  the new element must be inserted.

// Sample Input/Output

// Input
//     24 19 32 45 24 39 -999
//      -56
// Output
//     2 occurrence of 24 found. Where should the insertion occur?
// Input
//     1
// Output
//     24 -56 19 32 45 24 39
#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
};

void searchForElement(struct Node *head) {
    int count = 0, num_insertions =0, pos_24 =0;
    while(head != NULL) {
        printf("%d", head->data);

        if(head->data == 24) {
            printf("Found");
            count += 1;
            //insertafter 24,
            // if count after 24, then input position to input from user and enter
            //the element to insert use 
            pos_24 = head;
        }
                head = head->next;
    }

    // if(count >1) {
    //     printf("%d occurence of 24 found. Where should the insertion occur?", count);
    //     scanf("%d", &num_insertions);
    // }
}

void push(struct Node **head_ref, int new_data)
{
    struct Node * new_node = (struct Node *)malloc(sizeof(struct Node));

    new_node->data = new_data;

    new_node->next = (*head_ref);
    new_node->prev = NULL;

    if((*head_ref) != NULL) {
        (*head_ref)->prev = new_node;
    }

    (*head_ref) = new_node;
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
    int data;
    int newelement;
    
    scanf("%d", &data);
    
    if(data == -999) {
        printf("Underflow");
    }
    
    while(data != -999) {
        push(&head, data);
        scanf("%d", &data);
    }
    
    scanf("%d", &newelement);
    searchForElement(head);

    display(head);
}