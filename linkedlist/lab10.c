// #include<stdio.h>
// #include<stdlib.h>

// struct Element {
//     int d;
//     struct Element *n;
// };

// int main() {
//     int element;
//     struct Element *newnode, *ptr, *tmp;
//     struct Element *head = NULL;
    
//     scanf(" %d", &element);
//     newnode = (struct Element *)malloc(sizeof(struct Element));
//     if(newnode==NULL) {
//         printf("Memory not allocated");
//         exit(0);
//     }
    
//     else {
//         scanf("%d", &element);
//         newnode->d = element;
//         tmp=newnode;
        
//         newnode->n = NULL;
//     }
    
    
    
//     while(tmp->n != NULL) {
//         printf("%d ->", head->d);
//     }
// }

#include<stdio.h>
#include<stdlib.h>

struct Element {
    int d;
    struct Element *n;
};


void append_new(struct Element** head_ref, int new_data) {
    struct Element * new_node = (struct Element*)malloc(sizeof(struct Element));
    struct Element * last = *head_ref;

    printf("%d", new_data);
    new_node->d = new_data;
    new_node->n = NULL;

    printf("%d", new_node->d);

    
    if(*head_ref == NULL) {
        *head_ref = new_node;
    }
    
    while(last->n != NULL) {
        last = last->n;
    }
    
    last->n = new_node;
    return;
}

void delete_any(struct Element** head_ref, int key) {
    
    struct Element *preptr= (struct Element *)malloc(sizeof(struct Element));
    struct Element *tmp = (struct Element *)malloc(sizeof(struct Element));
    struct Element *ptr = *head_ref;
    
    preptr = ptr;
    while(ptr->n != NULL && ptr->d != key) {
        preptr = ptr;
        ptr = ptr->n;
    }
    
    if(ptr->d == key) {
        tmp = ptr;
        preptr->n = ptr->n;
        ptr->n = NULL;
    }
}



int main() {
    int element, del_element;
    struct Element *head = NULL;
    
    scanf("%d", &element);
    while(element != -999)
    {
        printf("%d", element);
        // append_new(&head, element);
        scanf("%d", &element);
    }
    // scanf("%d", &del_element);
    // delete_any(&head, del_element);
    
    // while (head != NULL) {
    //     printf("%d ", head->d);
    //     head = head->n;
    // }
}

