// Linear Search Time Compelixity ______ O(n)
#include <iostream>
using namespace std;
int linearSearch(int arr[], int n, int key)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            cout << "index No. is ";
            return i;
        }
    }
    return -1;
}
int main()
{
    int n, i;
    cout << "Enetr size of array:- ";
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cin >> key;

    cout << linearSearch(arr, n, key);

    return 0;
}