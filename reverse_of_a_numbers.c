#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,n,k;
    int rev=0;
    cin>>n;
    while(n>0){
        k=n%10;
        rev=(rev*10)+k;
        n=n/10;
    }
    cout<<rev;
}