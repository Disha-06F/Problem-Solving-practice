#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define F first
#define S second
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define Disha ios_base::sync_with_stdio(0);  cin.tie(0); cout.tie(0);
using namespace std;
const int  N=1e5+9;
char s[N];

int main(){
    Disha;
    
    
    cin>>s;
    if(strlen(s)==1){
        cout<<"0\n";
        return 0;

    }
    int sum=0;
    
        for(int i=0;i<strlen(s);i++){
            sum+=s[i]-'0';
        }
    
int c=1;
int cur_num=sum;

while(cur_num>9){
    int sum=0;
    while(cur_num>0){
        int k=cur_num%10;
        sum+=k;
        int p=cur_num/10;
        cur_num=p;
    }
    cur_num=sum;
    c++;

}
cout<<c<<"\n";
    

}
