//
// Created by draia on 05/02/2021.
//

#ifndef TP2_EX3_H
#define TP2_EX3_H

void readIntegersWithFor(int n) {
    if (n == 1) {
        printf("%d\n", n);
    } else if (n > 1) { // pour n entier positif
        for (int i = 1; i <= n; ++i) {
            printf("%d\n", i);
        }
    } else { // pour n nul ou négatif
        for (int i = 1; i >= n; --i) {
            printf("%d\n", i);
        }
    }
}

#endif //TP2_EX3_H
