#include <iostream>
using namespace std;

int fib(int n)
{
    if (n <= 1)
        return 1;
    else
        return (fib(n - 1) + fib(n - 2));
}
int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter a number you want fibonacci - ";
    cin >> n;
    cout << "Fibonacci of " << n << " is " << fib(n);
    return 0;
}
