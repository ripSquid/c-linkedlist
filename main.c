#include <stdio.h>
#include <linkedlist.h>
#include <stddef.h>

int main(void)
{
	struct node *root = createList();
	int i = 0;
	while(i <= 100){
		root = pushData(root, i);
		i++;
	}
	root = popData(root, &i);
	printf("%d\n", i);
	printList(root);
	freeList(root);
	return 0;
}
