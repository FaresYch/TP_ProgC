#include <stdio.h>

double aire(double rayon){
    return 3.14159 * rayon * rayon;
}

double perimetre(double rayon){
    return 2*3.14159*rayon;
}

int main() {
    double rayon;
    double a;
    double p;

    printf("Quelle est le rayon de votre cercle : ");
    scanf ("%lf", &rayon);
    printf("\n");

    a = aire(rayon);
    p = perimetre(rayon);

    printf("L'aire de votre cercle est de : %lf \n", a);
    printf("L'aire de votre cercle est de : %lf \n", p);

    return 0;
}