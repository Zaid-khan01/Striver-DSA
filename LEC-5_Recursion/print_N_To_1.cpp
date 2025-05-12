#include<bits/stdc++.h>
using namespace std;
void printNos(int n) {
    if(n>0){
        cout<<n<<" ";
        printNos(n-1);
    }
    else
        return;
}

int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter a limit - ";
    cin>>n;
    printNos(n);
    return 0;
}
