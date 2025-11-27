#include <ctype.h>
#include <stdio.h>
#include <string.h>

int amount_of_lowercase_letters(char s[]);
char* first_lower(char s[]);

int main(void) {
    printf("Enter your string: ");
    char s[100];
    fgets(s, 100, stdin);
    printf("String has %d lowercase letters.\n", amount_of_lowercase_letters(s));
    printf("Pointer to the first lowercase letter is %p\n", first_lower(s));
    printf("Substring is %s", first_lower(s));
    return 0;
}

int amount_of_lowercase_letters(char s[]) {
    int amount = 0;
    for (int i = 0; i < strlen(s); i++) {
        if (islower(s[i])) {
            amount++;
        }
    }
    return amount;
}

char* first_lower(char s[]) {
    int i = 0;
    while (1) {
        i++;
        if (islower(s[i])) {
            break;
        }
    }
    return &s[i];
}