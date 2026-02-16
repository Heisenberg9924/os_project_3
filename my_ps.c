#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *f1, *f2, *f3;
    char ch;

    
    system("ps aux > x1.txt");
    system("ps -eLf > x2.txt");

    
    f1 = fopen("x1.txt", "r");
    f2 = fopen("x2.txt", "r");
    f3 = fopen("merged.txt", "w");

    if (f1 == NULL || f2 == NULL || f3 == NULL) {
        printf("File error\n");
        return 1;
    }

    
    fprintf(f3, "----- ps aux -----\n");
    while ((ch = fgetc(f1)) != EOF)
        fputc(ch, f3);

    
    fprintf(f3, "\n\n----- ps -eLf -----\n");
    while ((ch = fgetc(f2)) != EOF)
        fputc(ch, f3);

    
    fclose(f1);
    fclose(f2);
    fclose(f3);

    
    system("cat merged.txt");

    return 0;
}