/**
 * Written by Shazin,
 * Course CSE2153
 * Problem Set: 2
 * Problem: Write a program in C to create a singly linked list of n nodes and
 * display it in reverse order.
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
// Function  to traverse a linked list in reverse
void reverse_traverse(struct Node *head) {
  struct Node *prev = NULL;
  struct Node *current = head;
  struct Node *nextNode;

  while (current != NULL) {
    // We set the nextNode to the next of current one
    nextNode = current->next;
    // set the current's next to prev
    current->next = prev;
    // set prev node to current
    prev = current;
    // and finally we are setting current =to nextNode
    current = nextNode;
  }

  // Head now points to the last node (previously the first node)
  head = prev;
  /*
     So basically the loop above mirrors the next of each node to point to it's
     previous node thus the last node becomes the current head now and it's next
     is linked with the previous node
     */

  printf("\nThe list in reverse order:\n");
  // Now  we can just call the original traverse function to traverse as usual
  traverse_list(head);
}
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
  traverse_list(head);
  reverse_traverse(head);
  flush_nodes(head);
}