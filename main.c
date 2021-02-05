#include <stdio.h>

//ex1
/*
 *
1)
a)
- VRAI : un seul argument, de type int, appelé n
- FAUX : diagonale() returns an integer
- FAUX : diagonale() se compile peut-être avant main(), mais c'est main() qui s'execute en premier. main() appelle diagonale l32.
- FAUX : une variable locale (nbEspaces) et deux paramètres (i et j)
- FAUX : nbEspaces est une variable locale à diagonale(), main() n'y a pas accès de toute façon. diagonale() va retourner le contenu de nbEspaces.
- FAUX : on aurait pu donner un autre nom à la variable n, déclarée l26, et la passer en argument à diagonale() sans problème.
- VRAI : on a défini en l3 le nombre de paramètres qu'accepte diagonale(). Le programme ne pourra se compiler que si on utilise exactement 1 argument quand on invoque diagonale().

l'utilisateur est invité a choisir un entier, puis la fonction diagonale() est invoquée avec cet entier.
Dans diagonale(), on initialise une variable nbEspaces à 0, puis une double boucle est lancée pour afficher des espaces et des nombres.
C'est une double boucle; la boucle interne va d'abord afficher autant d'espaces qu'il y a eu d'itérations de la boucle externe.
La boucle interne va aussi incrémenter la variable nbEspaces.
puis on repasse sur la boucle externe à chaque fois qu'on sort de la boucle interne, pour afficher le nombre d'itérations de la boucle externe.
Enfin, on renvoie a main() le nbEspaces, et main affiche ce bilan

*/

int diagonale(int n) // Ecrit les entiers de 0 à n en formant une diagonale
{
    int i, j;
    int nbEspaces = 0;

    for (i = 0; i <= n; i++) {
        for (j = 0; j < i; j++)
            // La boucle permet d'écrire i espaces
        {
            printf(" "); // Ecrire un espace
            nbEspaces++; // incrementation du nombre d'espaces
        }
        // Ecriture de l'entier voulu, suivi d'un retour à la ligne
        printf("%d \n", i);

    }

    return nbEspaces;
}

int diagonaleInversee(int n) // Ecrit les entiers de 0 à n en formant une diagonale
{
    int i, j;
    int nbEspaces = 0;

    for (i = n; i >= 0; i--) {
        for (j = i; j >= 0; j--)
            // La boucle permet d'écrire i espaces
        {
            printf(" "); // Ecrire un espace
            nbEspaces++; // incrementation du nombre d'espaces
        }
        // Ecriture de l'entier voulu, suivi d'un retour à la ligne
        printf("%d \n", i);

    }

    return nbEspaces;
}

int diagonaleDecroissante(int n) // Ecrit les entiers de 0 à n en formant une diagonale
{
    int i, j;
    int nbEspaces = 0;

    for (i = n; i >= 0; i--) {
        for (j = 0; j < (n - i); j++)
            // La boucle permet d'écrire i espaces
        {
            printf(" "); // Ecrire un espace
            nbEspaces++; // incrementation du nombre d'espaces
        }
        // Ecriture de l'entier voulu, suivi d'un retour à la ligne
        printf("%d \n", i);

    }

    return nbEspaces;
}

//ex2
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

//ex3
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

//ex5
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

//ex9
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

//ex11v2
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

//ex12
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

//ex13
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
