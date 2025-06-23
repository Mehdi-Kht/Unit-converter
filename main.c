#include <stdio.h>
#include <stdlib.h>
#include "conversions.h"

void afficherMenuPrincipal();
void menuTemperature();
void menuLongueur();
void menuPoids();
void menuTemps();

int main() {
    int choix;
    do {
        afficherMenuPrincipal();
        scanf("%d", &choix);
        switch (choix) {
            case 1: menuTemperature(); break;
            case 2: menuLongueur(); break;
            case 3: menuPoids(); break;
            case 4: menuTemps(); break;
            case 0: printf("Au revoir !\n"); break;
            default: printf("Choix invalide.\n");
        }
    } while (choix != 0);

    return 0;
}

void afficherMenuPrincipal() {
    printf("\n=== Convertisseur d'unités ===\n");
    printf("1. Température (Celsius <-> Fahrenheit)\n");
    printf("2. Longueur (m <-> cm <-> pouces)\n");
    printf("3. Poids (kg <-> lb)\n");
    printf("4. Temps (secondes <-> minutes <-> heures)\n");
    printf("0. Quitter\n");
    printf("Choisissez une option : ");
}

void menuTemperature() {
    int choix;
    float valeur;
    printf("\n-- Température --\n");
    printf("1. Celsius -> Fahrenheit\n");
    printf("2. Fahrenheit -> Celsius\n");
    printf("Choix : ");
    scanf("%d", &choix);
    printf("Entrez la valeur : ");
    scanf("%f", &valeur);
    if (choix == 1)
        printf("%.2f °C = %.2f °F\n", valeur, celsius_to_fahrenheit(valeur));
    else if (choix == 2)
        printf("%.2f °F = %.2f °C\n", valeur, fahrenheit_to_celsius(valeur));
    else
        printf("Choix invalide.\n");
}

void menuLongueur() {
    int choix;
    float valeur;
    printf("\n-- Longueur --\n");
    printf("1. Mètre -> Centimètre\n");
    printf("2. Centimètre -> Mètre\n");
    printf("3. Centimètre -> Pouce\n");
    printf("4. Pouce -> Centimètre\n");
    printf("Choix : ");
    scanf("%d", &choix);
    printf("Entrez la valeur : ");
    scanf("%f", &valeur);
    switch (choix) {
        case 1: printf("%.2f m = %.2f cm\n", valeur, m_to_cm(valeur)); break;
        case 2: printf("%.2f cm = %.2f m\n", valeur, cm_to_m(valeur)); break;
        case 3: printf("%.2f cm = %.2f pouces\n", valeur, cm_to_inches(valeur)); break;
        case 4: printf("%.2f pouces = %.2f cm\n", valeur, inches_to_cm(valeur)); break;
        default: printf("Choix invalide.\n");
    }
}

void menuPoids() {
    int choix;
    float valeur;
    printf("\n-- Poids --\n");
    printf("1. Kilogramme -> Livre\n");
    printf("2. Livre -> Kilogramme\n");
    printf("Choix : ");
    scanf("%d", &choix);
    printf("Entrez la valeur : ");
    scanf("%f", &valeur);
    if (choix == 1)
        printf("%.2f kg = %.2f lb\n", valeur, kg_to_lb(valeur));
    else if (choix == 2)
        printf("%.2f lb = %.2f kg\n", valeur, lb_to_kg(valeur));
    else
        printf("Choix invalide.\n");
}

void menuTemps() {
    int choix;
    float valeur;
    printf("\n-- Temps --\n");
    printf("1. Secondes -> Minutes\n");
    printf("2. Minutes -> Secondes\n");
    printf("3. Minutes -> Heures\n");
    printf("4. Heures -> Minutes\n");
    printf("Choix : ");
    scanf("%d", &choix);
    printf("Entrez la valeur : ");
    scanf("%f", &valeur);
    switch (choix) {
        case 1: printf("%.2f s = %.2f min\n", valeur, sec_to_min(valeur)); break;
        case 2: printf("%.2f min = %.2f s\n", valeur, min_to_sec(valeur)); break;
        case 3: printf("%.2f min = %.2f h\n", valeur, min_to_hour(valeur)); break;
        case 4: printf("%.2f h = %.2f min\n", valeur, hour_to_min(valeur)); break;
        default: printf("Choix invalide.\n");
    }
}