#ifndef LINKED_LIST
#define LINKED_LIST

struct node
{
	int data;
	struct node* next;
};

struct node *createList();
void appendData(struct node* root, int data);
void printList(struct node* root);
void freeList(struct node* root);

#endif
