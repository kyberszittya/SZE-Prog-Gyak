//
// Created by keret on 2025. 06. 06..
//
#include <iostream>
#include <cstdlib>
#include <ctime>

struct Node {
    int  data;
    Node* next;
};

Node* build_list(int* a, int n)
{
    Node* head = nullptr;
    for (int i = 0; i < n; ++i) {
        head = new Node{ a[i], head };
    }
    return head;
}

int list_length(Node* head)
{
    int len = 0;
    for (Node* p = head; p != nullptr; p = p->next)
        ++len;
    return len;

}

void print_list(Node* head)
{
    for (Node* p = head; p; p = p->next) {
        std::cout << p->data;
        if (p->next) std::cout << ' ';
    }
    std::cout << '\n';
}

void free_list(Node* head)
{
    while (head) {
        Node* tmp = head;
        head      = head->next;
        delete tmp;
    }
}

int main()
{
    std::ios::sync_with_stdio(false);

    int k;
    if (!(std::cin >> k) || k < 0 || k > 1000) return 1;

    std::srand(522);

    int* values = new int[k];
    for (int i = 0; i < k; ++i)
        values[i] = std::rand() % 100;

    Node* head = build_list(values, k);
    std::cout << list_length(head) << '\n';
    print_list(head);

    free_list(head);
    delete[] values;
    return 0;
}