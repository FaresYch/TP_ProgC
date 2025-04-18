#include <stdio.h>

void printBinaire(int dec){
    int copie = dec;
    int taille = 0;
    
    printf("%d => ", dec);

    if (dec == 0) {
        printf("0");
        return;
    }

    while (copie > 0) {
        taille++;
        copie /= 2;
    }

    int tab[taille];
    copie = dec;

    for (int i = taille - 1; i >= 0; i--) {
        tab[i] = copie % 2;
        copie /= 2;
    }
    
    for (int i = 0; i < taille; i++) {
        printf("%d", tab[i]);
    }
}

int main() {
    int nb;

    printf("Quel nombre voulez vous convertir en binaire ? : ");
    scanf("%d", &nb);

    printBinaire(nb);
    printf("\n");
    return 0;
}
