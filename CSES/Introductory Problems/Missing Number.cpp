//https://cses.fi/problemset/task/1083/

#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
    ll n;
    cin>>n;
    ll sum = (n*(n+1))/2;
    n--;
    while(n--){
        ll num;
        cin>>num;
        sum-=num;
    }
    cout<<sum;
}