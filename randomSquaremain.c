#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include "testfunction.c"


//Check if an element is appear in the array or not
bool appear(int arr[][3], int x)
{
    for(int i = 0; i < 3; i++ )
    {
        for(int j = 0 ; j < 3; j++)
        {
            if(arr[i][j] == x)
            return true;
        }

    }

    return false;

}



void printSquare(int arr[][3]){
    for(int i = 0; i < 3; i++)

    {
        printf ("[ ");
        for(int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);

        }
        printf("] \n");
    }
}



//assign all elements of the array to 0
void ereaseSquare(int arr[][3])
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            arr[i][j] = 0;
        }
    }
}


int main()
{
    
   int arr[3][3];
   time_t t;
    int x;
    srand((unsigned) time(&t));
    int count = 0;

    //fill the array with random number from 1 to 9 without repeating
    fillArray:
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            
                Again:
                x = 1 + rand()%9;        
                if(appear(arr, x)) //check if a number is already appear or not
                goto Again;
                
                arr[i][j] =x;
        }
    }
    //count the total number of squares generated and tested before success
     count++;

    
    
    if(test(arr))
    {
        printf("This is a Lo Shu Magic Square\n");
        printSquare(arr);
        printf("%d squares are generated and tested before success", count);

    }
        
    else
        
    {
        //print the first array
        if(count == 1)
        {
            printf("The first array is: \n");
            printSquare(arr);
            printf("\n");
        }
        ereaseSquare(arr);
        goto fillArray;
        
    }

    return 0;
}
