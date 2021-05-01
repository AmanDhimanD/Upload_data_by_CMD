#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int i, j,row,col;

    cin>>row>>col;

    for (i = 0; i < row; i++)
    {
        for (j = 0; j <col; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
