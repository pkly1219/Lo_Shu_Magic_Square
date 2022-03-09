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
    test(array1);
    test(array2);
    


return 0;
}
