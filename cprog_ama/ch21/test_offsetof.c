#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <stddef.h>


extern int test_offsetof(void);

int test_offsetof(void) {
    #ifdef __bool_true_false_are_defined
    bool a = true, b = false;
    printf("bool %d and %d are defined\n", a, b);
    #endif
    struct sample {
        int v1;
        int v2;
        bool v3;
        char v4;
    };
    struct sample s1 = {
        .v1 = 10, .v2 = 20, .v3 = false, .v4 = 'A'
    };
    int offset = offsetof(struct sample, v3);
    printf("Offset: %d\n", offset);
    printf("s1.v1: %d\n", s1.v1);

    return 0;
}