#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, rev = 0, c, rem;
    cout << "Enter a number = ";
    cin >> n;
    c = n;
    while (n > 0)
    {
        rem = n % 10;
        rev = (rev * 10) + rem;
        n /= 10;
    }
    if (c == rev)
        cout << "Palindrome number";
    else
        cout << "Not a palindrome number";
    return 0;
}
