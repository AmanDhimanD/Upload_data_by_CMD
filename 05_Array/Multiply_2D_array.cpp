#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a[10][10], b[10][10], i, j, c, r, sum[10][10],d[10][10];
    cout << "\nEnter number of Row:-";
    cin >> r;

    cout << "\nEnter number of Column:-";
    cin >> c;
    cout << "\nEnter value of MARRIX - A\n";
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "\nEnter value of MARRIX - B\n";
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cin >> b[i][j];
        }
    }

    cout << "\nMATRIX_A:-\n";
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << "\t" << a[i][j];
        }
        cout << "\n";
    }
    cout << "\nMATRIX_B:-\n";
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << "\t" << b[i][j];
        }
        cout << "\n";
    }
    cout << "\nMultiple of "<<r <<"  and  "<<c<<" MATRIX\n";
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {   
            d[i][j]=0;
            for(int k=0;k<c;k++)
            {
                d[i][j]+=a[i][k]*b[k][j];
            }
        }
        cout << "\n";
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << "\t" << d[i][j];
        }
        cout << "\n";
    }

    return 0;
}
