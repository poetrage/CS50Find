/**
 * helpers.c
 *
 * Helper functions for Problem Set 3.
 */
 
#include <cs50.h>
#include <math.h>
#include <stdio.h>


#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    // TODO: implement a searching algorithm
    int start = 0;//set start to the 0 place in the values array  
    int end = n-1;//set end to the nth place in the values array 
    int mid = trunc((start + end)/2);//set mid to the middle by adding start and end positions and divide by 2 

    if (n<0) //Your implementation must return false immediately if n is non-positive.
    {
       return false;
    }

    while (start<=end) //as long as start is less than end move to next number in the array. 
    {
	        if (value==values[mid])//if this is the number you are looking for, you are done
	        {
		        return true;
	        }
	        else if (value < values[mid])//if the number you are looking for is larger than the mid number
    	    {
		        end=(mid-1);//set end to middle minus one
    	    }
	        else if (value>values[mid])//if the number you are looking for is smaller than the mid number
	        {
		        start=(mid+1);// set start to middle plus one
	        }
            else//if it is not equal to, less than or greater than, break out of loop
            {
	            return false;
            }
                
                mid = trunc((start+end)/2);//reset the middle number
    }
    return false;    
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{

    // TODO: implement a sorting algorithm

    for (int i=0; i<n-1; i++)//iterate over each number in the array start at 0
        {
    for (int j=0; j<(n-i)-1; j++)   //iterate over each number in the array start at the end
        {    
    if (values[j]>values[j+1])//if the number in the position we are in is greater than the number in the position before our current position 
                {

                    int swap = values[j];//create and int swap that takes on the value in i

                    values[j]= values[j+1];//the value in i becomes the next position's value

                    values[j+1] = swap;//the next position's value becomes the swap position
                    
                }
        }            
        }

}


