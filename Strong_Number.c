#include<bits/stdc++.h>
using namespace std;
int main(){
    int sum=0,n,k,a;
    cin>>n;
    a=n;
    while(n!=0){
        int res=1;
        k=n%10;
        for(int i=1;i<=k;i++){
            res=res*i;
        }
        n=n/10;
        sum+=res;
    }
    if(sum==a) cout<<"The number "<<sum<<" is a strong number";
    else cout<<"The number "<<a<<" is not a strong number";
}