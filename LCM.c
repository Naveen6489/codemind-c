#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n,res=0;
    cin>>m>>n;
    for(int i=1;i<=n;i++){
        if(m%i==0 && n%i==0) res=max(res,i);
        
    }
    cout<<m*n/res;
}