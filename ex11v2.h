//
// Created by draia on 05/02/2021.
//

#ifndef TP2_EX11V2_H
#define TP2_EX11V2_H

int nbChiffres(int n) {
    int figures = 0;
    while (n > 0) {
        n = n / 10;
        ++figures;
    }
    return figures;
}

void chiffreParChiffre(int n) {
    printf("On decompose l'entier %d :\n", n);
    while (n > 0) {
        printf("%d\n", n % 10);
        n = n / 10;
    }
}

void affiche(int n, int longueur) {
    for (int i = 0; i < longueur - nbChiffres(n); ++i) {
        printf("0");
    }
    printf("%d ", n);
}

void rectangleSommeAligne(int n, int m) {
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            affiche(i + j, nbChiffres(n + m));
        }
        printf("\n");
    }
}

void chiffreParChiffreOrdonne(int n) {
    printf("On decompose l'entier %d dans l'ordre :\n", n);
    int c = nbChiffres(n);
    int p = 1;
    for (int i = 0; i < c - 1; ++i) {
        p = p * 10;
    }

    while (n != 0) {
        printf("%d\n", n / p);
        n = n - ((n / p) * p);
        p = p / 10;
        --c;
    }
    printf("\n");
}

#endif //TP2_EX11V2_H
