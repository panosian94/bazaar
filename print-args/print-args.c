#include <stdio.h>

/**
 * This program just spits the arguments that it got.
 */
int main(int argc, char *argv[]) {
    for (int i = 0; i < argc; i++) {
        printf("argument %d: %s\n", i, argv[i]);
    }
}

/* assignment 0908
