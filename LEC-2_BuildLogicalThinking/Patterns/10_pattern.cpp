/*
    *
    * *
    * * *
    * * * * 
    * * * * *
    * * * *
    * * *
    * *
    * 
*/
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int i, j, n;
    cout << "Enter a limit = ";
    cin >> n;
    for (i = 1; i <= 2 * n - 1; i++)
    {
        if (i <= n)
        {
            for (j = 1; j <= i; j++)
            {
                cout << "* ";
            }
            cout << endl;
        }
        else
        {
            for (j = 1; j <= 2 * n - i; j++)
            {
                cout << "* ";
            }
            cout << endl;
        }
    }
    return 0;
}
