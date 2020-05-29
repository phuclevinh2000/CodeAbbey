#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int counter = 0;
        int cur;
        scanf("%d", &cur);
        for (int j = 0; j < 32; j++)
        {
            counter += cur & 1;
            cur >>= 1;
        }
        printf("%d ", counter);
    }
    
    
}
