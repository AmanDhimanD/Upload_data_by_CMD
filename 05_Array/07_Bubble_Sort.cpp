#include <iostream>
using namespace std;
int main()
{
    int n, i;
    int arr[5] = {5, 1, 4, 2, 8};
    for (i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    int counter = 1;
    while (counter < 5)
    {
        for (i = 0; i < 5 - counter; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp;
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        counter++;
    }
    cout << "\nSorted Array:- \n";
    for (i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

/*
 Bubble sort in C to arrange numbers in ascending order; you can modify it for descending order and can also sort strings. 
 The bubble sort algorithm isn't efficient as its both average-case as well as worst-case complexity are O(n2).
*/

/* First Pass:
( 5 1 4 2 8 ) –> ( 1 5 4 2 8 ), Here, algorithm compares the first two elements, and swaps since 5 > 1.
( 1 5 4 2 8 ) –>  ( 1 4 5 2 8 ), Swap since 5 > 4
( 1 4 5 2 8 ) –>  ( 1 4 2 5 8 ), Swap since 5 > 2
( 1 4 2 5 8 ) –> ( 1 4 2 5 8 ), Now, since these elements are already in order (8 > 5), algorithm does not swap them.

Second Pass:
( 1 4 2 5 8 ) –> ( 1 4 2 5 8 )
( 1 4 2 5 8 ) –> ( 1 2 4 5 8 ), Swap since 4 > 2
( 1 2 4 5 8 ) –> ( 1 2 4 5 8 )
( 1 2 4 5 8 ) –>  ( 1 2 4 5 8 )
Now, the array is already sorted, but our algorithm does not know if it is completed. The algorithm needs one whole pass without any swap to know it is sorted.

Third Pass:
( 1 2 4 5 8 ) –> ( 1 2 4 5 8 )
( 1 2 4 5 8 ) –> ( 1 2 4 5 8 )
( 1 2 4 5 8 ) –> ( 1 2 4 5 8 )
( 1 2 4 5 8 ) –> ( 1 2 4 5 8 ) */