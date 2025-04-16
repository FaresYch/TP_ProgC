#include <stdio.h>

int main() {
    int a = 16;
    int b = 3;

    printf(" a + b = %d \n", a+b);
    printf(" a - b = %d \n", a-b);
    printf(" a x b = %d \n", a*b);
    printf(" a / b = %d \n", a/b);
    printf(" a modulo b = %d \n", a%b);
    if (a == b) 
        printf(" a == b est vrai\n" );
    else
        printf(" a == b est faux\n" );
    
    if (a > b) 
        printf(" a > b est vrai\n" );
    else
        printf(" a > b est faux\n" );
    return 0;
}
