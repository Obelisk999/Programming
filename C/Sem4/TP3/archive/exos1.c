#include <stdio.h>
#include <stdlib.h>

// D�finition de la structure du n�ud
typedef struct Noeud {
    int valeur; // Valeur enti�re du n�ud
    struct Noeud *filsGauche; // Pointeur vers le n�ud fils gauche
    struct Noeud *filsDroite; // Pointeur vers le n�ud fils droit
}Noeud;


int main() {
    // Exemple d'utilisation de la structure
    Noeud racine; 
    racine.valeur = 10; // Assignation d'une valeur � la racine
    racine.filsGauche = NULL; // Initialisation du fils gauche � NULL (pas de fils pour l'instant)
    racine.filsDroite = NULL; // Initialisation du fils droit � NULL (pas de fils pour l'instant)
    
    // Lib�ration de la m�moire allou�e
    //free(racine);

    return 0;
}

