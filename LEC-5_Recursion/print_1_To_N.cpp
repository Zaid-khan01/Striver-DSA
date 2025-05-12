#include<bits/stdc++.h>
using namespace std;
void printNos(int i, int n) {
    if(i>n)
        return;
    else
        cout<<i<<" ";
        printNos(i+1, n);
}

int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter a limit - ";
    cin>>n;
    printNos(1, n);
    return 0;
}
