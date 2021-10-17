#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node * prev;
    struct Node * next;
};

void append(struct Node** head_ref, int data) {
    struct Node *newnode = (struct Node*) malloc(sizeof(struct Node));
    struct Node *last = *head_ref;
    
    newnode->data = data;
    newnode->next = NULL;
    
    if(*head_ref == NULL) {
         newnode->prev = NULL;
         *head_ref = newnode;
    }
    
    while(last->next != NULL) {
        last  = last->next;
    }
    
    last->next = newnode;
    newnode->prev = last;
}

void display(struct Node *temp) {
    while(temp != NULL) {
        printf("%d ", temp->data);
    }
}


int main() {
    struct Node *list;
    int data;
    
    scanf("%d", &data);
    
    while(data != -999) {
        append(&list, data);
    }
    
    
    //Now once circular linked list created. Traverse the
    //circular linked list, by moving Node->next untill data=45
    // replace value of Node->data=-90
    //print the circlular linked list after that
    
    while(list->data!=45) {
        list = list->next;
    }
    
    if(list->data==45) {
        list->data = -45;
    }
    
}