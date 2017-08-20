#include <stdio.h>
#include <cs50.h>
#include <math.h>



int values=(10,9,8,7,6,5,4,3,2,1,0);
void sort(int values[], int n)
{

    // TODO: implement a sorting algorithm

    for (int i=0; i<n-1; i++)//look at one int in the array
        {
    for (int j=(n-1); j>i; j--)   // while (values[i]>values[i+1])                
        //{    
    if (values[i]>values[i+1])//if the number in the position we are in is greater than the number in the position before our current position 
                {
                                        eprintf("\n\n\nvalues i is %i\n", values[i]);
                                        //eprintf("values i+1 is now %i\n", values[i+1]);
                    int swap = values[i];//create and int swap that takes on the value in i
                                        //eprintf("now swap is now %i\n", swap);
                    values[i]= values[i+1];//the value in i becomes the next position's value
                                        //eprintf("now values i is now %i\n\n\n", values[i]);
                    values[i+1] = swap;//the next position's value becomes the swap position
                    
                    //eprintf("at last swap is now %i\n\n\n\n", swap);
                                        eprintf("values i ends at %i\n", values[i]);
                                        //eprintf("values i+1 ends at %i\n", values[i+1]);
                                        //eprintf("swap ends at %i\n", swap);
                                        //eprintf("i is now %i\n", i);
                                        //eprintf("n is now %i\n", n);
                }
                //  else if (j>=n)
                //  {
                //      j=0;
                //  }
                    
        }

}