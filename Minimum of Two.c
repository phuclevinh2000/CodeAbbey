#include <stdio.h>

int main()
{
    int a;
    int sum=0;
    int array1[100], day[100], output[100];
    scanf("%d", &a );
    
    for(int i=0; i<a; i++)
    {
        scanf("%d", &array1[i]);  
        scanf("%d", &day[i]);      
       // printf("%d %d\n", array1[i], day[i])    ;
       if(array1[i]>day[i]) output[i]=day[i];
       else output[i]=array1[i];
    }
      
    for(int i=0; i<a; i++) printf("%d ", output[i]);
    return 0;
}
