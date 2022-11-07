#include<bits/stdc++.h> 
using namespace std;
int main(){
    int n;
    cin>>n;
    int nums[n];
    for(int i=0;i<=n;i++)cin>>nums[i];
    unordered_map<int,int>a;
    for(auto x:nums) a[x]++;
    for(auto z:a){
        if(z.second==1){
            cout<<z.first;
            break;
        }
    }
}