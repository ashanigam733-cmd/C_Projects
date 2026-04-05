#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    int num;

    // 1. Open file in write mode
    fp = fopen("demo.txt", "w");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // 2. Write data using fprintf
    fprintf(fp, "Hello Radhika\n");
    fprintf(fp, "123\n");

    // 3. Write character using fputc
    fputc('A', fp);

    fclose(fp);

    // 4. Open file in read mode
    fp = fopen("demo.txt", "r");

    printf("Reading file using fgetc:\n");

    // 5. Read character by character
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    // 6. Check file pointer position
    printf("\nCurrent position: %ld\n", ftell(fp));

    // 7. Move pointer to beginning
    rewind(fp);

    // 8. Read using fscanf
    fscanf(fp, "%s %s", &ch, &ch); // just demo (not ideal usage)

    // 9. Move pointer using fseek
    fseek(fp, 6, SEEK_SET);
    printf("\nAfter fseek, position: %ld\n", ftell(fp));

    fclose(fp);

    return 0;
}