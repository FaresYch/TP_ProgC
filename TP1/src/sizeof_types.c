#include <stdio.h>

int main() {
    printf("Taille d'un char : %ld octets \n", sizeof(char));
    printf("Taille d'un short : %ld octets \n", sizeof(short));
    printf("Taille d'un int : %ld octets \n", sizeof(int));
    printf("Taille d'un long int : %ld octets \n", sizeof(long int));
    printf("Taille d'un long long int : %ld octets \n", sizeof(long long int));
    printf("Taille d'un float : %ld octets \n", sizeof(float));
    printf("Taille d'un double : %ld octets \n", sizeof(double));
    printf("Taille d'un long double : %ld octets \n", sizeof(long double));
    return 0;
}
