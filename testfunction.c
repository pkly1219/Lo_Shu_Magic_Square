#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//sum of one row
int sumOfRow (int const arr[][3], int num)
{
   int sum = 0;
         for(int j = 0; j < 3; j++)
         {
             sum += arr[num][j];
         }
     
    return sum;
}

//sum of one column
int sumOfColumn (int const arr[][3], int num)
{
    int sum = 0;
    for(int i = 0; i < 3; i++)
    {
        sum += arr[i][num];
    }
     return sum;
}

//sum of a diagonal line
int sumOfDiagonalLine1 (int const arr[][3] )
{
    return arr[0][0] + arr[1][1] + arr[2][2];
}

//sum of the other diagonal line
int sumOfDiagonalLine2 (int const arr[][3] )
{
    return arr[2][0] + arr[1][1] + arr[0][2];
}
 
 bool test(int const arr[][3])
 {
     int sumR0, sumR1, sumR2;
     
     //sum each row of the square
     sumR0 = sumOfRow(arr,0);
     sumR1 = sumOfRow(arr,1);
     sumR2 = sumOfRow(arr,2);

    //Step 1: test if three sum of row are equal or not
     if (sumR0 == sumR1 && sumR1 == sumR2)
     {
         int sumC0, sumC1, sumC2;
         sumC0 = sumOfColumn(arr,0);
         sumC1 = sumOfColumn(arr,1);
         sumC2 = sumOfColumn(arr,2);

        //Step 2: test if three sum of column are equal or not
         if(sumC0 == sumC1 && sumC1 == sumC2)
         {
             //Step 3: test if two sum of diagonal line are equal or not
             if (sumOfDiagonalLine1(arr) == sumOfDiagonalLine2(arr))
             {
                return 1;
                 
             }
             else
             return 0;
         }

        else
        return 0;
      
     }   
     else
     return 0;
   
 }
