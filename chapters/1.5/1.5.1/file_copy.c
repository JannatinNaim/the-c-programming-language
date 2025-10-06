// cat file_copy.c | ./a.out >> copy.c

#include <stdio.h>

int main() {
    int c;

    c = getchar();
    while (c != EOF) {
        putchar(c);
        c = getchar();
    }

    return 0;
}
