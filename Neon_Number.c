#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,l,summ;
    cin>>n;
    summ=0;
    k=n*n;
    while(k>0){
        l=k%10;
        summ=summ+l;
        k=k/10;
    }
    if(summ==n){
        cout<<"Neon Number";
        
    }
    else{
        cout<<"Not Neon Number";
    }
}