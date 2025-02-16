//https://cses.fi/problemset/task/1070/

#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
    ll n;
    cin>>n;
    if(n==1){
        cout<<1;
        return 0;
    }
    else if(n<=3){
        cout<<"NO SOLUTION";
        return 0;
    }
 
 
    ll i = n-1;
    while(i>=1){
        cout<<i<<" ";
        i-=2;
    }
 
    i=n;
    while(i>=1){
        cout<<i<<" ";
        i-=2;
    }
    return 0;
}