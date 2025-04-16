#include <stdio.h>

int main() {
    char c;
    short s;
    int i;
    long int li;
    long long int lli;
    float f;
    double d;
    long double ld;

    printf("Entrez un char : ");
    scanf(" %c", &c);  // note l'espace avant %c pour ignorer les '\n'

    printf("Entrez un short : ");
    scanf("%hd", &s);

    printf("Entrez un int : ");
    scanf("%d", &i);

    printf("Entrez un long int : ");
    scanf("%ld", &li);

    printf("Entrez un long long int : ");
    scanf("%lld", &lli);

    printf("Entrez un float : ");
    scanf("%f", &f);

    printf("Entrez un double : ");
    scanf("%lf", &d);

    printf("Entrez un long double : ");
    scanf("%Lf", &ld);

    // Affichage pour vérifier
    printf("\nValeurs lues :\n");
    printf("char = %c\n", c);
    printf("short = %hd\n", s);
    printf("int = %d\n", i);
    printf("long int = %ld\n", li);
    printf("long long int = %lld\n", lli);
    printf("float = %f\n", f);
    printf("double = %lf\n", d);
    printf("long double = %Lf\n", ld);

    return 0;
}
