#include <stdio.h>


int main(int argc, char *argv[]) {
    char number[5];
    char guess[5];
    int x, y;
    int amount;

    scanf("%s %d", number, &amount);
    while (amount > 0) {
        scanf("%s", guess);
        x = 0;
        for (int i = 0; i < 4; i++) {
            if (number[i] == guess[i]) {
                x++;
            }
        }

        y = 0;
        for (int i = 0; i < 4; i++) {
            for (int k = 0; k < 4; k++) {
                if (k != i && number[i] == guess[k]) {
                    y++;
                }
            }
        }
        printf("%d-%d ", x, y);

        amount--;
    }
    printf("\n");
    
    return 0;
}
