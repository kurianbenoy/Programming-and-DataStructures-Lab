#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

// void delete_before(int info) {

// }

void display(struct Node *temp) {
    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

void append(struct Node** head_ref, int new_data) {
    struct Node* new_node = (struct Node *)malloc(sizeof(struct Node));
    
    struct Node *last = *head_ref;
    
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


int main() {
    struct Node * head = NULL, *ptr, *ptr3, *ptr2;

    int data, deleteElem;
    scanf("%d", &data);

    while(data != -999) {
        append(&head, data);

        scanf("%d", &data);
    }

    scanf("%d", &deleteElem);

    ptr = head;
    if(deleteElem==head->data)
    {
        printf("Out of bound");
    }

    else {
        if(deleteElem == head->next->data)
        {
            ptr3 = head;
            head = head->next;
            free(ptr3);
        }

        else {
            while(ptr->next->next->data != deleteElem && ptr->next->next != NULL) {
                ptr = ptr->next;
            }

            if(ptr->next->next->data = deleteElem) {
                ptr2= ptr->next;
                ptr->next = ptr->next->next;
                free(ptr2);
            }
        }
        display(ptr);
    }

}