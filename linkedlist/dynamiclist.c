#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int x;
	struct node *next;
} node;


int main()
{
	node root;

	root.x = 10;
	root.next = malloc(sizeof(node));
	root.next->x = 20;
	root.next->next = NULL;

	printf("root 1 = %d\n", root.x);
	printf("root 2 = %d", root.next->x);

	free(root.next);
	return 0;
}