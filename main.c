#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main(void) {
    char str[100];
    int ctr, ch, i;

    printf("Replace lowercase characters by uppercase & vice-versa:\n");
    printf("------------------------\n");
    printf("input the string: ");
    fgets(str, sizeof str, stdin);
    i = strlen(str);
    ctr = i;

    printf("\nThe sentence is: %s", str);
    printf("After changed the string is: ");

    for (i = 0; i < ctr; i++) {
        if (islower(str[i])) {
            ch = toupper(str[i]);
        } else {
            ch = tolower(str[i]);
        }
        putchar(ch);
    }

    printf("\n");
}

