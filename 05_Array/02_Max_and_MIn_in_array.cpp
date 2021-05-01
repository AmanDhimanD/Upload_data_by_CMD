#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n, i;
    cout << "Enter size of array :- ";
    cin >> n;
    int a[n];
    for (i = 0; i < n;  i++)
    {
        cin >> a[i];
    }
    int maxNo = INT_MIN;
    int minNo = INT_MAX;
    for (i = 0; i <n ;  i++)
    {
        maxNo=max(maxNo,a[i]);
        minNo=min(minNo,a[i]);
    }
    cout<<maxNo<<" "<<minNo;
    return 0;
}