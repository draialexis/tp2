//
// Created by draia on 05/02/2021.
//

#ifndef TP2_EX12_H
#define TP2_EX12_H

int suivant(int n) {
    int result;
    if (n == 1) {
        result = 1;
    } else if ((n % 2) == 0) {
        result = n / 2;
    } else {
        result = (3 * n) + 1;
    }
    return result;
}

void syracuse(int n) {
    while (n != 1) {
        printf("%d, ", n);
        n = suivant(n);
    }
    printf("et %d\n", n);
}

#endif //TP2_EX12_H
