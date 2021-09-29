//
// Created by mbmar on 29/09/2021.
//
#include "fonctions.h"
#include <stdio.h>


//fonction qui retourne le plus grand des deux nombres
//IN : (a et b) deux entiers que l'on va comparer
//OUT : (max) le plus grand des entiers saisis en entrée
int getMax(int a, int b){

    int max = 0;

    if(a <= b)
        max = b;
    else if(b < a)
        max = a;

    return max;
}

//fonction qui demande un nombre entier et qui le retourne
//IN : void
//OUT : (nombre) l'entier saisi dans la console
int saisirEntier(){

    int nombre = 0;

    printf("Saisissez un nombre entier je vous prie : \n");
    scanf("%d",&nombre);

    return nombre;
}

//fonction qui retoune l'aire d'un rectangle
//IN : (longueurRectangle et largeurRectangle)
//OUT : l'aire, le produit des deux entrées
int calculAireRectangle(int longueurRectangle, int largeurRectangle){
    return longueurRectangle * largeurRectangle;
}

//fonction qui retourne le périmètre d'un rectangle
//IN : la longueur et la largeur du rectangle
//OUT : le périmètre
int calculPerimetreRectangle(int longueurRectangle, int largeurRectangle){
    return 2 * (longueurRectangle + largeurRectangle);
}

//fonction qui vérifie la divisibilité
//IN : le nombre et son diviseur
//OUT : 1 si le premier paramètre est divisible par le second, 0 sinon
int divisibilite(int dividande, int diviseur){

    int reste = 0;

    if( dividande % diviseur == 0) {
        reste = 1;
    }
    else{
        reste = 0;
    }
    return reste;
}

//fonction qui regarde si le premier nombre est supérieur ou egale au second
//IN : (nombre et comparaison)
//OUT : 1 si le nombre est plus grand ou egale à la comparaison, 0 sinon
int superieur(int nombre, int comparaison){
    int testSuperieur = 0;
    if( nombre >= comparaison)
        testSuperieur = 1;
    else
        testSuperieur = 0;
    return testSuperieur;
}

//fonction qui prend trois notes et qui retourne la moyenne si les notes sont valides
//IN : note1, note2 et note3
//OUT : la moyenne des notes si elles sont valides, -1 sinon
float moyenneTroisNotes(int note1, int note2, int note3){
    float valeurRetour = 0.0f;
    if(note1 < 0 || note1 > 20 || note2 < 0 || note2 > 20 || note2 < 0 || note2 > 20)
        valeurRetour = -1;
    else
        valeurRetour = (note1 + note2 + note3) / 3;
    return valeurRetour;
}

//fonction qui compte les élèves de toutes les classes
//IN : prendre le nombre de classes
//OUT : retourne le nombre total d'élèves
int sommeEleves(int nombreClasses){

    int somme = 0, eleves = 0;
    int i = 0;

    for(i = 1; i <= nombreClasses; i++){
        printf("Entrez le nombre d'eleves de la %d eme classe : \n", i);
        scanf("%d", &eleves);
        somme = somme + eleves;
    }

    return somme;
}

//fonction qui indique le nombre d'étages d'une pyramide en fonction du nombre de blocs
//IN : prendre le nombre de blocs
//OUT : renvoie le nombre d'étages
int nombreEtages(int nombreBlocs){

    int sommeBlocs = 0;
    int compteurEtages = 0;

    while( sommeBlocs <= nombreBlocs )
    {
        sommeBlocs = (sommeBlocs * sommeBlocs) + ((sommeBlocs + 1) * (sommeBlocs + 1));
        compteurEtages = compteurEtages + 1;
    }

    return compteurEtages;
}

//fonction qui somme tous les nombres positifs saisis et renvoie la moyenne
//lorsqu'il y a un nombre négatif d'entré
//IN : void
//OUT : moyenne des nombres positifs et -1 si aucun nombre positif saisi
float moyenneNombresPositifs(){

    float moyenne = 0.0f;
    int nombreSaisi = 0;
    int somme = 0, compteur = 0;

    //somme tant que le nombre saisi est positif
    while( nombreSaisi >= 0)
    {
        printf("Entrez un nombre entier positif : \nPour arreter, entrez un nombre negatif. \n");
        scanf(" %d", &nombreSaisi);
        if (nombreSaisi >= 0)
        {
            somme = somme + nombreSaisi;
            compteur++;
        }
        //printf("nombre : %d, somme : %d, compteur : %d\n", nombreSaisi, somme, compteur);
    }

    //retourne -1 si la boucle n'a pas tourné et la moyenne sinon
    if(compteur == 0)
        moyenne = -1;
    else if(compteur > 0)
        moyenne = somme / compteur;

    return moyenne;
}

/*
 * La boucle while de la fonction ne s'arrête que lorsqu'il y a deux nombres négatifs de saisis à la suite.
 * Si je saisis une valeur négative, puis une positive, la boucle se lance à nouveau
 * tout en réinitialisant la somme et le compteur à 0.
 */