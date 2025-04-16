#include <stdio.h>

void triangleAvecFor(int compteur){
    for (int i = 0; i<compteur; i++){
        for (int j=0; j<i; j++)
            if(j==0 || j==i-1 || i==compteur-1)
                printf("* ");
            else
                printf("# ");
        printf("\n");
    }
}

void triangleAvecWhile(int compteur){
    int i = 0;
    while (i<compteur){
        int j = 0;
        while(j<i){
            if(j==0 || j==i-1 || i==compteur-1)
                printf("* ");
            else
                printf("# ");
            j++;
        }
        i++;
        printf("\n");
    }
}

int main() {
    int compteur = 11;
    while (compteur > 10){
        printf("saisissez la taille du triangle (inferieur à 10) : ");
        scanf("%d", &compteur);
    }
    triangleAvecFor(compteur);
    triangleAvecWhile(compteur);
    return 0;
}