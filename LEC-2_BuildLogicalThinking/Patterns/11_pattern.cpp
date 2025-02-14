/*
    1
    0 1
    1 0 1
    0 1 0 1
*/

#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int i, j, n;
    cout << "Enter a limit = ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        int start = 1;
        if (i % 2 == 0)
            start = 0;
        else
            start = 1;

        for (j = 1; j <= i; j++)
        {
            cout << start << " ";
            start = 1 - start;
        }
        cout << endl;
    }
    return 0;
}
