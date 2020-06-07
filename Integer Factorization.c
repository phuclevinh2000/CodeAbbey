#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void) {
  int a;
  int p;
  int i;

  int primes[200000] = {0};
  int primeIndex = 2;
  long long int out[40];

  bool isPrime;
  bool last;

  scanf("%d", &a);

  for(i=0; i<a; i++)
  {
    scanf("%lld", &out[i]);
  }

  primes[0] = 2;
  primes[1] = 3;

    for(p = 5; p <= 2750131; p = p + 2)       //tao ra day so prime
    {
        isPrime = true;

        for (i = 1; isPrime && p / primes[i] >= primes[i]; ++i)
            if (p % primes[i] == 0)
                isPrime = false;

        if (isPrime == true)
        {
            primes[primeIndex] = p;
            ++primeIndex;
        }
    }
  
  for(i=0; i<a; i++)
  {
    int j=0;
    /*last = true;
    if(out[i]%primes[j]==0)
      printf("%d*", primes[j]);*/
    for(j=0; out[i]/primes[j]>=primes[j]; j++)        //check neu nhu chia het thi in so do ra va tiep tuc chia
    {
      if(out[i]%primes[j]==0)
      {
        printf("%d*", primes[j]);
        out[i]/=primes[j];
        j--;
      }
      //if(out[i]==primes[j]) 
    }
    printf("%lld ", out[i]);
  }
  return 0;
}
