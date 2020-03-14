#include<stdio.h>
#include<stdlib.h>

struct Node {
	int data;
	struct Node *next;
};

void print_list(struct Node* n) {
	while (n != NULL) {
		printf(" %d ", n->data);
		n = n->next;
	}
}

int main() {
	struct Node* head = NULL;
	
	head = (struct Node*)malloc(sizeof(struct Node));	// Allocate nodes in the head
	
	head->data = 1;	// Assign data in the first node
	head->next = NULL;	// Link First Node to NULL
	
	int n = head->data + 1, last = 5;
	
	while (n < last + 1) {
	 	struct Node* new_node = NULL;
		new_node = (struct Node*)malloc(sizeof(struct Node));
		struct Node* cur = head;
		while (cur->next != NULL) {
			cur = cur->next;
		}
		cur->next = new_node;
		new_node->data = n;
		new_node->next = NULL;
		cur = new_node;
		n++;
	}	
		
	print_list(head);
	
	return 0;
}
