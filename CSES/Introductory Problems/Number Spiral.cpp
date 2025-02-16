//https://cses.fi/problemset/task/1071

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll row,column;
        cin>>row>>column;
        if(row>column){
            if(row%2) cout<<(row*row-(2*row-2)) + (column-1);
            else cout<<(row*row)-(column-1);
        }else{
            if(column%2) cout<<(column*column)-(row-1);
            else cout<<(column*column-(2*column-2)) + (row-1);
        }
        cout<<"\n";
    }
}