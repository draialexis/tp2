#include <stdio.h>
#include "ex1.h"
#include "ex2.h"
#include "ex3.h"
#include "ex5.h"
#include "ex9.h"
#include "ex11v2.h"
#include "ex12.h"
#include "ex13.h"

int main() {

    //ex1
    int n1, m1;

    printf("Debut du programme principal...\n");
    printf("Choisissez un entier pour la diagonale:");
    scanf("%d", &n1); // Acquisition de l2'entier n1 par la console
    fflush(stdin);

    m1 = diagonale(n1); // Lancement de la fonction diagonale, en stockant la valeur de retour dans la variable m1.
    printf("La diagonale a utilise %d espaces.\n", m1);

    printf("Fin du programme principal.\n");

    //ex2
    float L2, l2;
    float resultat;

    printf("Longueur du rectangle:");
    scanf("%f", &L2);
    fflush(stdin);
    printf("Largeur du rectangle:");
    scanf("%f", &l2);
    fflush(stdin);

    resultat = perimetreRectangle(L2, l2);
    printf("Le perimetre du rectangle ayant comme longueur %f et comme largeur %f est: %f.\n", L2, l2, resultat);
    printf("L'aire de ce rectangle est: %f.\n", aireRectangle(L2, l2));
    resultat = aireTriangleRectangle(L2, l2);
    printf("L'aire du triangle rectangle ayant comme longueur %f et comme largeur %f est: %f.\n", L2, l2, resultat);

    //ex3
    int n3;
    printf("Veuillez entrer un entier:\n");
    scanf("%d", &n3);
    fflush(stdin);
    readIntegersWithFor(n3);

    //ex4
    int i4 = 0;
    while (i4 <= 10) {
        printf("i4 vaut %d\n", i4++);// ne pas oublier d'incrémenter la variable
        //...d'itération manuellement dans une boucle while
    }

    //ex5
    int n5;
    printf("Veuillez entrer un entier:\n");
    scanf("%d", &n5);
    fflush(stdin);
    readIntegersWithWhile(n5);

    //ex9
    int input9;
    printf("Veuillez entrer un entier superieur a un :\n");
    scanf("%d", &input9);
    fflush(stdin);
    if (input9 > 1 && input9 < 130){
        xLine(input9);
        xSquare(input9);
        xTriangle1(input9);
        xTriangle2(input9);
        xTriangle3(input9);
        xTriangle4(input9);
    } else {
        printf("INVALID INPUT\n");
    }

    //ex11v2
    int input11v21, input11v22;
    printf("Entrez deux entiers strictement positifs :\n");
    scanf("%d\n%d", &input11v21, &input11v22);
    fflush(stdin);
    if (input11v21 > 0 && input11v22 > 0) {
        chiffreParChiffre(input11v21);
        chiffreParChiffre(input11v22);
        printf("L'entier %d contient %d chiffres\n", input11v21, nbChiffres(input11v21));
        printf("L'entier %d contient %d chiffres\n", input11v22, nbChiffres(input11v22));
        rectangleSommeAligne(input11v21, input11v22);
        chiffreParChiffreOrdonne(input11v21 + input11v22);
    } else {
        printf("INVALID INPUT\n");
    }

    //ex12
    int input12;
    printf("Veuillez entrer un entier superieur a 1:\n");
    scanf("%d", &input12);
    fflush(stdin);
    if (input12 > 1) {
        syracuse(input12);
    } else {
        printf("INVALID INPUT");
    }

    //ex13
    int input131;
    int input132;
    int input133;
    printf("Veuillez entrer trois entiers (debut, fin, nb de z (debut devra etre inferieur a fin)):\n");
    scanf("%d\n%d\n%d", &input131, &input132, &input133);
    fflush(stdin);
    printf("renvoie : %d\n", zigzag(input131, input132, input133));

    return 0;
}
