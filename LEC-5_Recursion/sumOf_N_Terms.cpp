#include<bits/stdc++.h>
using namespace std;

// my task is - i have given n, then i will add n^3 and add all numbers upto n
int sumOfSeries(int n) {
    if(n>0){
        return ((n*n*n) + sumOfSeries(n-1));
    }
    else 
        return 0;
}
int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter a limit - ";
    cin>>n;
    cout<<sumOfSeries(n);
    return 0;
}
