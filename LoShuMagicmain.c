#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "testfunction.c"
int main(){

    int array1 [3][3] = {{4,9,2},
                         {3,5,7},
                         {8,1,6}};
    
    int array2 [3][3] = {{5,9,3},
                         {3,4,7},
                         {1,8,6}};
   if(test(array1))
    {
    printf("It's a Lo Shu Magic Square\n");
    }
    else 
    printf("It's not a Lo Shu Magic Square\n");
    if(test(array2))
     {
    printf("It's a Lo Shu Magic Square\n");
    }
    else 
    printf("It's not a Lo Shu Magic Square\n");

    


return 0;
}
