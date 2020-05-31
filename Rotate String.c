#include<stdio.h>         //chua xong
#include<string.h>
#include<ctype.h>
int main()
{
  int a, lat[100],j,z,k,h;
  char name[50][50], namecu[50];
  scanf("%d", &a);
  for(int i=0; i<a; i++)
  {
    char check[50];
    scanf("%d", &lat[i]);
    fgets(name[i], sizeof(name[i]), stdin); // read string
    //lam truong hop chu duong thi lay tu chu do vo ben trong
    j=0;
    do {
      check[j]=name[i][j];      //check la day truoc
      j++;
    }
    while(j<=lat[i]);
    z=j;
    k=0;
    do{
      namecu[k]=name[i][z];        //namecu la day sau
      k++;
      z++;
    }
    while(z<=strlen(name[i]));
    int o=0, q=0;
   // puts(namecu);
   // puts(check);
    strcat(namecu, check);
    puts(namecu);
    
  }
  for(int i=0; i<a; i++)
  {
    //puts();
    //printf("%c", name[i][9]);
  }
}
