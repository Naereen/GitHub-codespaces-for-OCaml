//
// Template C pour des TP de MP2I
//
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

// Fonction factorielle : int fact(int n);
int fact(int n) {
    if (n < 0) {
        return 0;
    } else if (n == 0) {
        return 1;
    } else {
        return n * fact(n - 1);
    }
}

// Fonction main
int main() {  // sans arguments
// int main(int argc, char *argv[]) {  // avec arguments
    printf("Hello world from a C program!\n");

    for (int n = 0; n <= 10; n += 1) {
        printf("fact(%i) = %i\n", n, fact(n));
    }
    return EXIT_SUCCESS;
}
