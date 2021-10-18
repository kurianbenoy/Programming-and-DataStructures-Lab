#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
};

void insertAfter(struct Node **head_ref, struct Node *next_node, int new_data) {
    if(next_node == NULL) {
        printf("Not null");
    }
    
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    
    new_node->data = new_data;
    new_node->prev = next_node->prev;
    next_node->prev = new_node;
    new_node->next = next_node;
    
    if(new_node->prev != NULL) {
        new_node->prev->next = new_node;
    }
    else {
        (*head_ref) = new_node;
    }
    
}

void searchForElement(struct Node * head) {
    int count = 0, num_insertions = 0;
    while(head != NULL) {
        if(head->data == 24) {
            count += 1;
            // pos_24 = head;
        }
        head = head +1;
    }
    
    if(count>1) {
        printf("%d occurrence of 24 found. Where should the insertion occur?", count);
        scanf("%d", &num_insertions);
    }
    
    else {
        
    }
}

int main() {
    struct Node *head = NULL, *ptr, *prevptr;
    int data, count = 0, countspecific=0, occur, countspecificindex=0;
    int insert_element;
    int A[1000];
    
    scanf("%d", &data);
    A[0] = data;
    
    
    while(data != -999) {
        // ptr = (struct Node *)malloc(sizeof(struct Node));
        // ptr->data = data;
        
        // if(head == NULL) {
        //     head = ptr;
        //     head->prev = NULL;
        // }
        
        // else {
        //     prevptr->next = ptr;
        //     ptr->prev = prevptr;
        // }
        // prevptr = ptr;
        if(data == 24) {
            countspecific++;
            countspecificindex = count;
        }
        count++;
        scanf("%d", &data);
        A[count] = data;
    }
    
    scanf("%d", &insert_element);
    
    if(countspecific <1) {
        printf("At least one element must be 24.\n");
    }
    
    else if(countspecific>1) {
        printf("%d occurrence of 24 found. Where should the insertion occur?\n", countspecific);
        
        scanf("%d", &occur);
        
        if(insert_element==24) {
            for(int i=0;i<count;i++) {
                printf("%d", A[i]);
            }
        }
        
        else {
        
        // for(int i=0;i<occur-1;i++) {
        //     printf("%d ", A[i]);
        // }
        
        for(int i=count;i>=occur;i--) {
            A[i+1] = A[i];
        }
        
        A[occur] = insert_element;
        
        for(int i=0;i<=count;i++) {
            printf("%d ", A[i]);
        }
        }
    }
    
    else {
        for(int i=count;i>=0;i--) {
            A[i+1] = A[i];
        }
        
        A[countspecificindex+1] = insert_element;
        
        for(int i=0;i<=count;i++) {
            printf("%d ", A[i]);
    }
    }
}