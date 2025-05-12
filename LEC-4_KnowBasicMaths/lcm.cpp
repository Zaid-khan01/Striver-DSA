#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int a, b, i, end, lcm=0;
    cout<<"Enter 2 numbers = ";
    cin>>a>>b;
    if(a>b)
        end = a;
    else
        end = b;
    
    for(i=1;i<=end;i++){
        if(a%i==0 && b%i==0){
            lcm = end;
            break;
        }
        else
            lcm = a*b;
    }
    cout<<"LCM = "<<lcm;
    return 0;
}
