#include<bits/stdc++.h>
using namespace std;

void printGfg(int N) {
    if(N>0){
        printGfg(N-1);
        cout<<"GFG ";
    }
    else
        return;
}

int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter a limit - ";
    cin>>n;
    printGfg(n);
    return 0;
}

