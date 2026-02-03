//
// Created by keret on 2025. 05. 30..
//
#include <iostream>
#include <cstdlib>


struct Node {
    int  data;
    Node* next;
};

Node* build_list(const int* a, int n)
{
    if (n <= 0 || a == nullptr)
        return nullptr;                // üres lista vagy hibás bemenet

    Node* head = nullptr;              // lista feje
    for (int i = 0; i < n; ++i) {      // bejárás eredeti sorrendben
        Node* node = new Node{ a[i], head }; // új csomópont -> lista elejére
        head = node;                   // frissítjük a fejet
    }
    return head;                       // head az első (fordított) elem
}



void print_list(const Node* head)
{
    for (const Node* p = head; p; p = p->next)
        std::cout << p->data << (p->next ? ' ' : '\n');
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

    int m;
    if (!(std::cin >> m) || m < 0) return 1;

    srand(20);

    int* tmp = new int[m];
    for (int i = 0; i < m; ++i)
        tmp[i] = std::rand() % 100;   // 0–99 közötti véletlen szám

    Node* head = build_list(tmp, m);
    print_list(head);

    free_list(head);
    delete[] tmp;
    return 0;
}