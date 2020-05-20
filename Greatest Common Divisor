#include <stdio.h> 
  
// Recursive function to return gcd of a and b 
int gcd(int a, int b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b);   // dung truy hoi de hien ra gcd bang cach cu chia module
} 
/*20      35    lay so 2 tru so 1
  20      15    lay so 1 tru so 2
  5       15    lay so 2 tru so 1 2 lan
  5       5     GCD*/
  
// Driver program to test above function 
int main() 
{
    int a;
    int day1[100], day2[100], sodo[100], lcm[100];
    scanf("%d", &a);
    for(int i=0; i<a; i++)
    {
      scanf("%d %d", &day1[i], &day2[i]);       //day1 la ben trai con day 2 la ben phai
      sodo[i]=gcd(day1[i], day2[i]);
      lcm[i]=(day1[i]*day2[i])/sodo[i];
    }

    for(int i=0; i<a; i++)
    printf("(%d %d) ", sodo[i], lcm[i]);
    
    return 0; 
} 
