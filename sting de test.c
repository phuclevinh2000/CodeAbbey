#include <stdio.h>
#include <string.h>

void displayString(char str[]);
int main(void) {
  int a, cach, b;
  char conheo[200];

  scanf("%d %d", &a, &b);

  for(int i=0; i<a; i++)
  {
    fgets(conheo, sizeof(conheo), stdin);    
    //scanf("%d", &cach);
    //printf("%lu ", strlen(conheo[i]));
    Caesar(conheo);
  }
  //for(int i=0; i<a; i++) printf("%lu ", strlen(conheo[i]));
  return 0;
}
