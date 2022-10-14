#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main(){
    float a,b,c,s,k;
    cin>>a>>b>>c;
    s=(a+b+c)/2;
    k=sqrt((s*(s-a)*(s-b)*(s-c)));
    cout<<fixed<<setprecision(2)<<k;
}