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

int main() {

    //ex1
    int n1, m1;

    printf("Debut du programme principal...\n");
    printf("Choisissez un entier pour la diagonale:");
    scanf("%d", &n1); // Acquisition de l'entier n1 par la console
    fflush(stdin);

    m1 = diagonale(n1); // Lancement de la fonction diagonale, en stockant la valeur de retour dans la variable m1.
    printf("La diagonale a utilise %d espaces.\n", m1);

    printf("Fin du programme principal.\n");

    //ex2
    float L, l;
    float resultat;

    printf("Longueur du rectangle:");
    scanf("%f", &L);
    fflush(stdin);
    printf("Largeur du rectangle:");
    scanf("%f", &l);
    fflush(stdin);

    resultat = perimetreRectangle(L, l);
    printf("Le perimetre du rectangle ayant comme longueur %f et comme largeur %f est: %f.\n", L, l, resultat);
    printf("L'aire de ce rectangle est: %f.\n", aireRectangle(L, l));
    resultat = aireTriangleRectangle(L, l);
    printf("L'aire du triangle rectangle ayant comme longueur %f et comme largeur %f est: %f.\n", L, l, resultat);

    //ex3
    int n3;
    printf("Veuillez entrer un entier:\n");
    scanf("%d", &n3);
    fflush(stdin);
    readIntegersWithFor(n3);

    return 0;
}
