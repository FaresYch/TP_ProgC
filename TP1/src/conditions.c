#include <stdio.h>

int main() {
    int somme = 0;

    for (int i = 1; i<=1000; i++){
        if (i%11 != 0)
            somme+=i;
        if (somme >= 5000){
            printf("la somme depasse 5000 => %d \n", somme);
            break;
        }
    }
    return 0;
}
