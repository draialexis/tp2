//
// Created by draia on 05/02/2021.
//

#ifndef TP2_EX13_H
#define TP2_EX13_H

void afficheZigzag(int n) {
    for (int i = 0; i < n; i++) {
        printf("z");
    }
    printf("igzag");
}

int zigzag(int debut, int fin, int nbDeZ) {
    int n = fin - debut + 1;
    if (n > 1) {
        for (int i = debut; i <= fin; ++i) {
            if (i % 2 == 0) {
                printf("%d ", i);
            }
            afficheZigzag(nbDeZ);
            if (i % 2 != 0) {
                printf(" %d", i);
            }
            printf("\n");
        }
        return (n);
    } else {
        return 0;
    }
}

#endif //TP2_EX13_H
