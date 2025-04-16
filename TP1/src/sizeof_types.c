#include <stdio.h>

int main() {
    printf("Taille d'un char : %ld octets \n", sizeof(char));
    printf("Taille d'un unsigned char : %ld octets \n", sizeof(unsigned char));    
    printf("Taille d'un short : %ld octets \n", sizeof(short));
    printf("Taille d'un unsigned short : %ld octets \n", sizeof(unsigned short));
    printf("Taille d'un int : %ld octets \n", sizeof(int));
    printf("Taille d'un unsigned int : %ld octets \n", sizeof(unsigned int));
    printf("Taille d'un long int : %ld octets \n", sizeof(long int));
    printf("Taille d'un unsigned long int : %ld octets \n", sizeof(unsigned long int));
    printf("Taille d'un unsigned long long int : %ld octets \n", sizeof(unsigned long long int));
    printf("Taille d'un float : %ld octets \n", sizeof(float));
    printf("Taille d'un double : %ld octets \n", sizeof(double));
    printf("Taille d'un long double : %ld octets \n", sizeof(long double));
    return 0;
}
