// Create a linked list and Delete an element before a particular element.
// If there are more than one similar elements in the linked list, delete
// the element before the last occurrence.

#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

/* Given a reference (pointer to pointer) to the head
of a DLL and an int, appends a new node at the end */
void append(struct Node** head_ref, int new_data)
{
	/* 1. allocate node */
	struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

	struct Node* last = *head_ref; /* used in step 5*/

	/* 2. put in the data */
	new_node->data = new_data;

	/* 3. This new node is going to be the last node, so
		make next of it as NULL*/
	new_node->next = NULL;

	/* 4. If the Linked List is empty, then make the new
		node as head */
	if (*head_ref == NULL) {
		new_node->prev = NULL;
		*head_ref = new_node;
		return;
	}

	/* 5. Else traverse till the last node */
	while (last->next != NULL)
		last = last->next;

	/* 6. Change the next of last node */
	last->next = new_node;

	/* 7. Make last node as previous of new node */
	new_node->prev = last;

	return;
}


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

void delete_any(struct node** head_ref, int key)
{
    struct node *preptr = (struct node *)malloc(sizeof(struct node));
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    struct node*ptr = *head_ref;

    if(ptr->next->data ==key) {
        printf("Hello preptr: %d %d", preptr->data, ptr->data);
        preptr->next = ptr->next;
        ptr->next = NULL;
        temp = ptr;
        free(temp);
    }
    
    preptr = ptr;
    while(ptr->next != NULL && ptr->next->data != key) {
        preptr = ptr;
        ptr = ptr->next;
        // printf("%d", preptr->data);
    }

    printf("%d %d", ptr->next->data, key);
    if(ptr->next->data ==key) {
        printf("Hello preptr: %d %d", preptr->data, ptr->data);
        preptr->next = ptr->next;
        ptr->next = NULL;
        temp = ptr;
        free(temp);
    }
    
}

int main() {
    
    int del_element, element;
    struct node *head=NULL;
    
    scanf("%d", &element);
    while(element != -999)
    {
        append(&head, element);
        scanf("%d", &element);
    }
    
    scanf("%d", &del_element);
    delete_any(&head, del_element);
    display(head);
}

// #include<stdio.h>
// #include<stdlib.h>

// struct Element {
//     int d;
//     struct Element *n;
// };

// void display(struct Element *temp) {
//     while(temp != NULL) {
//         printf("%d ", temp->d);
//         temp = temp->n;
//     }
// }

// void append(struct Element** head_ref, int new_data) {
//     struct Element* new_node = (struct Element*)malloc(sizeof(struct Element));
    
//     struct Element *last = *head_ref;
    
//     new_node->d = new_data;
//     new_node->n = NULL;
    
//     if(*head_ref == NULL) {
//         *head_ref = new_node;
//     }
    
//     while(last->n != NULL) {
//         last = last->n;
//     }
    
//     last->n = new_node;
//     return;
// }

// void delete_any(struct Element** head_ref, int key) {
    
//     struct Element *preptr= (struct Element *)malloc(sizeof(struct Element));
//     struct Element *tmp = (struct Element *)malloc(sizeof(struct Element));
//     struct Element *ptr = *head_ref;
    
//     preptr = ptr;
//     while(ptr->n != NULL && ptr->d != key) {
//         preptr = ptr;
//         ptr = ptr->n;
//     }
    
//     if(ptr->d == key) {
//         tmp = ptr;
//         preptr->n = ptr->n;
//         ptr->n = NULL;
//     }
// }



// int main() {
//     int del_element, element;
//     struct Element *head = NULL;
    
//     scanf("%d", &element);
//     while(element != -999) {
//         append(&head, element);
//         scanf("%d", &element);
//     }
    
//     // scanf("%d", &del_element);
//     // delete_any(&head, del_element);
//     // display(head);
//     // while (head != NULL) {
//     //     printf("%d ", head->d);
//     //     head = head->n;
//     // }
// }
