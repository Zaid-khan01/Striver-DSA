#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
void helper(long long n, long long fact, long long i, vector<long long>& result) {
    if (fact > n) return;

    result.push_back(fact); 
    helper(n, fact * (i + 1), i + 1, result);
}

vector<long long> factorialNumbers(long long n) {
    vector<long long> result;
    helper(n, 1, 1, result);
    return result;
}
};

int main(int argc, char const *argv[])
{
    Solution s1;
    long long n;
    cout<<"Enter a number - ";
    cin>>n;
    vector<long long>res = s1.factorialNumbers(n);
    for_each()
    return 0;
}

