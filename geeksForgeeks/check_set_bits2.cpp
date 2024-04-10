#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define F first
#define S second
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define Disha ios_base::sync_with_stdio(0);  cin.tie(0); cout.tie(0);
using namespace std;
string set_bits(int n){
    if(n==0){
        return "NO";
    }
    while(n>0){
        if((n&1)==0){
            return "NO";
        }
       n=n>>1;
    }
    return "YES";
}
int main(){
    Disha;
    int n;cin>>n;
    cout<<set_bits(n)<<"\n";
    

}
