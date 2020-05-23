#include<stdio.h>
#include<string.h>
int main()
{
    int n; 
    scanf("%d\n",&n);
    int m[100];
    char c;
    for(int j=0;j<n;j++)
    {
        char ch[100];
        gets(ch);
        int sum=0;
        for(int i=0;(c=ch[i])!='\0';i++)
        {
            if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u'||ch[i]=='y')
            sum++;
        }
            m[j]=sum;
    }
    for(int j=0;j<n;j++)
    {
        printf("%d ",m[j]);
    }
return 0;    
}
