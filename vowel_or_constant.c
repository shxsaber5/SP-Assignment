#include <stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z'){
        ch = ch + 32;
    }
    switch(ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("Vowel.\n");
            break;
        default:
            printf("Consonant.\n");
    }
    return 0;
}
