#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, i;
    cout<<"Enter a number - ";
    cin>>n;
    int sqrt1 = sqrt(n);
    for(i = 1;i<=sqrt1;i++){
        if(sqrt1%i == 0){
            cout<<i<<endl;
            if(n/i != sqrt1){
                cout<<n/i<<endl;
            }
        }
    }
}