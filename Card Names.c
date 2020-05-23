#include <stdio.h>
//chia 13 de tim ra chat cua la bai
//%13 de tim ra so cua la bai
int main(void) {
  int a; 
  int b[100], rank[100];
  int out[100],value[100];
  scanf("%d", &a);

  for(int i=0; i<a; i++)
  {
    scanf("%d", &b[i]);
    value[i]=b[i]%13;
    rank[i]=b[i]/13;
  }
  for(int i=0; i<a; i++)
  {
    if(value[i]==9) printf("Jack-of-");
    else if(value[i]==10) printf("Queen-of-");
    else if(value[i]==11) printf("King-of-");
    else if(value[i]==12) printf("Ace-of-");
    else if(value[i]<9)   printf("%d-of-", value[i]+2);
    //printf("%d", value[i]);

    if(rank[i]==0) printf("Clubs ");
    else if(rank[i]==1) printf("Spades ");
    else if(rank[i]==2) printf("Diamonds ");
    else if(rank[i]==3) printf("Hearts ");
  }
  return 0;
}
