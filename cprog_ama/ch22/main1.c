#include <stdio.h>
#include <stdlib.h>

#define N_CHARS 1000
#define ERR_MSG_LEN 50

/**
int main(void) {
    FILE *fp;
    char *s;
    if ((s = (char *) malloc(sizeof(char) * N_CHARS)) == NULL) {
        perror("Failed to allocate space.\n");
        exit(EXIT_FAILURE);
    }
    if ((fp = fopen("/cprog_ama/ch22/sample.txt", "r")) == NULL) {
        perror("Failed to read file.\n");
        exit(EXIT_FAILURE);
    }
    if ((s = fgets(s, sizeof(char) * (N_CHARS - 1), fp)) == NULL) {
        char *err_msg;
        if ((err_msg = (char *) malloc(sizeof(char) * ERR_MSG_LEN)) == NULL) {
            perror("Failed to read from file.\n");
            free(err_msg);
            fclose(fp);
            exit(EXIT_FAILURE);
        }
        sprintf(err_msg, "Failed to read from %s.\n", "sample.txt");
        perror(err_msg);
        free(err_msg);
        fclose(fp);
        exit(EXIT_FAILURE);
    }
    printf("Read from %s:\n%s", "sample.txt", s);
    printf("\n");
    free(s);
    fclose(fp);

    exit(EXIT_SUCCESS);
}
*/

int main(void) {
    // write
    typedef struct {
        int a;
        int b;
    } Nums;
    Nums v1 = {10, 20};
    FILE *fp;
    if ((fp = fopen("/cprog_ama/ch22/out_file.dat", "r+")) == NULL) {
        perror("Failed to open out_file.dat.\n");
        exit(EXIT_FAILURE);
    }
    int read_bytes;
    if ((read_bytes = (int) fwrite(&v1, sizeof(v1), 1, fp)) < 1) {
        perror("Error writing to out_file.dat.\n");
        fclose(fp);
        exit(EXIT_FAILURE);
    }
    printf("Write successful.\n");
    fclose(fp);

    // read back
    if ((fp = fopen("/cprog_ama/ch22/out_file.dat", "r")) == NULL) {
        perror("Failed to read from out_file.dat.\n");
        exit(EXIT_FAILURE);
    }
    Nums *v2;
    v2 = malloc(sizeof(v1));
    if ((read_bytes = (int) fread(v2, sizeof(v1), 1, fp)) < 1) {
        perror("Error writing to out_file.dat.\n");
        fclose(fp);
        exit(EXIT_FAILURE);
    }
    printf("Values read:\na: %d\nb: %d\n", v2->a, v2->b);
    fclose(fp);
    free(v2);

    exit(EXIT_SUCCESS);
}