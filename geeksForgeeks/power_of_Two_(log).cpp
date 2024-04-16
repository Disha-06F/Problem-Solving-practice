#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define F first
#define S second
#define Disha ios_base::sync_with_stdio(0);  cin.tie(0); cout.tie(0);
using namespace std;
bool isPowerOfTwo(int n){
    if(n==0)
    return false;
   if((ceil(log2(n)))==(floor(log2(n)))){
    return true;
   }
   else{
    return false;
   }
}
int main(){
    Disha;
    int n;
    cin>>n;
    isPowerOfTwo(n)
         ?cout<<"YES\n" //no semicolon
         :cout<<"NO\n";
                  

    

}
