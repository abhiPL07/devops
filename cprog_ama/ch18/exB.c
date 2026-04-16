#include <stdlib.h>
#include <stdio.h>
#include "exA.c"

int main(void) {
    extern int i;
    i = i + 30;
    printf("i = %d\n", i);
    return 0;
}