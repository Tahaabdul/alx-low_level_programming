#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    int i;
    int sum = 0;

    if (argc > 1) {
        for (i = 1; i < argc; i++) {
            char *endptr;
            long num = strtol(argv[i], &endptr, 10);

            if (*endptr == '\0' && num > 0 && num <= INT_MAX) {
                sum += num;
            } else {
                printf("Error\n");
                return 1;
            }
        }
        printf("%d\n", sum);
    } else {
        printf("%d\n", 0);
    }

    return 0;
}
