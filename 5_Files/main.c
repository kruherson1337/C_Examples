//
// Created by Tomaz Stoiljkovic on 22.5.2019.
//

#include <stdio.h>

const char *FILENAME = "file.txt";

void writeToFile() {
    printf("=== Write to file! ===\n");

    FILE *f = fopen(FILENAME, "w");
    if (f == NULL)
    {
        printf("Error opening file!\n");
        return;
    }

    const char *text = "Write this to the file";
    fprintf(f, "Some text: %s\n", text);
    printf(".");

    int i = 1;
    float py = 3.1415927;
    fprintf(f, "Integer: %d, float: %f\n", i, py);
    printf(".");

    char c = 'A';
    fprintf(f, "A character: %c\n", c);
    printf(".\n");

    fclose(f);
    printf("Write completed!\n");
}

void readFromFile() {
    printf("\n=== Read from file! ===\n");

    char ch;
    FILE *fp;

    fp = fopen(FILENAME, "r"); // read mode

    if (fp == NULL)
    {
        perror("Error while opening the file.\n");
        return;
    }

    printf("The contents of %s file are:\n", FILENAME);

    while((ch = fgetc(fp)) != EOF)
        printf("%c", ch);

    fclose(fp);
}

int main() {
    writeToFile();
    readFromFile();

    return 0;
}