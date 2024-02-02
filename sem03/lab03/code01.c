#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the linked list
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node with given data
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a new node at the end of the linked list
void append(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    struct Node* last = *head;
    while (last->next != NULL) {
        last = last->next;
    }
    last->next = newNode;
}

// Function to display the elements of the linked list
void display(struct Node* head) {
    while (head != NULL) {
        printf("Data = %d\n", head->data);
        head = head->next;
    }
}

int main() {
    int numNodes, data;

    // Input the number of nodes
    printf("Input the number of nodes: ");
    scanf("%d", &numNodes);

    struct Node* linkedList = NULL;

    // Input data for each node
    for (int i = 1; i <= numNodes; ++i) {
        printf("Input data for node %d : ", i);
        scanf("%d", &data);
        append(&linkedList, data);
    }

    // Display the entered data
    printf("\nData entered in the list:\n");
    display(linkedList);

    return 0;
}
