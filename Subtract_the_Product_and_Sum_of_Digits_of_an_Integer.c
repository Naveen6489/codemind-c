#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,summ,pro;
    summ=0;
    pro=1;
    cin>>n;
    while(n>0){
        k=n%10;
        summ+=k;
        pro=pro*k;
        n=n/10;
    }
    cout<<pro-summ;
}