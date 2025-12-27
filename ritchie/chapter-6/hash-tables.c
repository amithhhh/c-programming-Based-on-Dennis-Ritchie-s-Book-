#include <stdio.h>
#include <stdlib.h>

#define TABLE_SIZE 10

typedef struct Node {
	int key;
	int value;
	struct Node *next;
}Node;

Node *table[TABLE_SIZE] = {NULL};

int hash(int);
void insert(int, int);
Node* search(int);
void showHash(Node**);
void delete(int);

int main() {
	insert(20, 30);
	insert(40, 35);
	Node *found = search(40);
	printf("%d\n", found->value);
	found = search(20);
        printf("%d\n", found->value); 
	showHash(table);
	delete(40);
	delete(20);
	showHash(table);
	return 0;
}

int hash(int key) {
	return key % TABLE_SIZE;
}

void insert(int key, int value) {
	int index = hash(key);
	Node *newNode = malloc(sizeof(Node));
	newNode->key = key;
	newNode->value = value;
	newNode->next = table[index];
	table[index] = newNode;
}

Node* search(int key) {
	int index = hash(key);
	Node *temp = table[index];
	while (temp) {
		if (temp->key == key)
			return temp;
		temp = temp->next;
	} 
	return NULL;
}
 
void showHash(Node **ptr) {
	for(int i = 0; i < TABLE_SIZE; i++) {
		Node *temp = *(ptr + i);
		while(temp) {
			printf("%d->%d\n", temp->key, temp->value);
			temp = temp->next;
		}
	}
}

void delete(int key) {
	int index = hash(key);
	Node *temp = table[index];
	Node *prev = NULL;
	while(temp) {
		if (temp->key == key) {
			if (prev) {
				prev->next = temp->next;
			} else {
				table[index] = temp->next;
			}
			free(temp);
			return;
		}
		prev = temp;
		temp = temp->next;
	}
}
