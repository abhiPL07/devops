#include <stdio.h>
#include <stdlib.h>

typedef int *Fcn(void);
typedef Fcn *Fcn_ptr;
typedef Fcn_ptr Fcn_ptr_array[10];

int *increment(void) {
    static int ret_val = 0;
    ret_val++;
    return &ret_val;
}

int main() {
    Fcn_ptr_array x;
    for (int i=0; i<10; i++) {
        x[i] = &increment;
    }
    for (int i=0; i<10; i++) {
        printf("%d\n", *x[i]());
    }

    return 0;
}