//
// Created by draia on 05/02/2021.
//

#ifndef TP2_EX5_H
#define TP2_EX5_H

void readIntegersWithWhile(int n) {
    int i = 1;

    if (n == 1) {
        printf("%d\n", n);
    } else if (n > 1) { // pour n entier positif
        while (i <= n) {
            printf("%d\n", i++);
        }
    } else { // pour n nul ou négatif
        while (i >= n) {
            printf("%d\n", i--);
        }
    }
}

#endif //TP2_EX5_H
