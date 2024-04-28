#include<bits/stdc++.h>
#define Disha ios_base::sync_with_stdio(0);  cin.tie(0); cout.tie(0);
using namespace std;
vector<int>print_duplicates(vector<int>v,int n){
    unordered_map<int,int>m;
    vector<int>res;
    for(int i=0;i<n;i++){
        m[v[i]]++;
    }
    for(int i=0;i<n;i++){
        if(m[i]>=3){
        res.push_back(i);
    }
    
    }
    return res;
    // return res;
}
int main(){
    Disha;
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int>ans=print_duplicates(v,n);
    for(int p:ans){
        cout<<p<<"\n";
    }
  //  print_duplicates(v,n);

}
