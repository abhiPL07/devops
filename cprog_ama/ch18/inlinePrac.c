#include <stdlib.h>
#include <stdio.h>

#include "inlinePrac.h"

//extern int sqr(int x);

int main(void) {
    int num = 10;
    int raised = sqr(num);
    printf("%d ^ %d = %d\n", num, 2, raised);
    return EXIT_SUCCESS;
}