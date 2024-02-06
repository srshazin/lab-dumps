/**
 * Written by Shazin,
 * Course CSE2153
 * Problem Set: 5
 * Problem: Write a program in C to insert a new node at the end of a Singly
 * Linked List.
 */
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
// Declare the node
struct Node {
  int value;
  struct Node *next;
};

struct Node *create_node(int value) {
  struct Node *node = (struct Node *)malloc(sizeof(struct Node));
  node->value = value;
  node->next = NULL;
  return node;
}
void traverse_list(struct Node *head) {
  while (head != NULL) {
    printf("%d\t", head->value);
    head = head->next;
  }
  printf("\n");
}
// Append function inserts a new node at the end of  the linked list
int append_node(struct Node **head, int value) {
  struct Node *node = create_node(value);
  // Check if the head is the only node
  if ((*head)->next == NULL) {
    // we insert the second element
    (*head)->next = node;
    // and than we return the function
    return 1;
  }
  // If not than we find the last element for the list
  struct Node *last = *head;
  // now last  node points to first node later we'll change'em from the loop
  // We check if last.next is not null
  while (last->next != NULL) {
    // We keep updating the pointers
    last = last->next;
  }
  // After the completion of the loop we'll have the last node stored in the
  // last variable so now we set the next of last member to the new node
  last->next = node;
  return 1;
}

/**
 * The following function is not necessary but it's for practical reason.
 * It's always the best practice to delete all the allocated memories
 */
void flush_nodes(struct Node *head) {
  // We traverse as usual and keep deleting
  struct Node *cursor = head->next;
  while (cursor != NULL) {
    free(head);
    head = cursor;
    cursor = cursor->next;
  }
}

int main(void) {
  // Initializer of the Linked list
  struct Node *head;
  printf("Number of nodes: ");
  size_t n;
  scanf("%zu", &n);
  for (size_t i = 0; i < n; i++) {

    printf("Value for Node #%zu: ", i);
    int value;
    scanf("%d", &value);
    if (i == 0)
      head = create_node(value);
    else
      append_node(&head, value);
  }
  int prepend_val;
  printf("Number at the beginning: ");
  scanf("%d", &prepend_val);
  prepend(&head, prepend_val);
  traverse_list(head);
  flush_nodes(head);
}