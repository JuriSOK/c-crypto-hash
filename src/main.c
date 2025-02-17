#include <stdio.h>
#include <stdlib.h>

#include "../include/utils.h"

int main(void)
{

    unsigned char *array = (unsigned char *) malloc (8*sizeof(unsigned char));
    unsigned char lettre =  'N';

    char_to_binaire(lettre,array);

    printf("Binaire de '%c' (%d) : ", lettre, lettre);
    for (int i = 0; i < 8; i++) {
        printf("%d", array[i]);  // Afficher chaque bit
    }
    printf("\n");

    unsigned char str[] = "ARNAUD";
    unsigned char* out = (unsigned char*) malloc (8*sizeof(unsigned char));

    string_to_binaire(str,out);

    printf("Chaîne binaire : ");
    for (int i = 0; i < 8 * 6; i++) {
        printf("%d", out[i]);  // Afficher chaque bit
        if ((i + 1) % 8 == 0) {  // Ajouter un espace tous les 8 bits
            printf(" ");
        }
    }
    printf("\n");


    return 0;
}
