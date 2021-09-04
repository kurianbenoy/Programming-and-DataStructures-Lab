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
    while(new_node != NULL) {

    }
}

void inset_to_list_end(struct node* prev_node, int e) {
    if(prev_node==NULL){
        printf("given node be not NULL");
    }

    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = e;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}


/* Given a reference (pointer to pointer) to the head
   of a list and an int, appends a new node at the end  */
void append(struct node** head_ref, int new_data)
{
    /* 1. allocate node */
    struct node* new_node = (struct node*) malloc(sizeof(struct node));
 
    struct node *last = *head_ref;  /* used in step 5*/
  
    /* 2. put in the data  */
    new_node->data  = new_data;
 
    /* 3. This new node is going to be the last node, so make next
          of it as NULL*/
    new_node->next = NULL;
 
    /* 4. If the Linked List is empty, then make the new node as head */
    if (*head_ref == NULL)
    {
       *head_ref = new_node;
       return;
    } 
      
    /* 5. Else traverse till the last node */
    while (last->next != NULL)
        last = last->next;
  
    /* 6. Change the next of last node */
    last->next = new_node;
    return;   
}

void display(struct node *temp)
{
    while(temp != NULL){
      printf("%d ",temp->data);
      temp = temp ->next;
    }

}

void insert_any(struct node** head_ref, int key, int data_value)
{
	struct node* temp = (struct node *) malloc(sizeof(struct node));

	//Traverse till key is found or end of the linked list is reached.
	struct node* ptr = *head_ref;
	while(ptr->next != NULL && ptr->data != key)
	{
		ptr = ptr->next;
	}
	if(ptr->data == key)
	{
		temp->data = data_value;
		temp->next = ptr->next;
		ptr->next = temp;
	}
	else
	{
		printf("\nValue %d not found\n",key);
	}
}


int main() {
    int prev_element, insert_element;
    struct node *head = NULL;
    int element;
    scanf("%d", &element);
    while (element != -999)
    {
        append(&head, element);
        scanf("%d", &element);
    }
    
    scanf("%d %d", &prev_element, &insert_element);
    insert_any(&head, prev_element, insert_element);
    display(head);
    
}
