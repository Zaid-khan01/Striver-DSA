/*
    * * * * * * * * *
      * * * * * * *
        * * * * *
          * * *
            *
*/

#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int i, j, n;
    cout << "Enter a limit = ";
    cin >> n;
    for (i = n; i >= 1; i--)
    {
        for(int k=i;k<n;k++){
            cout<<"  ";
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
