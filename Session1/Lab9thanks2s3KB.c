#include<stdio.h>
#include<stdlib.h>

//Create a basic structure for NODE from which new nodes can be created.
struct node
{
	int data;
	struct node *link;
};

struct node *header, *ptr, *temp;

int main()
{
	int num =0, data_value, flag = 1;
	//Allocate memory for header node.
	header = (struct node *) malloc(sizeof(struct node));

    header->data = NULL;
	header->link = NULL;

    // ptr = (int *)malloc(100*sizeof(int));
    // scanf("%d", ptr);
    if(flag==0){
    scanf("%d", &data_value);
    }

    while (data_value != -999 && flag==1)
    {
        insert_front(data_value);
        scanf("%d", &data_value);
        if(data_value==-999) {
            flag = 0;
        }
        // flag = 1;
    }
    
    insert_any();
    display();

    return 0;
}

void insert_front(int data_value)
{
    printf("Enter here->");
	temp = (struct node *) malloc(sizeof(struct node));

	temp->data = data_value;
	temp->link = header->link;
	header->link = temp;
}

void insert_any()
{
    printf("Enter insert");
	int data_value, key;

	// printf("\nEnter data of the node: ");
    scanf("%d", &key);
	scanf("%d", &data_value);
	// printf("\nEnter data of the node after which new node is to be inserted: ");

	temp = (struct node *) malloc(sizeof(struct node));

	//Traverse till key is found or end of the linked list is reached.
	ptr = header;
	while(ptr->link != NULL && ptr->data != key)
	{
		ptr = ptr->link;
	}
	if(ptr->data == key)
	{
		temp->data = data_value;
		temp->link = ptr->link;
		ptr->link = temp;
	}
	else
	{
		printf("\nValue %d not found\n",key);
	}
}

void display()
{
	ptr = header;
	while(ptr->link != NULL)
	{
		ptr = ptr->link;
		printf("%d ", ptr->data);
	}
}

