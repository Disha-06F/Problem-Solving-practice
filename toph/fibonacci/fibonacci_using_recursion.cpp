#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define F first
#define S second
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define Disha ios_base::sync_with_stdio(0);  cin.tie(0); cout.tie(0);
using namespace std;
int fibonacci(int n){
    if(n<=1){
        return n;
    }
    else{
        return fibonacci(n-1)+fibonacci(n-2);
        //recursion, time complexity exponential;
    }
}
int main(){
    Disha;
    int n;
    cin>>n;
    cout<<fibonacci(n)<<"\n";
    

}
