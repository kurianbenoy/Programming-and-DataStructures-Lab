#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

int flag = 0;
void append(struct node** head_ref, int new_data) {
    struct node* new_node = (struct node*) malloc(sizeof(struct node));
    struct node * last = *head_ref;
    
    new_node->data = new_data;
    new_node->next = NULL;
    
    if(*head_ref == NULL) {
        *head_ref = new_node;
        return;
    }
    
    while(last->next != NULL) {
        last = last->next;
    }
    
    last->next = new_node;
    return;
}

void display(struct node *temp) {
    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

void insert_any(struct node** head_ref, int key, int data_value)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    
    struct node*ptr = *head_ref;
    
    while(ptr->next != NULL && ptr->data != key) {
        ptr = ptr->next;
    }
    
    if(ptr->data == key) {
        temp->data = data_value;
        temp->next = ptr->next;
        ptr->next = temp;
    }
    else {
        printf("Not Found");
        flag = 1;
    }
}


int main() {
    
    int prev_element, insert_element, element;
    struct node *head=NULL;
    
    scanf("%d", &element);
    while(element != -999)
    {
        append(&head, element);
        scanf("%d", &element);
    }
    
    scanf("%d %d", &prev_element, &insert_element);
    insert_any(&head, prev_element, insert_element);
    if(flag==0){
    display(head);
    }
}
