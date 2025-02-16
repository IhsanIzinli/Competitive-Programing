//https://cses.fi/problemset/task/1094/

#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
    ll n,res=0;
    cin>>n;
    ll f,s;
    cin>>f;
    for(int i=0;i<n-1;i++){
        cin>>s;
        if(f>s){
            res+=f-s;
            s=f;
        }
        f=s;
    }
    cout<<res;
}