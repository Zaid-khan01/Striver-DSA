#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a = 0, b = 1, c, i, n;
    cout << "Enter a no. for which you want fibonacci no. - ";
    cin >> n;
    for (i = 1; i < n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    cout << "Fibonacci no. for corresponding no. " << n << " is " << c;
    return 0;
}
