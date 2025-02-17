//https://cses.fi/problemset/task/1072

#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
    ll n;
    cin>>n;
    for(int i=1;i<=n;i++){
        ll x = i*i;
        ll sum = (x*x-x)/2;
        if(i>2){
            cout<<sum-(4*(i-1)*(i-2));
        }else if(i==2) cout<<6;
        else cout<<0;
        cout<<"\n";
    }   
}