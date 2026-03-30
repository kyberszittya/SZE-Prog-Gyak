//
// Created by keret on 2026. 03. 30..
//

#define SIZE 10

#include<iostream>


struct Node {
    int data[SIZE];
    int count;
    Node* next;
};

Node* buildListFromMatrix(const int matrix[][SIZE], const int counts[], int rows) {
    Node* head = nullptr;
    Node* prev = nullptr;
    for (int r = 0; r < rows; r++) {
        Node* node = new Node;
        node->count = counts[r];
        node->next = nullptr;
        for (int i = 0; i < SIZE; i++) {
            node->data[i] = (i < counts[r]) ? matrix[r][i] : -1;
        }
        if (head == nullptr) {
            head = node;
        } else {
            prev->next = node;
        }
        prev = node;
    }
    return head;
}

void freeList(Node* head) {
    while (head != nullptr) {
        Node* next = head->next;
        delete head;
        head = next;
    }
}

int sumList(const Node* head) {

}

int main(int argc, char* argv[]) {
    const int matrix[][SIZE] = {
        {1, 2, 3, 4, 5},
        {10, 20, 30},
        {7, 7, 7, 7, 7, 7}
    };
    const int counts[] = {5, 3, 6};
    const int rows = sizeof(counts) / sizeof(counts[0]);
    Node* head = buildListFromMatrix(matrix, counts, rows);
    int total = sumList(head);
    std::cout << "Osszesen: " << total << std::endl;
    freeList(head);
}