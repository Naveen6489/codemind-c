#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,t,r=0,g,p,q,n=0;
    cin >> a;
    g=(a*a);
    while(a!=0){
        t=a%10;
        a=a/10;
        r=(r*10)+t;
    }
    p=(r*r);
    while(p!=0){
        q=p%10;
        p=p/10;
        n=(n*10)+q;
    }
    if(n==g){
        cout << "True";
    }
    else{
        cout << "False";
    }
}