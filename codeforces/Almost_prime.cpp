#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define F first
#define S second
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define Disha ios_base::sync_with_stdio(0);  cin.tie(0); cout.tie(0);
using namespace std;
const int N=3001;
bool is_prime[N];
bool check_prime(int p){
    if(p==1){
        return false;
    }
  
    for(int i=2;i<p;i++){
        if(p%i==0){
            return false;
        }
    

  }
  return true;
}
bool almost_prime(int k){
    int prime_div=0;
    for(int i=1;i<=k;i++){
        if(k%i==0){
            if(check_prime(i)){
                prime_div++;
            }
        }

    }
    if(prime_div==2){
        return true;
    }
    else 
    {
        return false;
    }
}

int main(){
    Disha;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
    is_prime[i]= check_prime(i);
    }
    int c=0;
    for(int i=1;i<=n;i++){
        if(almost_prime(i)){
            c++;
        }
    }
    cout<<c<<"\n";
    

}
