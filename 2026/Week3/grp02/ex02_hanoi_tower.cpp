//
// Created by keret on 2026. 02. 16..
//

#include <iostream>

void hanoi(unsigned int n, unsigned int src, unsigned int dest, unsigned int aux, unsigned long long &operation_count) {
    if (n == 1) {
        std::cout << "Move disk 1 from rod " << src << " to rod " << dest << std::endl;
        operation_count++;
        return;
    }
    hanoi(n - 1, src, aux, dest, operation_count);
    std::cout << "Move disk " << n << " from rod " << src << " to rod " << dest << std::endl;
    operation_count++;
    hanoi(n - 1, aux, dest, src, operation_count);

}

void call_hanoi(unsigned int n = 3) {
    std::cout << n << " disks\n";

    unsigned long long operation_count = 0;
    hanoi(n, 1, 3, 2, operation_count);
    std::cout << "\nTotal operations: " << operation_count << std::endl;
}


int main(int argc, char *argv[]) {
    call_hanoi();
    call_hanoi(4);
    call_hanoi(6);
    call_hanoi(8);


    return 0;
}