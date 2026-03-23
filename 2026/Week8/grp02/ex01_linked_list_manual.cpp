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
    // Print n1 and next
    std::cout << "Node 1 data: "
        << head->data << ", Next node data: "
        << head->next->data << std::endl;


    // Clean up memory
    delete head;
    delete second;
    delete third;

    return 0;
}