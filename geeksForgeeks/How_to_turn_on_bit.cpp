#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define F first
#define S second
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define Disha ios_base::sync_with_stdio(0);  cin.tie(0); cout.tie(0);
using namespace std;
int turn_on(int n, int k){
    if(k<=0){
        return n;
    }
    else{
        return (n|(1<<(k-1)));
    }
}
int main(){
    Disha;
    int n,k;
    cin>>n>>k;
    cout<<turn_on(n,k)<<"\n";
    

}
