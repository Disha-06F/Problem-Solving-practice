#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define F first
#define S second
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define Disha ios_base::sync_with_stdio(0);  cin.tie(0); cout.tie(0);
using namespace std;
int toggling_kth_bit(int n, int k){
    return n^(1<<(k-1));
}
int main(){
    Disha;
    int n,k;
    cin>>n>>k;
    cout<<toggling_kth_bit(n,k)<<"\n";
    

}
