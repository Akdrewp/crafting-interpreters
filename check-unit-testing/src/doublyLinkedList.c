#include <stdlib.h>
#include <stdio.h>
#include "doublyLinkedList.h"


/**
 * Creates a doublyLinkedList and returns the head
 * */
Node* createDoublyLinkedList(void) {
    Node *head = malloc(sizeof(Node));
    head->data = 0;
    head->prev = NULL;
    head->next = NULL;

    return head;
}

/**
 * Returns the size of the linked list given a head
 * the head must have it's prev be NULL or will return -1
 * @param head pointer to a head node
 * */
int size(Node *head) {
    if(head->prev != NULL) {
        return -1;
    }

    Node* curNode = head;
    int count = 1;
    while(curNode->next != NULL) {
        count++;
        curNode = curNode->next;
    }
    return count;
}


/**
 * Returns the data of the new node or -1 if not added
 * @param head pointer to a head node
 * */
int add(int data, Node *head) {

    Node* curNode = head;
    while(curNode->next != NULL) {
        curNode = curNode->next;
    }

    Node *newNode = malloc(sizeof(Node));

    newNode->data = data;
    newNode->prev = curNode;
    newNode->next = NULL;

    curNode->next = newNode;

    return data;
}

/**
 * Returns the data of the node at index or -1 if out of bounds
 * @param head pointer to a head node
 * */
int get(int index, Node *head) {

    Node* curNode = head;
    for (int i = 0; i < index; i++) {
        if (curNode->next == NULL) {
            return -1;
        }
        curNode = curNode->next;
    }

    return curNode->data;
}


void freeList(Node *head) {
    free(head);
}