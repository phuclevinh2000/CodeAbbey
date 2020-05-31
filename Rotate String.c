#include <stdio.h>

void rotate(int n, char *s) {
    if (n > 0) {
        printf("%s", s+n);
        for (int i = 0; i < n; i++)
            putchar(s[i]);
        putchar(' ');
    }
    else {
        int c;
        for (c = 0; s[c] != '\0'; c++)
            ;
        printf("%s", s+c+n);
        for (int i = 0; i < c+n; i++)
            putchar(s[i]);
        putchar(' ');
    }
}

main() {
    int n;
    scanf("%d", &n);
    while (n--) {
        int a;
        char s[100];
        scanf("%d %s", &a, s);
        rotate(a, s);
    }
}
