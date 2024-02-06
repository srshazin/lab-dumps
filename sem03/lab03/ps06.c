/**
 * Written by Shazin,
 * Course CSE2153
 * Problem Set: 6
 * Problem: Write a program in C to insert a node in the middle of a Singly
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
// Function to find the middle location of the linked list
static struct Node *get_middle_loc(struct Node *head, size_t n) {
  // Here n param represents the size of the linked list
  // so if n is a odd number
  size_t pos = 0;
  if (n % 2 != 0) {
    pos = (n - 1) / 2;
  } else {
    pos = n / 2;
  }
  // Than we traverse the list
  for (size_t i = 1; i < pos; i++) {
    head = head->next;
  }
  return head;
}
// Function to insert node at a specific memory address
void insert_at_mid(struct Node **head, int value, size_t n) {
  struct Node *new_node = create_node(value);
  // We get the middle node's location
  struct Node *loc = get_middle_loc(*head, n);
  // set the next of new node to the next of mid
  new_node->next = loc->next;
  // than we set the next of the middle to new node
  loc->next = new_node;
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
  int mid_val;
  printf("Number at the middle: ");
  scanf("%d", &mid_val);
  insert_at_mid(&head, mid_val, n);
  traverse_list(head);
  flush_nodes(head);
}