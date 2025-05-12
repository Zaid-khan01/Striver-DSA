#include<bits/stdc++.h>
using namespace std;


bool isPrime(int n){ 

    int cnt = 0;

    for(int i = 1; i <= sqrt(n); i++){ 
		 if(n % i == 0){ 
            cnt = cnt + 1;
            if(n / i != i){
                cnt = cnt + 1;
            }
        }
    }

    if(cnt == 2){
        return true;
    }

    else{
        return false; 
    }
}

int main(){
    int n;
    cout<<"Enter a number - ";
    cin>>n;
    cout<<isPrime(n);
}