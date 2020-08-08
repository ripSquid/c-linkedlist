#include <linkedlist.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

Node *createList()
{
	Node *list = (Node*)malloc(sizeof(Node)); /* Allocates a node in memory. */
	list->data = 0; /* Set the data to the standard ones. */
	list->next = NULL;
	return list; /* Returns the first node */
}

Node *pushData(Node *root, int data)
{
	Node *newNode = (Node *)malloc(sizeof(Node)); /* Allocates the new first node */
	newNode->data = data;
	newNode->next = root; /* Dereference the first pointer then grab the address */
	return newNode;
}

Node *popData(Node *root, int *data)
{
	*data = root->data;
	Node *secondNode = root->next;
	free(root);
	return secondNode;
}

void appendData(Node *root, int data)
{
	
	if (root->next == NULL && root->data == 0)
	{
		root->data = data; /* Takes the first node that has the standard data and changes the data */
		root->next = (Node*)malloc(sizeof(Node)); /* if it isnt standard data it takes the next node and checks. */
		root->next->data = 0;
		root->next->next = NULL;
	}
	else
	{
		appendData(root->next, data);
	}

}

void printList(Node *root)
{
	if (root->next->next != NULL && root->next->data != 0)
	{
		printf("%d,", root->data); /* Go through all nodes which doesnt have the standard data and prints them. */
		printList(root->next);
	}
	else 
	{
		printf("%d\n", root->data);
	}
}

void freeList(Node *root)
{
	if (root->next != NULL)
	{
		freeList(&(*root->next)); /*Go through all nodes and begins freeing them from the back of the list*/
	}
	free(root);
}
