//
// Created by keret on 2026. 03. 02..
//

#ifndef HW_2026_COMMON_H
#define HW_2026_COMMON_H

double factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

#endif //HW_2026_COMMON_H