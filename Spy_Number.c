#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,summ,pro,k;
    cin>>n;
    summ=0;
    pro=1;
    while(n>0){
        k=n%10;
        summ+=k;
        pro*=k;
        n=n/10;
        
    }
    if(summ==pro) {
        cout<<"Spy Number";
    }
    else{
        cout<<"Not Spy Number";
    }
}