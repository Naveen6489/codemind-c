#include<bits/stdc++.h> 
using namespace std;
bool prime(int n){
    if(n<=1){
        return false;
    }
    else{
        for(int i=2;i<=(int)sqrt(n);i++){
            if(n%i==0) return false;
            
        }
    }
    return true;
    
}
int main(){
    int n;
    cin>>n;
    int c=0;
    for(int i=1;i<=(int)(sqrt(n));i++){
        if(n%i==0){
            if(prime(i)!=true)c++;
            if(i!=n/i and prime(n/i)!=true)c++;
        }
        
    }
    cout<<c;
}
