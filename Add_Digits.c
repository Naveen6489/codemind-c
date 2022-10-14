#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,res=0;
    cin>>n;
    while(n>0){
        k=n%10;
        res+=k;
        n=n/10;
        if(n==0 && res>9){
            n=res;
            res=0;
        }
    }
    cout<<res;
}