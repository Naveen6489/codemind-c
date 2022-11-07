#include<bits/stdc++.h> 
using namespace std;
int minAbsDiff(int n)
{
    int left = pow(2,floor(log2(n)));
    int right = left*2;
    return min((n-left),(right-n));
}
int main()
{
    int n;
    cin>>n;
    cout<<minAbsDiff(n);
    return 0;
}