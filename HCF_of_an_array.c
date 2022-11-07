#include<bits/stdc++.h> 
using namespace std;
typedef long long int ll;
int gcd(int a,int b)
{
    if(b==0)
    return a;
    return gcd(b,a%b);
    
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<=n;i++)cin>>a[i];
    for(int i=0;i<n-1;i++)a[i+1]=gcd(a[i],a[i+1]);
    cout<<a[n-1];
    
}