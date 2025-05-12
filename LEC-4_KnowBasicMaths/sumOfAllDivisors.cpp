#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j, sum = 0;
    cout << "Enter a number - ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j * j <= i; ++j)
        {
            if (i % j == 0)
            {
                if (i / j == j)
                {
                    sum += j;
                }
                else
                {
                    sum += j + i / j;
                }
            }
        }
    }
    cout << sum;
}