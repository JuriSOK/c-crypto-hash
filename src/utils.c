//
// Created by Arnaud Sok on 16/02/2025.
//
#include "../include/utils.h"
#include <string.h>

// Fonction pour convertir un caractère en binaire
// Elle prend un caractère 'c' et le stocke dans 'out' sous forme de bits (8 bits par caractère)
void char_to_binaire(char c,char *out) {
    int valeur = c;
    for (int i = 7; i >= 0; i--) {
        out[i] = valeur %  2;
        valeur = valeur / 2;
    }
}

// Fonction pour convertir une chaine de caractère en binaire
// Elle prend un caractère 'c' et le stocke dans 'out' sous forme de bits (8 bits par caractère)
void string_to_binaire(char *str, char *out) {

    int cpt = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        unsigned char temp[8];
        char_to_binaire(str[i], temp);

        for (int j = 0 ; j < 8; j++) {
            out[cpt] = temp[j];
            cpt++;
        }
    }
}