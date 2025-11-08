#include <stdio.h>

int main() {
    FILE *fp;
    fp = fopen("c:\\Nishan\\bca.txt", "w");

    if (fp == NULL) {
        printf("\nCannot create file");
    } 
    else {
        printf("\nFile is created");
        fputs("I study BCA", fp);   // ✅ write inside else
        fclose(fp);                 // ✅ close inside else
    }

    return 0;
}
