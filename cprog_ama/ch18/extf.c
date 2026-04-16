#include <stdio.h>
#include <stdlib.h>
#include "extf.h"

extern void printMsg(void);

inline void printMsg2(void) {
    printf("MESSAGE 2...\n");
}

void caller(void) {
    printMsg2();
}