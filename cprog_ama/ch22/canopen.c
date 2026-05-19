#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "canopen.h"

int canopen(char *fileName, char *mode) {
    FILE *fp;
    if ((fp = fopen(fileName, mode)) == NULL) {
        printf("ERROR: Failed to open %s to read!\n", fileName);
        return 1;
    }
    printf("%s was opened successfully!\n", fileName);
    fclose(fp);
    return 0;
}