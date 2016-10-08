/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    // TODO: implement a searching algorithm
     int start = 0;
    int end = n -1;
   
    while(end >= start)
    {
        int mid = (end + start) /2;
        if (values[mid] == value)
            return true;
        if (start == end && values[start] != value)
            return false;
        else if (values[mid] < value)
            start = mid + 1;
        else
            end = mid - 1;
    }
    return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // TODO: implement an O(n^2) sorting algorithm
     for (int i = 0; i < n - 1; i++)
    {
        int index = i; 
        
        for (int j = i + 1; j < n; j++)
        {   
            if (values[index] > values[j])
                index = j; 
        }
    int temp = values[i];
    values[i] = values[index];
    values[index] = temp; 
    }
    return;
}