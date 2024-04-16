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
    string s;
    cin>>s;
    reverse(s.begin(),s.end());
    string ss=" ";
    int count=0;
    for(int i=0;i<s.length();i++){
        if(count==3){
            ss+=',';
            ss+=s[i];
            count=0;

        }
        else{
            ss+=s[i];
        }
        count++;
       
    }
     reverse(ss.begin(),ss.end());
        cout<<ss<<"\n";
    

}
