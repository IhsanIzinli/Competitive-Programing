//https://cses.fi/problemset/task/1069/

#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
    string dna;
    cin>>dna;
    char cur=' ';
    ll count=1,
    max=0,
    n=dna.size();
 
    for(int i=0;i<n-1;i++){
        if(dna[i]==dna[i+1]){
            count++;
            continue;
        }if(count>max) max = count;
        count=1;
    }
    if(count>max) max = count;
    cout<<max;
}