#include <stdio.h>

int main()
{
    int a;
    int sum=0;
    int array1[100], day[100], output[100], array2[100];
    scanf("%d", &a );
    
    for(int i=0; i<a; i++)
    {
        scanf("%d", &array1[i]);  
        scanf("%d", &day[i]);   
        scanf("%d", &array2[i]);    
       // printf("%d %d\n", array1[i], day[i])    ;
       if(array1[i]<array2[i]) output[i]=array1[i];   //so sanh a vs b truoc sau do lay ket qua do so sanh vs c
       else output[i]=array2[i];
       if(output[i]<day[i]) output[i]=output[i];
       else output[i]=day[i];
    }
      
    for(int i=0; i<a; i++) printf("%d ", output[i]);
    return 0;
}
