//
// Created by mbmar on 29/09/2021.
//
#include <stdio.h>
#include "exercices.h"
#include "fonctions.h"

void exercice1(){

    int a = 0, b = 0;
    int max = 0;

    printf("Saisissez deux entiers : \n");
    scanf(" %d %d", &a, &b);
    max = getMax(a,b);
    printf("Le nombre saisi le plus grand est : %d \n", max);

    return;
}

void exercice2(){

    int memeNombre = 0;

    memeNombre = saisirEntier();
    printf("Le nombre saisi est : %d", memeNombre);
    return;
}

void exercice3(){

    int longueur = 0, largeur = 0;
    int aire = 0, perimetre = 0;

    //recupération et affectation des valeurs nécessaires
    printf("Commencons par la longueur du rectangle : \n");
    longueur = saisirEntier();
    printf("Passons maintenant a la largeur du rectangle : \n");
    largeur = saisirEntier();

    //retour de l'aire et du périmètre
    aire = calculAireRectangle(longueur, largeur);
    printf("L'aire du rectangle est : %d \n", aire);
    perimetre = calculPerimetreRectangle(longueur, largeur);
    printf("Le perimetre du rectangle est : %d \n", perimetre);

    return;
}

void exercice4(){

    int dividande = 0, diviseur = 0;
    int comparaison = 0, testSuperieur = 0;

    //récupération et affectation des différentes valeurs nécessaires
    printf("Nous voulons savoir si un nombre entier est divisible par un autre. \n");
    printf("Commencons par le nombre. \n");
    dividande = saisirEntier();
    printf("Ensuite le diviseur. \n");
    diviseur = saisirEntier();
    printf("Entrez maintenant un comparateur. \n");
    comparaison = saisirEntier();

    //vérification de la divisibilité
    if(divisibilite(dividande, diviseur) == 1){
        printf("%d est bien divisible par %d. \n", dividande, diviseur);
    }
    else
        printf("%d n'est pas divisible par %d. \n", dividande, diviseur);

    //relation d'ordre
    if(superieur(dividande, comparaison) == 1)
        printf("%d est superieur ou egale a %d. \n", dividande, comparaison);
    else
        printf("%d est inferieur a %d. \n", dividande, comparaison);

    return;
}

void exercice5(){

    int note1 = 0, note2 = 0, note3 = 0;
    float moyenne = 0.0f;

    //récupération des notes
    printf("Entrez trois notes : \n");
    scanf("%d %d %d", &note1, &note2, &note3);

    //utilisation de la fonction moyenneTroisNotes pour calculer et renvoyer la moyenne
    moyenne = moyenneTroisNotes(note1, note2, note3);
    if (moyenne >= 0)
        printf("La moyenne des notes est : %f. \n", moyenne);
    else
        printf("Toutes les notes entrees ne sont pas valides. \n");

    return;
}

void exercice7(){

    int nombreClasses = 0;
    int nombreEleves = 0;

    printf("Quel est le nombre de classes dans l'ecole ? \n");
    nombreClasses = saisirEntier();
    nombreEleves = sommeEleves(nombreClasses);
    printf("Il y a %d eleves. \n", nombreEleves);

    return;
}

void exercice8(){

    int nombre = 0;
    int multiple7 = 0, multiple2 = 0;

    nombre = saisirEntier();

    while( (multiple2 != 1) || (multiple7 != 1) ){
        nombre = saisirEntier();
        multiple2 = divisibilite(nombre, 2);
        multiple7 = divisibilite(nombre, 7);
    }
    printf("%d est divisible par 2 et par 7. \n", nombre);

    return;
}

void exercice9(){

    int nombreBlocs = 0;
    int compteurEtages = 0;

    nombreBlocs = saisirEntier();
    compteurEtages = nombreEtages(nombreBlocs);
    printf("On peut faire %d etages \n", compteurEtages - 1);

    return;
}

void exercice10(){

    if(moyenneNombresPositifs() == -1)
        printf("Il n'y a pas eu de valeurs de saisies. \n");
    else
    {
        printf("La moyenne des nombres saisis est : %f. \n", moyenneNombresPositifs());
    }

    return;
}