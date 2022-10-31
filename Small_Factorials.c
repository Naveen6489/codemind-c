#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int res=1,t;
        cin>>t;
        for(int j=1;j<=t;j++){
            res=res*j;
        }
        cout<<res<<"
";
        
    }
}