//
// Created by Tomaz Stoiljkovic on 22.5.2019.
//

#include <stdio.h>

const char *FILENAME = "file.txt";

void writeToFile() {
    FILE *f = fopen(FILENAME, "w");
    if (f == NULL)
    {
        printf("Error opening file!\n");
        return;
    }

    const char *text = "Write this to the file";
    fprintf(f, "Some text: %s\n", text);
    printf("Some text: %s\n", text);

    int i = 1;
    float py = 3.1415927;
    fprintf(f, "Integer: %d, float: %f\n", i, py);
    printf("Integer: %d, float: %f\n", i, py);

    char c = 'A';
    fprintf(f, "A character: %c\n", c);
    printf("A character: %c\n", c);

    fclose(f);
}

void readFromFile() {
    char ch;
    FILE *fp = fopen(FILENAME, "r");

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
    printf("\n=== Write to file! ===\n");
    writeToFile();
    printf("=== Write to file completed! ===\n");

    printf("\n=== Read from file! ===\n");
    readFromFile();
    printf("=== Read from file completed! ===\n");

    return 0;
}