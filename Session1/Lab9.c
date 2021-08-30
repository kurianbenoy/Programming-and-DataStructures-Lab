// Create a linked list and Insert an element after a particular
//  element. If there are more than one similar elements in the 
// linked list, add the element after the first occurrence.

// Sample Input/Output
// Input:
//     17 42 16 18 39 -999
//     16 87
// Output
//     17 42 16 87 18 39    
#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

void push_to_list(struct node** head_ref, int e) {
    // SHould have been insert at end instead fo insert at beginning
    printf("%d", e);
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    new_node-> data = e;
    new_node->next = (* head_ref);
    (* head_ref) = new_node;
}

void display(struct node *temp)
{
    while(temp != NULL){
      printf("%d ->",temp->data);
      temp = temp ->next;
    }

}


int main() {
    struct node *head = NULL;
    int *ptr, num =0, element;
    int prev_element, insert_element;
    if(ptr==NULL) {
        printf("Memory not allocated");
    }
    
    scanf("%d", &element);
    while (element != -999)
    {
        push_to_list(&head, element);
        scanf("%d", &element);
    }
    
    display(head);
    
}
