#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int i, j, n;
    cin >> n;
    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}
