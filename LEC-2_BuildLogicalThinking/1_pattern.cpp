/* 
    * * * *
    * * * *
    * * * *
    * * * *
*/

#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int i, j, n;
    cout<<"Enter a limit = ";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
