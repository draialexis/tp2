//
// Created by draia on 05/02/2021.
//

#ifndef TP2_EX9_H
#define TP2_EX9_H

void xLine(int n) {
    printf(". . . S T A R T I N G      X  L I N E. . .\n");
    for (int i = 0; i < n; i++) {
        printf("x");
    }
    printf("\n\n");
}

void xSquare(int n) {
    printf(". . . S T A R T I N G      X  S Q U A R E. . .\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("x");
        }
        printf("\n");
    }
    printf("\n");
}

void xTriangle1(int n) {
    printf(". . . S T A R T I N G      X  T R I A N G L E 1. . .\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i + 1; j++) {
            printf("x");
        }
        printf("\n");
    }
    printf("\n");
}

void xTriangle2(int n) {
    printf(". . . S T A R T I N G      X  T R I A N G L E 2. . .\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            printf("x");
        }
        printf("\n");
    }
    printf("\n");
}

void xTriangle3(int n) {
    printf(". . . S T A R T I N G      X  T R I A N G L E 3. . .\n");
    for (int i = 0; i < n; i++) {
        for (int k = 0; k < i; k++) {
            printf(" ");
        }
        for (int j = 0; j < n - i; j++) {
            printf("x");
        }
        printf("\n");
    }
    printf("\n");
}

void xTriangle4(int n) {
    printf(". . . S T A R T I N G      X  T R I A N G L E 4. . .\n");
    for (int i = 0; i < n; i++) {
        for (int k = 0; k < n - (i + 1); k++) {
            printf(" ");
        }
        for (int j = 0; j < i + 1; j++) {
            printf("x");
        }
        printf("\n");
    }
    printf("\n");
}

#endif //TP2_EX9_H
