#include <stdio.h>
#include <linkedlist.h>
#include <stddef.h>

int main(void)
{
	struct node *root = createList();
	appendData(root, 75);
	appendData(root, 100);
	printList(root);
	freeList(root);
	return 0;
}
