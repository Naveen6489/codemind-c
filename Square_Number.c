#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,n;
    cin>>n;
    for(i=0;i<=n/2;i++){
    
        if(i*i==n){
            cout<<"True";
            break;
        }
        else if(i*i>n){
            cout<<"False";
            break;
        }
    }
    
}