#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define F first
#define S second
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define Disha ios_base::sync_with_stdio(0);  cin.tie(0); cout.tie(0);
using namespace std;
int main(){
    Disha;
    int n,count=0;
    cin>>n;
    while(n!=0){
        count+=(n&1);
        n=n>>1;
        //cout<<n<<"\n";
    }
    cout<<count<<"\n";
    

}
