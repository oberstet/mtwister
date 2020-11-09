#include <stdio.h>
#include "mtwister.h"

int main () {
    const unsigned int n = 1000000000;
    printf("ok, will do %i iterations ..\n", n);
    MTRand r = seedRand(1337);
    double sum = 0;
    for (unsigned int i = 0; i < n; i++) {
        sum += genRand(&r);
    }
    printf("done!\n");
    return 0;
}