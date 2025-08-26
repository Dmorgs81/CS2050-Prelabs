#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size = 10;
    int query = 2;
    int array[10] = {1,2,3,4,5,6,7,8,9,10}; // Defining the Array
    int count = searchArray(array, size, query);
    printf("%d ", count);
}

/*
The function will return a nonnegative
number representing the number of occurrences of integers in the array that are 
greater than or equal to the query integer.
*/

int searchArray(int *array, int size, int query)
{
    int count = 0; // Variable count to store how many numbers are greater than or equal to the query integer

    /*
    Looping through the array and comparng the index of the array and 
    checking to see if the index is greater than or equal to the query integer
    */
    
    for(int i = 0; i < size; i++)
    {
        if (array[i] >= query)
        {
            count++; 
        }
    }
    
    return count; 
}
