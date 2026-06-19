#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "canopen.h"

int main(int argc, char *argv[]) {
    /*
    2.2 canopen.c
    */
    if (argc != 2) {
        printf("ERROR: Invalid arguments found! Valid format:\ncanopen <fileName>\n");
        return EXIT_FAILURE;
    }
    char *fileName;
    char *mode;
    mode = (char *) malloc(sizeof(char)*2);
    mode[0] = 'r';
    mode[1] = '\0';
    fileName = argv[1];
    if (canopen(fileName, mode) == 1) {
        free(mode);
        return EXIT_FAILURE;
    }

    free(mode);
    return EXIT_SUCCESS;
    /*
    COMPLETE
    */
}