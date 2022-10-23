#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,k,l=0,m,n;
    cin>>m>>n;
    k=max(m,n);
    for(i=1;i<=k;i++){
        if(m%i==0 and n%i==0){
            l=max(l,i);
        }
    }
    cout<<l;
}