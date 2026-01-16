#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

Node* insertEnd(Node *head, int value) {
    Node *newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("ERROR: Memory allocation failed.\n");
        return head;
    }
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        return newNode;
    }

    Node *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    return head;
}

void printList(Node *head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    Node *temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

Node* deleteValue(Node *head, int value) {
    if (head == NULL) return NULL;

    // if head needs to be deleted
    if (head->data == value) {
        Node *newHead = head->next;
        free(head);
        return newHead;
    }

    Node *temp = head;
    while (temp->next != NULL && temp->next->data != value) {
        temp = temp->next;
    }

    if (temp->next == NULL) {
        printf("Value not found.\n");
        return head;
    }

    Node *toDelete = temp->next;
    temp->next = toDelete->next;
    free(toDelete);

    return head;
}

void freeList(Node *head) {
    Node *temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main() {
    Node *head = NULL;
    int n, value, del;

    printf("How many numbers to insert? ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("ERROR: n must be positive.\n");
        return 0;
    }

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &value);
        head = insertEnd(head, value);
    }

    printf("Linked List: ");
    printList(head);

    printf("Enter a value to delete: ");
    scanf("%d", &del);

    head = deleteValue(head, del);

    printf("After deletion: ");
    printList(head);

    freeList(head);
    head = NULL;

    return 0;
}
