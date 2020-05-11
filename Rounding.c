#include <stdio.h>
#include <math.h>

int main()
{
    float a;
    float sum=0;
    float array1[100], day[100], output[100], array2[100];
    scanf("%f", &a );
    
    for(int i=0; i<a; i++)
    {
        scanf("%f", &array1[i]);  
        scanf("%f", &day[i]);   
        //scanf("%d", &array2[i]);    
       // printf("%d %d\n", array1[i], day[i])    ;
       output[i]=array1[i]/day[i];
    }
      
    for(int i=0; i<a; i++) printf("%.0f ", round (output[i]));
    return 0;
}
