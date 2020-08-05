#include <linkedlist.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

struct node	*createList()
{
	struct node *list = (struct node*)malloc(sizeof(struct node));
	list->data = 0;
	list->next = NULL;
	return list;
}

void appendData(struct node* root, int data)
{
	
	if (root->next == NULL && root->data == 0)
	{
		root->data = data;
		root->next = (struct node*)malloc(sizeof(struct node));
		root->next->data = 0;
		root->next->next = NULL;
	}
	else
	{
		appendData(&(*root->next), data);
	}

}

void printList(struct node* root)
{
	if (root->next->next != NULL && root->next->data != 0)
	{
		printf("%d,", root->data);
		printList(&(*root->next));
	}
	else 
	{
		printf("%d\n", root->data);
	}
}

void freeList(struct node* root)
{
	if (root->next != NULL)
	{
		freeList(&(*root->next));
	}
	free(root);
}
