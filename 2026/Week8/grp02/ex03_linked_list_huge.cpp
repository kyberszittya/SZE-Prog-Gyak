//
// Created by keret on 2026. 03. 22..
//

#include "linked_list.h"

#include <iostream>

Node* createNode(int data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = nullptr;
    return newNode;
}

void printList(Node* head, int limit = 10) {
    Node* current = head;
    int count = 0;
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
        if (++count >= limit) {
            std::cout << "...";
            break;
        }
    }
    std::cout << std::endl;
}

void deleteList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        Node* nextNode = current->next;
        delete current;
        current = nextNode;
    }
}

int main() {
    const int SIZE = 1000000; // Create a linked list with 1 million nodes
    Node* head = createNode(1);
    Node* current = head;

    for (int i = 2; i <= SIZE; ++i) {
        current->next = createNode(i);
        current = current->next;
    }

    // Print the first 10 nodes to verify
    printList(head, 10);

    // Clean up memory
    deleteList(head);

    return 0;
}