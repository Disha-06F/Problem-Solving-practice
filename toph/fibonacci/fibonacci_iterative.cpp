#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define F first
#define S second
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define Disha ios_base::sync_with_stdio(0);  cin.tie(0); cout.tie(0);
using namespace std;
int nth_fibonacci(int n){
    int a=0,b=1,c;
    for(int i=2;i<=n;i++){
        c=a+b;
        a=b;
        b=c;

    }
    return b;  //iterative method
    //time complexity n
}
int main(){
    Disha;
    int n;
    cin>>n;
    cout<<nth_fibonacci(n)<<"\n";

}
