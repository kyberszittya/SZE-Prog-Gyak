//
// Created by keret on 2026. 03. 22..
//

#include "linked_list.h"

#include <iostream>

int main() {
    // Create nodes
    Node* head = new Node{1, nullptr};
    Node* second = new Node{2, nullptr};
    Node* third = new Node{3, nullptr};

    // Link nodes
    head->next = second;
    second->next = third;

    // Print linked list
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
    // Tra

    // Clean up memory
    delete head;
    delete second;
    delete third;

    return 0;
}