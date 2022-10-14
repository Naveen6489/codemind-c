#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,summ;
    cin>>n;
    summ=0;
    while(n>0){
        k=n%10;
        summ+=k*k;
        n=n/10;
        if(n==0 && summ>9){
            n=summ;
            summ=0;
            
        }
        
    }
    if(summ==1 || summ==7){
        cout<<"True";
        
    }
    else{
        cout<<"False";
    }
}