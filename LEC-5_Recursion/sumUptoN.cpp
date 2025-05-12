#include<bits/stdc++.h>
using namespace std;

int sumOfNumber(int n){
    if(n>0){
        return (n) + sumOfNumber(n-1);
    }
    else
        return 0;
}
int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter a limit - ";
    cin>>n;
    cout<<"Sum - "<<sumOfNumber(n);
    return 0;
}
