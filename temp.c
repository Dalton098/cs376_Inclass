#include <stdio.h>
#include <unistd.h>

int main() {

    // printf("yeet1\n");

    fork();

    // printf("yeet2\n");

    fork();

    // printf("yeet3\n");

    fork();

    printf("yeet4\n");

    return 0;
}