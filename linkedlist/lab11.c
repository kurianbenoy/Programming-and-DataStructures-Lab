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
         return;
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
    struct Node * list;
    int data;

    scanf("%d", &data);
    
    while(data != -999) {
        append(&list, data);
        scanf("%d", &data);
    }

    printf("%d", list->data);

    while (list  != NULL) {
        printf("%d", list->data);
        list = list->next;
    }

    while(list->next = NULL) {
        printf("%d", list->data);
        list = list->prev;
    }
}
