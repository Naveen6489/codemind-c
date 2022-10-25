#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,n,j,k=0;
    cin>>n;
    for(i=1;i<=n;i++){
        int c=0;
        for(j=1;j<=i;j++){
            if(i%j==0){
                c+=1;
            }
        }
        if(c==9){
            k+=1;
            cout<<i<<" ";
        }
        
    }
    cout<<"
"<<"Total="<<k;
}