#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n==1) cout<<"Consists of 1 integer";
    else cout<<(n*(n-1))/2;
}