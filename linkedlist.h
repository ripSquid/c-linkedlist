#ifndef LINKED_LIST
#define LINKED_LIST

struct node
{
	int data;
	struct node* next;
};

typedef struct node Node;

Node * createList();
Node * pushData(Node *root, int data);
Node * popData(Node *root, int *data);
void appendData(Node *root, int data);
void printList(Node *root);
void freeList(Node *root);

#endif
