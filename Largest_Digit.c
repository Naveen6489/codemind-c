#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,res=0;
    cin>>n;
    while(n>0){
        k=n%10;
        res=max(k,res);
        n=n/10;
    }
    cout<<res;
}