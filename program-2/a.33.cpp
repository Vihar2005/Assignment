#include <stdio.h>
#include <stdlib.h>
struct node 
{
    int data;
    struct node *next;
};

struct node *head = NULL;

void add_element(int data) 
{
    struct node *new_node = (struct node*) malloc(sizeof(struct node));

    new_node->data = data;
    new_node->next = NULL;

    if (head == NULL) 
	{
        head = new_node;
        return;
    }

    struct node *current = head;
    while (current->next != NULL) 
	{
        current = current->next;
    }

    current->next = new_node;
}


void remove_element(int data) 
{
    if (head == NULL) 
	{
        printf("The linked list is empty.\n");
        return;
    }

    if (head->data == data) 
	{
        struct node *temp = head;
        head = head->next;
        free(temp);
    }


