#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define F first
#define S second
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define Disha ios_base::sync_with_stdio(0);  cin.tie(0); cout.tie(0);
using namespace std;
bool check_bitwise_or_even(int n,int a[]){
    /* A Better Solution is based on bit manipulation and Mathematical facts. 

Bitwise OR of any two even numbers is an even number. 
Bitwise OR of any two odd numbers is an odd number. 
Bitwise OR of an even and an odd number is an odd number.


Based on the above facts, it can be deduced that if at least one odd number is present in the array then the bitwise OR of the whole array will be odd otherwise even*/
    for(int i=0;i<n;i++){
        if((a[i]&1)==1){
            return false;
        }
        
    }
    return true;
}
int main(){
    Disha;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(check_bitwise_or_even(n,a)){
        cout<<"bitwise OR is even\n";
    }
    else{
        cout<<"bitwise OR is odd\n";
    }
    

}
