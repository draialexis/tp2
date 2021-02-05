//
// Created by draia on 05/02/2021.
//

#ifndef TP2_EX2_H
#define TP2_EX2_H

float perimetreRectangle(float longueur, float largeur) {
    float perimetre;
    perimetre = (2 * longueur) + (2 * largeur);
    return perimetre;
}

float aireRectangle(float longueur, float largeur) {
    float aire;
    aire = longueur * largeur;
    return aire;
}

float aireTriangleRectangle(float longueur, float largeur) {
    float aire;
    aire = longueur * largeur / 2;
    return aire;
}

#endif //TP2_EX2_H
