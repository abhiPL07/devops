#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <setjmp.h>

#include "test_offsetof.h"

jmp_buf buffer;

void func1(int count) {
    int i = 0;
    while (i < count) {
        if (i < count / 2) {
            printf("Inside func1\n");
            i++;
        } else {
            longjmp(buffer, i);
            i++;
        }

    }
}

void func2(void) {
    int jmp = setjmp(buffer);
    printf("Inside func2. jmp = %d\n", jmp);
}

int test_main() {
    int i;
    printf("Enter i: ");
    scanf("%d", &i);
    assert(i < 10);
    printf("i = %d\n", i);
    func1(i);
    return 0;
}

int main(void) {
    if (test_offsetof()) {
        printf("Error occurred...\n");
        exit(EXIT_FAILURE);
    }
    exit(EXIT_SUCCESS);
}