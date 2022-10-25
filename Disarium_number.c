#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,c=0,m,a,x,res=0;
    string l;
    cin>>n;
    a=n;
    l=to_string(n);
    k=l.size();
    x=k;
    while(c<k){
        m=n%10;
        c+=1;
        res=res+pow(m,x);
        x-=1;
        n=n/10;
        
    }
    if(res==a){
        cout<<"True";
        }
    else{
        cout<<"False";
    }
}
