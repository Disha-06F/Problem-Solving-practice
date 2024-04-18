#include<bits/stdc++.h>
#define Disha ios_base::sync_with_stdio(0);  cin.tie(0); cout.tie(0);
using namespace std;
const int N=1e3+5;
 int dp[N];
int fib(int n){
    if(n<=1){
        return n;
    }
    if(dp[n]!=-1){  //memoization(top to bottom)
        return dp[n];
    }
    else{
        dp[n]=fib(n-1)+fib(n-2);
    }
    return dp[n];
}
int main(){
    Disha;
    int n;
    cin>>n;
    for(int i=0;i<N;i++){
        dp[i]=-1;
    }
    cout<<fib(n)<<"\n";

    

}
