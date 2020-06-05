#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void) {
  int a;
  int p;
  int i;

  int primes[200000] = {0};
  int primeIndex = 2;
  int out[20];

  bool isPrime;

  scanf("%d", &a);

  for(i=0; i<a; i++)
  {
    scanf("%d", &out[i]);
  }

  primes[0] = 2;
  primes[1] = 3;

    for(p = 5; p <= 2750131; p = p + 2)
    {
        isPrime = true;

        for (i = 1; isPrime && p / primes[i] >= primes[i]; ++i)       //check neu nhu ko phai la so prime
            if (p % primes[i] == 0)
                isPrime = false;

        if (isPrime == true)
        {
            primes[primeIndex] = p;                                    //neu nhu la so prime
            ++primeIndex;
        }
    }
  for ( i = 0;  i < a;  ++i )
    printf ("%i  ", primes[out[i]-1]);
  return 0;
}
