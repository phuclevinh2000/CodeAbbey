#include <stdio.h>
#include <string.h>

int main(void)
{
    int n, sum, number;
    char spaceCharacter;
    scanf("%d", &n);
    getchar();
    while(n--)
    {

        sum = 0;
        do {
            scanf("%d%c", &number, &spaceCharacter);
            sum += number * number;
        } while(spaceCharacter != '\n');

        printf("%d ", sum);
    }
    return 0;
}
